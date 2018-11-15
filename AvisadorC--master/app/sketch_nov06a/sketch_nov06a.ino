const int switchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;//LED position
int led2;
long interval = /*(3600000*17)/100 = */2550;//Variable which have the interval that the leds will be switch on in miliseconds.
void setup() {
  for(int x = 2;x<8;x++){
    pinMode(x,OUTPUT);
    }
     pinMode(switchPin, INPUT);
  }
void loop(){
    
    unsigned long currentTime = millis();
    
    if(currentTime - previousTime > interval){
    
        previousTime = currentTime;
        digitalWrite(led, HIGH);
        led2 = led;
        led++;

        if(led == 7){
        }
    
        if(led2 == 7){

            delay(500);

            for(int i = led2; i >= 2; i--){
        
                digitalWrite(i, LOW);
        
            }
        }
    
    }

    switchState = digitalRead(switchPin);

    if(switchState != prevSwitchState){//Switch off the leds. x value represents the led number in the white board

        for(int x = 2;x<8;x++){
            digitalWrite(x, LOW);
        }
    
        led = 2;
        previousTime = currentTime;

    }

    prevSwitchState = switchState;

}
