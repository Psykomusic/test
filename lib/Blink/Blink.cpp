#include "Blink.h"
#include "mbed.h"

Blink::Blink(PinName led) : _led(led) {
  _led = 1;
}


void Blink::Blinky(int n, float sec){
  for (int i =0; i< n; ++i) {
    _led = 0;
    wait(sec);
    _led = 1;
    wait(sec);
  }
  _led = 1;
}

void Blink::StopBlink(){
    if (!_led) {
      _led = 1;
    }
  }

void Blink::GoBlink(){
  _led = 0;
}

void Blink::BlinkyBlinks(Blink led1, Blink led2, int n) {
  for (int i =0; i< 2*n; ++i) {
      led1.GoBlink();
      wait(0.4);
      led1.StopBlink();
      led2.GoBlink();
      wait(0.4);
      led2.StopBlink();
  }
}
void Blink::BlinkyBlinders(Blink leds[],int lenght, float waitingTime) {
  for (int i =0; i< lenght; ++i) {
    leds[i].GoBlink();
    wait(waitingTime);
    leds[i].StopBlink();
    wait(waitingTime);
  }
}

void Blink::Noise(){
  Blink red(LED1);
  Blink blue(LED3);
  Blink green(LED2);
  int i = 0;
  while(1){
    if(i % 4 == 0){
      red.GoBlink();
    }
    if( i % 3 == 0){
      blue.GoBlink();
    }
    if( i % 6 == 0){
      green.GoBlink();
    }
    wait(0.05);
    if( i % 5 == 0){
        red.StopBlink();
    }
    if( i % 13 == 0){
        green.StopBlink();
    }
    if( i % 11 == 0){
        blue.StopBlink();
    }
    if( i % 17 == 0){
      blue.StopBlink();
      green.StopBlink();
      red.StopBlink();
    }
    wait(0.05);
    i++;
    if(i > 9000){
      i =0;
    }
  }

}
void Blink::FrenchFlag(){
  Blink red(LED1);
  Blink blue(LED3);
  Blink green(LED2);

  blue.GoBlink();
  wait(0.5);
  red.GoBlink();
  green.GoBlink();
  wait (0.5);
  green.StopBlink();
  blue.StopBlink();
  wait(0.5);
  red.StopBlink();
}
