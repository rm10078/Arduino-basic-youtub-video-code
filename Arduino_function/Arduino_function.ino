/*const int led=13;
void setup(){
pinMode(led,OUTPUT);  
  }
void loop(){
digitalWrite(led,HIGH);
delay(500);
digitalWrite(led,LOW);
delay(500);  
  
  }
*/

    //analogWrite function

/*const int aout=9;
void setup(){
  pinMode(aout,OUTPUT);
  }
void loop(){
  analogWrite(aout,0); //off
  delay(500);
  analogWrite(aout,100); //50%
  delay(500);
  analogWrite(aout,255); //100%
  delay(500);
  }
  */

          //digitalRead function

 /*const int button=4;
 void setup(){
  pinMode(button,INPUT);
  Serial.begin(9600);
  };
 void loop(){
  int result=digitalRead(button);   //return 1 and 0
  Serial.print("Button status = ");
  Serial.println(result);
  }*/

          //analogRead function

  const int aread=A0;
  void setup(){
    pinMode(aread,INPUT);
    Serial.begin(9600);
    }
  void loop(){
    int a=analogRead(aread);   //0v=0 and 5v=1024 2.5v=512
    Serial.print("analog value :: ");
    Serial.println(a);
    }
