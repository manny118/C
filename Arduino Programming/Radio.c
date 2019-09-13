const int analogPin = A0;
const int ledPin = 7; 

int inputValue = 0;
int outputValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int inputValue = analogRead(analogPin);
  inputValue = map(inputValue, 0, 1023,0, 255);
  analogWrite(ledPin, inputValue);
  Serial.println(inputValue);
  Serial.println(outputValue);
  delay(100);
}