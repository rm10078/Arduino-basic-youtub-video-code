int a=435;
float b=5676.7676;
void setup(){
Serial.begin(9600);
  }
void loop(){
Serial.print("Print int value:: ");
Serial.println(a);
Serial.print("Print float value:: ");
Serial.println(b);
delay(2000);
  }
