#ifndef BLINK_H
#define BLINK_H
#include "mbed.h"

class Blink
{
  private :
    DigitalOut _led;


  public :
    Blink(PinName);
    void Blinky(int, float);
    void StopBlink();
    void GoBlink();
    static void BlinkyBlinks(Blink, Blink, int);
    static void BlinkyBlinders(Blink* ,int , float);
    static void FrenchFlag();
    static void Noise();
};

#endif
