/* Insert a Description that summerizes the class:
 * This is the C Plus plus header file
 */
 
#ifndef RiseUpPower_h
#define RiseUpPower_h

#include <Arduino.h>

class RiseUpPower
{
private:
  
public:

  RiseUpPower();
  void begin();
  
  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3(); //Save battery
    
};

#endif 
