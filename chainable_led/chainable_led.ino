/* 
 * Example of using the ChainableRGB library for controlling a Grove RGB.
 * This code fades in an out colors in a strip of leds.
 */


#include <ChainableLED.h>

#define NUM_LEDS  3

int SEN_TOUCH = A0;
int SEN_ROTARY = A1;

ChainableLED leds(7, 8, NUM_LEDS);

void setup()
{
  leds.init();
  pinMode(SEN_TOUCH, INPUT); 
  pinMode(SEN_ROTARY, INPUT); 
  
  Serial.begin(9600);
}

int randR = 0;
int randG = 0;
int randB = 0;

void loop()
{
    int vTouch = analogRead(SEN_TOUCH);
    int vRotary = analogRead(SEN_ROTARY);

//  Serial.println( vRotary );
  
  if(vTouch > 700){
    randR = random(100);
    randG = random(100);
    randB = random(100);    
  }
    
  for(int i=0; i<NUM_LEDS ; i++){
    leds.setColorRGB(i, randR, randG, randB);
//    leds.setColorHSB(i, randR , randG , 1.0);
  }
  Serial.println( randR * 1 );
  Serial.println( randG * 0.01 );
  
  delay(1000);
}
