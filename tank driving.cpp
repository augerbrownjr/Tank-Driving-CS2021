/* c++ code 
by Aly Brown 10CRL
finished on /8/21


*/
//include necessary libraries and the like 
#include <Servo.h> 
serial.begin(9600)
// Define variables used throughout the project (specifics after each particular variable)
/*define values for the pins that turn each motor left or right respectively and the controls for their speed;
 (not incredibly efficient however will assist the readability of the code) */ 

char inputreceived = null 


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

// store variables for the h206 bluetooth control chip 
int txpinarduino = 18; 
int rxpinarduino = 19; 
bool tempfix = false

int delayvalue = 500; 
//store variables for referring to the servo pins later in the project

//todo figure out servos 

// setup variables for referring to the switch statement in loop 
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

void vroomvroom () {
    digitalWrite(motor1spinright, HIGH);
    digitalWrite(motor1speed, HIGH);
    digitalWrite(motor2spinright, HIGH);
    digitalWrite(motor2speed, HIGH);
    digitalWrite(motor3spinright, HIGH);
    digitalWrite(motor3speed, HIGH);
    digitalWrite(motor4spinright, HIGH);
    digitalWrite(motor4speed, HIGH);                               




}
void negativevroomvroom () {
    digitalWrite(motor1spinleft, HIGH);
    digitalWrite(motor1speed, HIGH);
    digitalWrite(motor2spinleft, HIGH);
    digitalWrite(motor2speed, HIGH);
    digitalWrite(motor3spinleft, HIGH);
    digitalWrite(motor3speed, HIGH);
    digitalWrite(motor4spinleft, HIGH;)
    digitalWrite(motor4speed, HIGH);


}
// turn towards the right 
void TokyoDrift() {

    //left wheels forward 
    digitalWrite(motor1spinright, HIGH);
    digitalWrite(motor1speed, HIGH); 
    digitalWrite(motor3spinright, HIGH);
    digitalWrite(motor3speed, HIGH);
    // right wheels back
    digitalWrite(motor2spinleft, HIGH);
    digitalWrite(motor2speed, HIGH); 
    digitalWrite(motor4spinleft, HIGH);
    digitalWrite(motor4speed, HIGH); 


}
//turn left 
void NiigataDrift() {
    
    //right wheels go forward; left wheels go backward 
    digitalWrite(motor2spinright, HIGH);
    digitalWrite(motor2speed, HIGH);
    digitalWrite(motor4spinright, HIGH);
    digitalWrite(motor4speed, HIGH);

    
    digitalWrite(motor1spinleft, HIGH);
    digitalWrite(motor1speed, HIGH);
    digitalWrite(motor3spinleft, HIGH); 
    digitalWrite(motor3speed, HIGH);
}

void speedwipe() {
    // set all speeds to 0 - I'm aware this is ineffcient and will rely on friction to stop the car 
    // however, we simply do not have better options available to us at this time.
    digitalWrite(motor1speed, LOW);
    digitalWrite(motor2speed, LOW);
    digitalWrite(motor3speed, LOW);
    digitalWrite(motor4speed, LOW);
}

void loop () { 




Inputgoto: 
if (serial.available() )
    inputreceived = Serial.read();
// i apologise in advance for the abomination that is this goto switch but i simply cannot think of any other solution    
switch (inputreceived)
{

    case 'W' :
    vroomvroom();
    delay(delayvalue);
    goto Inputgoto;

    case 'A' : 
    NiigataDrift(); 
    delay(delayvalue); 
    goto Inputgoto; 

    case 'S' : 
    negativevroomvroom;
    delay(delayvalue);
    goto Inputgoto;

    case 'D':
    TokyoDrift();
    delay(delayvalue); 
    goto Inputgoto; 

    default:
    goto Inputgoto; 

}


}