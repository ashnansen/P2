// defines pins numbers     
const int trigPin = 12;
const int echoPin = 11;
const int numReadings = 10;

// defines variables
long duration;
float distance = 0.0;

float alfa = 0.7;
float beta = 0.2;
float smoothedSound = 0.0;
float lastSmoothedSound = 0.0;
float lastDistance = 0.0;
float dt = 0.0; 

int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
float total = 0.0;                  // the running total
float smoothedDistance = 0.0;                // the average

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication

for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}
void loop() {
digitalWrite(trigPin, LOW); // Clears the trigPin
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); // Sets the trigPin on HIGH state for 10 micro seconds
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
distance= duration*0.034/2; // Calculating the distance

dt = lastDistance - distance;
lastDistance = distance;
smoothedSound = alfa * lastSmoothedSound + (beta - 1) * dt;
lastSmoothedSound = smoothedSound;

// subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = distance;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  smoothedDistance = total / numReadings;



Serial.print("smoothedDistance: ");
Serial.print(smoothedDistance);
Serial.print(" ");
Serial.print("Distance: "); // Prints the distance on the Serial Monitor
Serial.println(distance);
}