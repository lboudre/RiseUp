void setup() {
  Serial.begin(9600);
}
void loop() {
  int adcVal = analogRead(A0);
  float vout = 2.0*adcVal/1023.0;
  float Rt = vout*(10000/(3.3-vout));
  float temp = (1.0/((1/(25+273.15)) + (1.0/3435)*log(Rt/10000)))-273.15;

  Serial.print(temp);
}
