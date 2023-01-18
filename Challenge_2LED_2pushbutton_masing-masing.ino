int button1 = D2;
int button2 = D4;
int led1 = D3;
int led2 = D5;

int buttonStatus1 = 0;
int buttonStatus2 = 0;

void setup()
{
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // button 1, led 1
  buttonStatus1 = digitalRead(button1);
  if (buttonStatus1 == HIGH){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
 
  // button 2, led 2
  buttonStatus2 = digitalRead(button2);
  if (buttonStatus2 == HIGH){
    digitalWrite(led1, LOW); 
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
