#define button 7
#define led 13

int button_statues = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
delay(10);
button_statues = digitalRead(button);
if (button_statues == HIGH)
{
  digitalWrite(led, HIGH);
}
else
{
    digitalWrite(led, LOW);
}
}
