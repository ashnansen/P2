#include <iostream>

*/ Navigation needs time, distance and direction.

//The calculations are.


//units of mesur see the units file. 

//distance by rotation
//distance by time traveled
//distance angle and time.
"

//Trianguating 
/* 

 
int main()
{


#include <QTRSensors.h>#include <NewPing.h>#include <SparkFun_TB6612.h>#define AIN1 4

#define BIN1 7

#define AIN2 2

#define BIN2 8

#define PWMA 3

#define PWMB 11

#define STBY 6#define pingPin 5QTRSensorsRC qtr((char[]) {19, 18, 17, 16, 15, 14}, 6);unsigned int sensor[6];int Threshold[6] = {150, 50, 150, 150, 150, 150};const int offsetA = 1;

const int offsetB = 1;NewPing sonar(5,5,4);Motor motor2 = Motor(AIN1, AIN2, PWMA, offsetA, STBY);

Motor motor1 = Motor(BIN1, BIN2, PWMB, offsetB, STBY);void setup()

{

Serial.begin(9600);

}void loop()

{

int cm = sonar.ping_cm();

 Serial.print("ping");

 Serial.print(cm);

 Serial.println("cm");qtr.read(sensor);/*

     Serial.print(sensor[0]); Serial.print(" "); Serial.print(sensor[1]); Serial.print(" ");

     Serial.print(sensor[2]); Serial.print(" "); Serial.print(sensor[3]); Serial.print(" ");

     Serial.print(sensor[4]); Serial.print(" "); Serial.print(sensor[5]); Serial.println(" "); */   if (sensor[0] > Threshold[0] && cm == 0)

  {

    motor1.drive(240);

    motor2.brake();

  }

  else if (sensor[0] > Threshold[0] && sensor[1] > Threshold[1] && cm == 0)

  {

   motor1.drive(240);

   motor2.drive(62);

  }

 else  if (sensor[1] > Threshold[1] && cm == 0)

  {

     motor1.drive(240);

     motor2.drive(90);

  }

 else if (sensor[1] > Threshold[1] && sensor[2] > Threshold[2] && cm == 0)

  {

     motor1.drive(240);

     motor2.drive(175);

  }

 else if (sensor[2] > Threshold[2] && cm == 0)

  {

     motor1.drive(240);

     motor2.drive(200);

  }

 else if (sensor[2] > Threshold[2] && sensor[3] > Threshold[3] && cm == 0)

  {

     motor1.drive(255);

     motor2.drive(255);

  }

 else if (sensor[3] > Threshold[3] && cm == 0)

  {

     motor1.drive(200);

     motor2.drive(240);

  }

 else if (sensor[3] > Threshold[3] && sensor[4] > Threshold[4] && cm == 0)

  {

   motor1.drive(175);

   motor2.drive(240);

  }

 else if (sensor[4] < Threshold[4] && cm == 0)

  {

     motor1.drive(90);

     motor2.drive(230);

  }

 else if (sensor[4] < Threshold[4] && sensor[5] < Threshold[5] && cm == 0)

  {

   motor1.drive(62);

   motor2.drive(240);

  }

 else if (sensor[5] > Threshold[5] && cm == 0)

  {

   motor1.brake();

   motor2.drive(240);

  } else

 {

   forward(motor1, motor2, 0);

 }

 delay(10);}

Message Input



}