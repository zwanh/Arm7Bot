#include <Arm7Bot.h>
Arm7Bot Arm;

void setup() {
  // initial 7Bot Arm
  Arm.begin(&Serial);
  Arm.initialMove();
}

void loop() {
  // run softwareSystem
  Arm.softwareSystem();
}
