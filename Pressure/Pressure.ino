 int led1 = D4;
int led2 = D3;
int led3 = D2;
int led4 = D1;
int buzzer = D8;
int sensor = D5;
int value = 0;
int count = 0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(buzzer,OUTPUT);
        digitalWrite(buzzer,LOW);
 digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);   
  pinMode(sensor,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
   value=digitalRead(sensor);
  Serial.println(value);
  if (value == 1 ) {
    count = count + 1;
    if ( count == 1 ) {
            Serial.println("f1");
      digitalWrite(led1,HIGH);   
    }
         if ( count == 2 ) {
                  Serial.println("f2");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }   
    if ( count == 3 ) 
{
                 Serial.println("f3");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
    }
     if ( count == 4 ) {
                  Serial.println("f4");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(buzzer,HIGH);
    } 
  if ( count == 5 ) {
                  Serial.println("f4");
      digitalWrite(buzzer,HIGH);  }
  /*else {
                Serial.println("off");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  } }*/
  }
  delay(1000);
 int led1 = D4;
int led2 = D3;
int led3 = D2;
int led4 = D1;
int buzzer = D8;
int sensor = D5;
int value = 0;
int count = 0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(buzzer,OUTPUT);
        digitalWrite(buzzer,LOW);
 digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);   
  pinMode(sensor,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
   value=digitalRead(sensor);
  Serial.println(value);
  if (value == 1 ) {
    count = count + 1;
    if ( count == 1 ) {
            Serial.println("f1");
      digitalWrite(led1,HIGH);   
    }
         if ( count == 2 ) {
                  Serial.println("f2");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }   
    if ( count == 3 ) 
{
                 Serial.println("f3");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
    }
     if ( count == 4 ) {
                  Serial.println("f4");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(buzzer,HIGH);
    } 
  if ( count == 5 ) {
                  Serial.println("f4");
      digitalWrite(buzzer,HIGH);  }
  /*else {
                Serial.println("off");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  } }*/
  }
  delay(1000);

