#include <Arm7Bot.h>
Arm7Bot Arm;

void setup() {
  Arm.begin(&Serial);
  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);

  Arm.moveIK5( {200, 200, 200}, {0, 1, 0}, 90, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.moveIK5( {100, 200, 100}, {0, 0, -1}, 60, 0 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);


  Arm.moveIK5( {200, 100, 100}, {1, 1, 1}, 30, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);
}

void loop() {


}
