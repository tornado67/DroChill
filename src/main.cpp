#include <Arduino.h>
#include <BleMouse.h>
#define MINUTE 60000
#define X_RANDOM_RANGE 3
#define Y_RANDOM_RANGE 3

BleMouse bleMouse("DroChill Mouse Jiggler v1");

int move_interval = 12; // with lower interval  notify(): << esp_ble_gatts_send_ notify: rc=-1 Unknown ESP_ERR error appears
int loop_interval = MINUTE * 1;
uint16_t min_distance, max_distance;

void setup()
{
  min_distance = 30;
  max_distance = 600;
  bleMouse.begin();
}

void loop()
{

  int distance = random(min_distance, max_distance);
  int x = random(X_RANDOM_RANGE) - 1;
  int y = random(Y_RANDOM_RANGE) - 1;

  for (int i = 0; i < distance; i++)
  {
    bleMouse.move(x, y, 0);
    delay(move_interval);
  }

  if (random(0, 7) == 3)
    bleMouse.click(MOUSE_RIGHT);

  delay(loop_interval);
}
