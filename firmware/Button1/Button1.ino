int LED = 12;
int BUTTON = 4;

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if(digitalRead(BUTTON) == HIGH)
  {
    //Find a way to clear screen
    // Find a way to display second screen
  digitalWrite(LED, HIGH);
  }else
  {
    //Stay on the same screen
  digitalWrite(LED,LOW);
  }
}
