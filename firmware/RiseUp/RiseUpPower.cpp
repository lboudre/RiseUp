#include "RiseUpPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint16_t gpsPwrPin = 2;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;


/*
 * int - some Arduino board define 2-bytes, but some actually do 4-bytes
 * float - give you decimals; float is less precise than double 
 * double - give you decimals; more precise
 * floats take less space
 * efficiency is important due to memory
 * Stay with floats when possible
 * 
 * uint8_t - unsigned 8 bit integer (0-255)
 * unint16_t - unsigned 16 integer (0-65355)
 * 
 * int8_t - signed 8 bit integer [-127, 127]
 * int16_t - signed 16-bit integer [-32768, 32767]
 * 
 */

RiseUpPower::RiseUpPower()
{
//Can be used to initialize pins or variables but not in this class 
}
void RiseUpPower::begin()
{
  pinMode(chrgPin, INPUT);
  pinMode(gpsPwrPin, OUTPUT);
}

// Returns whether or not the battery is charging 
bool RiseUpPower::isCharging()
{
  return !digitalRead(chrgPin); //Return 1 if charging, 0 if not charging
}
uint16_t RiseUpPower::getBatteryVoltage()
{
  //uint16_t val = analogRead(battPin); // 10-bit ADC, will return a number between 0(0V) and 1023 (3.3V)
  // uint16_t voltage = 3300*(val/1023.0); // Return voltage in mV to avoid floating - Negative numbers will wrap around! Be careful

  return 2*VDD*(analogRead(battPin)/(float)adcResolution);
}

void RiseUpPower::enableGPS()
{
  digitalWrite(gpsPwrPin, HIGH); //enables regulator, turning on GPS circuit
}
void RiseUpPower::disableGPS()
{
  digitalWrite(gpsPwrPin, LOW); //disables regulator, turning off GPS circuit
}

void RiseUpPower::enableMP3()
{
  
}
void RiseUpPower::disableMP3()
{
  
}
