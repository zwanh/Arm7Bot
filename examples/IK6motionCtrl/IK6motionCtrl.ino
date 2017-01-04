#include <Arm7Bot.h>
Arm7Bot Arm;

void setup() {
  Arm.begin(&Serial);
  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);

  Arm.moveIK6( {200, 200, 200}, {1, 0, 1}, {0, 1, 0}, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.moveIK6( {100, 200, 100}, {0, 0, -1}, {0, 0, -1}, 0 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);


  Arm.moveIK6( {200, 100, 100}, {1, 0, -1}, {1, 1, 1}, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);
}

void loop() {


}
