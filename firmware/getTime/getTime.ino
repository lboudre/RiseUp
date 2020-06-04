/* Author: Nathan Seidle
  Created: Septempter 27th, 2019
  License: MIT. See SparkFun Arduino Apollo3 Project for more information

  This example demonstrates how to initialize and read from the on board RTC.
  Most SparkFun Artemis boards have the necessary external 32kHz crystal to
  enable the RTC. If you are using the Artemis module bare you will either
  need an external 32kHz xtal or use the internal LFRC. Read the datasheet
  section 12.1 for more information.

  This example is based on the Ambiq SDK EVB2 RTC example.
*/

#include "RTC.h" //Include RTC library included with the Aruino_Apollo3 core
APM3_RTC myRTC; //Create instance of RTC class

void setup()
{
  Serial.begin(115200);
  Serial.println("SparkFun RTC Example");

  myRTC.setToCompilerTime(); //Easily set RTC using the system __DATE__ and __TIME__ macros from compiler
  //myRTC.setTime(7, 28, 51, 0, 21, 10, 15); //Manually set RTC back to the future: Oct 21st, 2015 at 7:28.51 AM
}

void loop()
{
  myRTC.getTime();

  Serial.printf("It is now ");
  Serial.printf("%d:", myRTC.hour);
  Serial.printf("%02d:", myRTC.minute);
  Serial.printf("%02d.", myRTC.seconds);
  Serial.printf("%02d", myRTC.hundredths);

  Serial.printf(" %02d/", myRTC.month);
  Serial.printf("%02d/", myRTC.dayOfMonth);
  Serial.printf("%02d", myRTC.year);

  Serial.printf(" Day of week: %d =", myRTC.weekday);
  Serial.printf(" %s", myRTC.textWeekday);

  Serial.println();

  delay(1000);
}
