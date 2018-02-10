#include "RedBotter.h"
#include <RedBot.h> 

/*
* Average Speeds
* 1 - 25 in / sec
* 2 - 11 in / sec
* 3 - 6 in / sec
* 4 - 4 in / sec
*/
#define AVG_SPEED_1 25
#define AVG_SPEED_2 11
#define AVG_SPEED_3 6
#define AVG_SPEED_4 4


RedBotter::RedBotter(RedBotMotors &motors)
{
    motor = motors;
}

void RedBotter::driveDistance(int distance, int velocity)
{
   float t = 0.0;
   switch(velocity){
      case 1:
         t = (float) distance / (float) AVG_SPEED_1;
      case 2:
         t = (float) distance / (float) AVG_SPEED_2;
      case 3:
         t = (float) distance / (float) AVG_SPEED_2;
      case 4:
         t = (float) distance / (float) AVG_SPEED_2;
   }
   motor.drive(255 / velocity);
   delay(1000 * t);
   motor.brake();
}

