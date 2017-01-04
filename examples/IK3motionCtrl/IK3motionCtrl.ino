#include <Arm7Bot.h>
Arm7Bot Arm;

void setup() {
  Arm.begin(&Serial);
  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);

  Arm.moveIK3( {200, 200, 200}, 90, 90, 90, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.moveIK3( {100, 200, 200}, 90, 50, 90, 0 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.moveIK3( {100, 100, 200}, 60, 120, 90, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.moveIK3( {200, 100, 200}, 120, 120, 90, 50 );
  while (!Arm.allConverge()) delay(20);
  delay(2000);

  Arm.initialMove();
  while (!Arm.allConverge()) delay(20);
}

void loop() {


}
