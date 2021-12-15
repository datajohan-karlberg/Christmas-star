#include <Adafruit_NeoPixel.h>

//define NeoPixel Pin and Number of LEDs
#define PIN 5
#define NUM_LEDS 10

//create a NeoPixel strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
int stark=180;
int stark2=250; 
void setup() {
  // start the strip and blank it out
  strip.begin();
  strip.show();
}

void loop() {
  // set pixel to red, delay(1000)


strip.setPixelColor(0, 0, 0, stark);
strip.setPixelColor(1, 0, 0, stark);

strip.setPixelColor(2, 0, stark,0);
strip.setPixelColor(3, 0, stark,0);

strip.setPixelColor(4,  stark,0,0);
strip.setPixelColor(5,  stark,0,0);

strip.setPixelColor(6,  stark,0,stark);
strip.setPixelColor(7,  stark,0,stark);

strip.setPixelColor(8,  stark,stark,0);
strip.setPixelColor(9,  stark,stark,0);

for(int j=1; j<100;j++){
strip.show();
delay(100);
 flytta2();
}

////////////////////////////////////////////////
  delay(1000);
////////////////////////////////////////////////

for(int j=1; j<7;j++){

 for(int i=0;i<NUM_LEDS;i++){
 strip.setPixelColor(i, 0, 0, 0);
 }

switch (j) {
    case 1:
      strip.setPixelColor(0, 0, 0, stark2);
      strip.setPixelColor(5, 0, 0, stark2);
      break;
    case 2:
      strip.setPixelColor(0, 0, stark2, 0);
      strip.setPixelColor(5, 0, stark2, 0);
      break;
       case 3:
      strip.setPixelColor(0, stark2, 0, 0);
      strip.setPixelColor(5, stark2, 0, 0);
      break;
            case 4:
      strip.setPixelColor(0, stark2, stark2, 0);
      strip.setPixelColor(5, stark2, stark2, 0);
      break;
            case 5:
      strip.setPixelColor(0, stark2, 0, stark2);
      strip.setPixelColor(5, stark2, 0, stark2);
      break;
            case 6:
      strip.setPixelColor(0, stark2, stark2, stark2);
      strip.setPixelColor(5, stark2, stark2, stark2);
      break;
    default: 
      // if nothing else matches, do the default
              
      // default is optional
    break;
  }

////////////////////////////////////////////////
for(int j=1; j<50;j++){
 flytta2();
strip.show();
delay(80);
  
}



////////////////////////////////////////////////
 //delay(100);
}

  


  
 
  ///////////////////////////////////
for(int j=1; j<7;j++){

 for(int i=0;i<NUM_LEDS;i++){
 strip.setPixelColor(i, 0, 0, stark);

switch (j) {
    case 1:
      strip.setPixelColor(i, 0, 0, stark);
      break;
    case 2:
      strip.setPixelColor(i, 0, stark, 0);
      break;
       case 3:
      strip.setPixelColor(i, stark, 0, 0);
      break;
            case 4:
      strip.setPixelColor(i, stark, stark, 0);
      break;
            case 5:
      strip.setPixelColor(i, stark, 0, stark);
      break;
            case 6:
      strip.setPixelColor(i, stark, stark, stark);
      break;
    default: 
      // if nothing else matches, do the default
   
      
      
      // default is optional
    break;
  }

  
  strip.show();
  delay(100);
 }
  delay(2600);
}

//////////////////////////////////////////



for(int j=1; j<7;j++){

 for(int i=0;i<NUM_LEDS;i++){
 strip.setPixelColor(i, 0, 0, 20);

switch (j) {
    case 1:
      strip.setPixelColor(i, 0, 0, stark);
      break;
    case 2:
      strip.setPixelColor(i, 0, stark, 0);
      break;
       case 3:
      strip.setPixelColor(i, stark, 0, 0);
      break;
            case 4:
      strip.setPixelColor(i, stark, stark, 0);
      break;
            case 5:
      strip.setPixelColor(i, stark, 0, stark);
      break;
            case 6:
      strip.setPixelColor(i, stark, stark, stark);
      break;
    default: 
      // if nothing else matches, do the default
   
      
      
      // default is optional
    break;
  }

  
  strip.show();
  delay(100);
 }
//////////////
 
 ////////////
  delay(3200);
}


//////////////////////////////////////////








}




void flytta (){
  
 uint32_t a1;
 
 a1= strip.getPixelColor(0);
  
  
  
  for(int i=0;i<(NUM_LEDS-1);i++){
   strip.setPixelColor(i,strip.getPixelColor(i+1)); 
  }
  strip.setPixelColor(NUM_LEDS-1,a1);

  
  }
  
void flytta2 (){
  
 uint32_t a1;
 
 a1= strip.getPixelColor(NUM_LEDS-1);
  
  
  
  for(int i=(NUM_LEDS-1);i>0;i=i-1){
   strip.setPixelColor(i,strip.getPixelColor(i-1)); 
  }
  strip.setPixelColor(0,a1);

  
  }
