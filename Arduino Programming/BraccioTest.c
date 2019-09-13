#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_ver;
Servo wrist_rot;
Servo gripper;


void setup() {
  //setup code here to run once:
  Braccio.begin();
}

void loop() {
  //main code here to run repeatedly:
  //                          M1,   M2,     M3,   M4,     M5,     M6

    Braccio.ServoMovement(20,   0,    45,     180,  180,    90,      10);
    delay(1000);
    Braccio.ServoMovement(20,   0,    90,     180,  180,    90,      10);
    Braccio.ServoMovement(10,   0,    90,     180,  180,    90,      60);
    Braccio.ServoMovement(20,   0,    45,     180,  45,    0,      60);
    Braccio.ServoMovement(20,   180,    45,     180,  45,    0,      60);
    Braccio.ServoMovement(20,   0,    90,     180,  180,    90,      60);
    Braccio.ServoMovement(20,   0,    90,     180,  180,    90,      10);

}








