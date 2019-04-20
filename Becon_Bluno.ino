//Bluetooth Setup for Telemetry
//https://opwiki.readthedocs.io/en/latest/user_manual/oplink/bluetooth.html

becon_name      = //Btnumber[1;3]
becon_time      = // the time stap for when the becon_packet was sende 
becon_packet    = // the packet number



void setup()

// Compass 



// Polarcoordiants https://github.com/sdumetz/coordinates
 {
  Serial.begin(115200);  //initial the Serial
}
void becon(){}// the basic setup for the becon 



void loop() {
  if (Serial.available())  {
    Serial.write(Serial.read());//send what has been received
    Serial.println();   //print line feed character
  
    EEPROM.write(addr, val); // Saving last Position. https://www.arduino.cc/en/Tutorial/EEPROMWrite
  }
}