#include <Sleep_n0m1.h>
#include <Servo.h>
#include <EEPROM.h>

Servo servo;
Sleep sleep; // sleep library is now a global variable

void setup() {
  // put your setup code here, to run once:
  servo.attach(6);
  sleep.pwrDownMode(); // Future calls to sleep.sleepDelay() will put the arduino in a
                       // very low power state while it sleeps
  

}

void loop() {
  // put your main code here, to run repeatedly:
  // Do something
  /**
   * Use normal delay() calls when your arduino is actively doing something, but needs to wait a second or two to let something finish or doing something else (e.g. letting a servo move to a position)
   * Use sleep.sleepDelay() for when your arduino is inactive for "long" periods of time (i.e. more than 5 seconds). 
   * If you are moving a servo / motor / other physical part, be sure you're adding a short delay() before you call sleepDelay(), otherwise it may appear to not move.
   */
  //sleep.sleepDelay(3000); // Low power sleep delay for 3 seconds (3000 milliseconds)
  delay(1000);
  servo.write(90);//midpoint
  delay(1000);
  servo.write(180);
  delay(1000);
  servo.write(0);
  
}
