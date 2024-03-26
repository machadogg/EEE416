#include<Wire.h> // Library to configure I2C

const int button = 2; // Button connected to one of the interrupt pins of the Arduino

volatile int flag = LOW; // Flag to detect the button press

byte numPress = 48; // ASCII value for number zero (0)

void press(){ // ISR
  flag = HIGH;
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Builtin LED configured as output
  pinMode(button,INPUT); // Button configured as input 
  delay(3000); // Delay of 3 seconds before start the configuration of the wire library 
  digitalWrite(LED_BUILTIN,HIGH);
  
  // Configures the I2C protocol
  Wire.begin();
  Wire.beginTransmission(8); // Transmits to address 8
  Wire.write(numPress); // Transmits the number 0 to start the LCD in the receiver
  Wire.endTransmission(); // Ends the transmission 

  // Interrput attachement to the button (it uses a Pull-up resistor, so it detectes as FALLING)
  attachInterrupt(digitalPinToInterrupt(button), press, FALLING);
}

void loop()
{
  
  if(flag){ // The flag is TRUE one the button is pressed, but the transmission does not
            // happen in the ISR.         
    
    (numPress < 57) ? numPress++ : numPress = 48; // If the number of presses is greater than 9 (ASCII 57)
                                                  // it goes back to zero (ASCII 48)

    Wire.beginTransmission(8); // Begins the communication with Adress 8.
    Wire.write(numPress);      // Sends the number of presses 
    Wire.endTransmission();    // Ends transmission//
    Serial.print("Sent: ");
    Serial.write(numPress);
    Serial.println(' ');
    flag = LOW; // Disables the flag 
  }
  
  delay(100);
}


