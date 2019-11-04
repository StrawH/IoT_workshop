#define button 7 // name pin 7 in arduino button 
#define led 3
int button_st = 0; // Make an empty variable and store intial value 0 in it

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // wait for system to be stable
  button_statues = digitalRead(button); // store button statues in variable
  digitalWrite(led, button_statues);
}
