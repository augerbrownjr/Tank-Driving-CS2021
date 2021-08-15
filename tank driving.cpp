/* c++ code 
by Aly Brown 10CRL
finished on /8/21


*/
//include necessary libraries and the like 
#include <Servo.h> 

// Define variables used throughout the project (specifics after each particular variable)
/*define values for the pins that turn each motor left or right respectively and the controls for their speed;
 (not incredibly efficient however will assist the readability of the code) */ 
int motor1spinright = 3;
int motor1spinleft = 2 ;
int motor1speed = 4;

int motor2spinright = 7; 
int motor2spinleft = 6 ; 
int motor2speed = 5;

int motor3spinright = 8; 
int motor3spinleft = 9; 
int motor3speed =  10;

int motor4spinright = 12 ; 
int motor4spinleft = 13; 
int motor4speed = 11; 
// begin setup of pins for various outputs 
void setup(){
    pinMode(motor1spinright, OUTPUT);
    pinMode(motor1spinleft, OUTPUT);
    pinMode(motor1speed, OUTPUT);
    
    pinMode(motor2spinright, OUTPUT);
    pinMode(motor2spinleft, OUTPUT);
    pinMode(motor2speed, OUTPUT);

    pinMode(motor3spinright, OUTPUT);
    pinMode(motor3spinleft, OUTPUT);
    pinMode(motor3speed, OUTPUT);

    pinMode(motor4spinleft, OUTPUT);
    pinMode(motor4spinleft, OUTPUT);
    pinMode(motor4speed, OUTPUT);


}

void loop () { 
 
if placeholderinput ...     




}