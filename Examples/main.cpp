#include "mbed.h"
#include "Blink.h"

Blink led_green(LED2);
Blink led_blue(LED3);

int main() {
    led_green.Blinky(5, 0.2);
    led_blue.Blinky(5, 0.2);

    Blink::BlinkyBlinks( led_green, led_blue, 5);
    led_green.StopBlink();
    led_blue.StopBlink();
}
