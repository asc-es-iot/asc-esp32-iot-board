#include <WiFi.h>
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

const char* ssid     = "Galaxy";      // Enter your network SSID
const char* password = "hello123";      // Enter your network password
int led = 4;                    // Onboard LED
WiFiServer server(80);

void setup()
{
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);
    Serial.begin(115200);
    pinMode(led, OUTPUT);      // Set the LED pin mode

    delay(10);

    // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
   
    server.begin();

}

void loop(){
 WiFiClient client = server.available();   // Listen for incoming clients

  if (client) {                            
    Serial.println("New Client.");          
    String currentLine = "";                
    while (client.connected()) {            
      if (client.available()) {            
        char c = client.read();            
        Serial.write(c);                  
        if (c == '\n') {                  


          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();
            client.println("<html>");
            client.println("<head><style>");
            client.println("body { font-size: 24px; text-align: center; margin-top: 50px; }");
            client.println("button { font-size: 18px; padding: 10px 20px; background-color: #4CAF50; color: white; border: none; }");
            client.println("button:hover { background-color: #45a049; }");
            client.println("</style></head>");
            client.println("<body>");
            client.println("<h1>ESP32 LED Control</h1>");
            client.println("<p>Click the buttons below to control the LED on pin 4:</p>");
            client.println("<form action='/H'><button>Turn On</button></form>");
            client.println("<form action='/L'><button>Turn Off</button></form>");
            client.println("</body>");
            client.println("</html>");
        
            break;
          } else {    
            currentLine = "";
          }
        } else if (c != '\r') {  
          currentLine += c;      
        }

        // Check to see if the client request was "GET /H" or "GET /L":
        if (currentLine.endsWith("GET /H")) {
          digitalWrite(led, HIGH);               // GET /H turns the LED on
        }
        if (currentLine.endsWith("GET /L")) {
          digitalWrite(led, LOW);                // GET /L turns the LED off
        }
      }
    }
    // close the connection:
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
