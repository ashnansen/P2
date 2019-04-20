#include <Wire.h>
#include <>


// Bluetooth https://www.arduino.cc/en/Main/ArduinoBoardBT?from=Main.ArduinoBoardBluetooth


// defines motor 



// right_motor1_pin's 

const int pwma  =    3 ;
const int ain1   =    2 ;
const int bin1  =    7 ;


//encoderRight

encoder_Right_A =
encoder_Right_B =

// left_motor2_pin's 

const int pwmb  =   11 ;  
const int bin2  =    8 ;
const int ain2   =    4 ;

//encoderLeft

encoder_Left_A = 
encoder_Left_B =


//Parrameters for motor and wheels

const int drive_distance = 100;   // cm
const int motor_power = 0;      // 0-255 Speed is a variation of distans to obsticals. and the calculation is including ultrasonic sensors. 
const int motor_offset = 5;       // Diff. when driving straight
const int wheel_d = 60;           // Wheel diameter (mm)
const float wheel_c = PI * wheel_d; // Wheel circumference (mm)
const int counts_per_rev = 384;   // (4 pairs N-S) * (48:1 gearbox) * (2 falling/rising edges) = 384

 const int stby  =    6 ;  // What is this? 

// Controle input

const int encoderRight = 0  ; // This is the magnetic encoder for
const int encoderLeft  = 0  ; // This is the magnetic encoder for 

const float leftRead = pwma
const float r
float leftRead;
float rightRead;
float leftSpeed;
float rightSpeed;
int error = 0;
float P;
float I;
float D;
float prevError;
float motorSpeed = 0;
float lSpeedPWM;
float rSpeedPWM;
float PIDValue;
float Kp = 60.0;
float Ki = 1;
float Kd = 10;
float duration;
float dist; 
float total;
float readings[numreadings];

// This are variables and the are floats to get more precise control over the robot. 

float rSpeed = 0;
float rBackward = 0;
float rForward = 0;
float lSpeed = 0; 
float lBackward = 0; 
float lForward = 0;
float stby = 0;  

 void ird()
 // This is for starting the robot.

{
    start command
    dans  command 
}



 void map() // The place where the size of the map is calculated and the perminent obsticals.
{

// matrix nxn // getting the matrix is ()


}





//void compass_rotation




// https://www.arduino.cc/en/Tutorial/Robot Compass http://www.robot-electronics.co.uk/files/cmps12.pdf


 void surunding_discovery






void start()
{




}



 void navigation()
{



}

 void position ()
{




}
 




void Speed()

{
    Ultrasonicsensor input()  // taking the input and retract or substract a sum.  
}


void obsticals()
{




}

void dans() // For the fun of it. 
{



}


void save()
{

}

void setup()
{ Serial.begin(9600);   
digitalread(encoderLeft,INPUT); // 
digitalread(encoderRight,INPUT); // 

digitalwrit()
digitalwrit()






}




void loop

{

    




    Serial.begin(9600);


// constant int


// constant flotes 

}

void loop

{


    digitalread() 

    digitalwrit ()



}
// Statistics https://playground.arduino.cc/Main/Statistics/
// Statistics 


