#include<Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
int i;
int j;
void setup() {
  // put your setup code here, to run once:
  motor1.attach(1);
  motor2.attach(2);
  motor3.attach(3);
  for (j=0;j<3;j++){
    for(i=0;i<=30;i++){
      motor1.write(i);
      delay(40);
    }
    for(i=0;i<=0;i++){
      motor2.write(i);
      delay(120);
    }
    for(i=180;i>55;i--){
      motor3.write(i);
      delay(45);
    }
    for(i=0;i<=90;i++){
      motor2.write(i);
      delay(120);
    }
    for(i=30;i<=110;i++){
      motor1.write(i);
      delay(40);
    }
    for(i=90;i>=0;i--){
      motor2.write(i);
      delay(120);
    }
    for(i=0;i<=90;i++){
      motor3.write(i);
      delay(45);
    }
    for(i=0;i<=90;i++){
      motor2.write(i);
      delay(120);
    }
    for(i=110;i>=30;i--){
      motor1.write(i);
      delay(40);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
}
