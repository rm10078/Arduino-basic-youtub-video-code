/*int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delayMicroseconds();//1000000 =1s
digitalWrite(led,LOW);
delay(500); //millis 1000=1s; 1000=1ms
}*/


          //millis

/*void setup(){
Serial.begin(9600);  
  }

void loop(){
long a=millis();
long s=a/1000;
Serial.print("Millis  = ");
Serial.println(a);
Serial.print("Seconds = ");
Serial.println(s);
  }

  */

        //micros

void setup(){
  Serial.begin(9600);
  }
void loop(){
  long b=micros();
  long m=b/1000;
  long s=m/1000;
  Serial.print("Micros = ");
  Serial.println(b);
  Serial.print("Millis = ");
  Serial.println(m);
  Serial.print("Seconds = ");
  Serial.println(s);
  }
