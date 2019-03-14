/*

This is the test set up for the robot.
for each pin the type needs to be in a comment. 

 */


// defines motor 

/*

// right

const int pwma  =    3 ;
const int ain1   =    2 ;
const int bin1  =    7 ;

*/ 

/*
// left motor2

const int pwmb  =   11 ;  
const int bin2  =    8 ;
const int ain2   =    4 ;

*/

const int stby  =    6 ;  // What is this? 

// defining controle input

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
/*
void ird()

{
    start command
    dans  command 
}

void start()
{

compass rotation

surunding discovery 


}

void map() // The place where the size of the map is calculated and the perminent obsticals.
{}

void navigation()
{



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

*/

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