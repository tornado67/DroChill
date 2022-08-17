#include <Arduino.h>
#include <BleMouse.h>
#define MINUTE 60000

BleMouse bleMouse("DroChill mouse jiggler v1");
 
int move_interval = 3;
int loop_interval = MINUTE * 1;

void setup()
{
   bleMouse.begin();
}

void loop()
{

  int distance = random(10, 800);
  int x = random(3) - 1;
  int y = random(3) - 1;
  for (int i = 0; i < distance; i++) {
    
    bleMouse.move(x, y, 0);
    delay(move_interval);
    
  }
  
  if (random(0,7) == 3 )
        bleMouse.click(MOUSE_RIGHT);
  
  delay(loop_interval);
}
