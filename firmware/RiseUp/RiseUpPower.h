#ifndef RiseUpPower_h
#define RiseUp_h

//Standard Arduino libraries
#include <Arduino.h>

class RiseUpPower
{
  private:


  public: 
    bool isCharging();
    uint16_t getBatteryVoltage();
  
};

#endif
