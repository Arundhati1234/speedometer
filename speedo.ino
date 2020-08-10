#include <LiquidCrystal.h>


int val;
float start_time;
int count_0 = 0;
float end_time;

int range1 = 100;
int range2 = 200;
int range3 = 300;
int range4 = 400;
int range5 = 500;
int range6 = 900;
int range7 = 1000;
int range8 = 1500;
int range9 = 2000;
int range10 = 2500;
int range11 = 3000;





LiquidCrystal lcd(12,11,5,4,3,2);
int inp = 13;
int led1 = 7;
int led2 =22;
int led3 = 22;
int led4 = 31;
int led5 = 32;
int led6 = 33;
int led7 = 34;
int led8 = 35;
int led9 = 42;
int led10 = 44;
int led11 = 52;
int led12 = 21;

int sensor_inp = 8;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(inp, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Wlcm to Speedo");
  delay(5000);
  lcd.setCursor(0,0);
  lcd.print("              ");
  pinMode(sensor_inp,INPUT);
  
}

void loop() {

  //  val=digitalRead(inp);
  //  Serial.print(val);
  lcd.setCursor(0,0);
  lcd.print("TIME: ");
  lcd.print(millis()/1000);
  start_time = millis();
  do {
    val = digitalRead(sensor_inp);
    //    Serial.print(val);
    if (val == 0)
      count_0++;
    end_time = millis();
  } while ((end_time - start_time) <= 1000);

  Serial.print("Zeroes: ");
  Serial.println(abs(count_0));
  
 led();
lcd_work();
  count_0 = 0;

}




void lcd_work(){
  lcd.setCursor(0,1);
  
  if (count_0>range11)
  lcd.print("LVL 01");
  else if ((count_0>range10)&&(count_0<=range11))
  lcd.print("LVL 02");

  else if ((count_0>range9)&&(count_0<=range10))
  lcd.print("LVL 03");
  
  else if ((count_0>range8)&&(count_0<=range9))
  lcd.print("LVL 04");
 
  else if ((count_0>range7)&&(count_0<=range8))
  lcd.print("LVL 05");
  
  else if ((count_0>range6)&&(count_0<=range7))
  lcd.print("LVL 06");
    else if ((count_0>range5)&&(count_0<=range6))
  lcd.print("LVL 07");
    else if ((count_0>range4)&&(count_0<=range5))
  lcd.print("LVL 08");
    else if ((count_0>range3)&&(count_0<=range4))
  lcd.print("LVL 09");
    else if ((count_0>range2)&&(count_0<=range3))
  lcd.print("LVL 10");
  else if ((count_0>range1)&&(count_0<=range2))
  lcd.print("LVL 11");
  else 
  lcd.print("LVL 0");
}


void led() {
  if ((count_0 > range11)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

  }
  else if ((count_0 > range10) && (count_0 <= range11)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > range9) && (count_0 <= range10)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

  }
  else if ((count_0 > 8) && (count_0 <= range9)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > 7) && (count_0 <= range8)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
   
  }

  else if ((count_0 > 6) && (count_0 <= range7)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > 5) && (count_0 <= range6)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

  }
  else if ((count_0 > 4) && (count_0 <= range5)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
 
  }
  else if ((count_0 > 3) && (count_0 <= range4)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > 2) && (count_0 <= range3)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > 1) && (count_0 <= range2)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, LOW);
    
  }
  else if ((count_0 > 0) && (count_0 <= range1)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    
  }
  //  else{
  //    digitalWrite(led1, HIGH);
  //    digitalWrite(led2, HIGH);
  //    digitalWrite(led3, HIGH);
  //    digitalWrite(led4, HIGH);
  //    digitalWrite(led5, HIGH);
  //  }
}
