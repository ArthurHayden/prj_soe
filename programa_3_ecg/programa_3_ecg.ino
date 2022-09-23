

long instance1=0, timer;
unsigned long delayEnvio;
double hrv =0, hr = 72, interval = 0;

int value = 0, count = 0;  

bool flag = 0;

#define shutdown_pin 10 

#define threshold 100  

#define timer_value 10000 

void setup() {

  Serial.begin(9600);

  pinMode(8, INPUT); 

  pinMode(9, INPUT); 
  pinMode(10, OUTPUT); 


}

void loop() { 

  if((digitalRead(8) == 1)||(digitalRead(9) == 1)){

    Serial.println("leads off!");

    digitalWrite(shutdown_pin, LOW); 

    instance1 = micros();

    timer = millis();

  }

  else {

    digitalWrite(shutdown_pin, HIGH); 

    value = analogRead(A0);

    value = map(value, 250, 400, 0, 100); 

    if((value > threshold) && (!flag)) {

      count++;  

      //Serial.println("in");

      flag = 1;

      interval = micros() - instance1;

      instance1 = micros(); 

    }

    else if((value < threshold)) {

      flag = 0;

    }

    if ((millis() - timer) > 10000) {

      hr = count*6;

      timer = millis();

      count = 0; 

    }

    hrv = hr/60 - interval/1000000;
    


    Serial.println(value);

    delay(1);

   // void loop () {
        if ( (millis() - delayEnvio) > 1000){
          Serial.println(value);
          digitalWrite(10,Serial.println(value));
          delayEnvio = millis();
      }
   // }
      }
    }

  //}

//}
