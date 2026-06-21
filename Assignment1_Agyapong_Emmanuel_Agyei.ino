int ledPin = 13;
int startValue = 5;

void flashLED(int times){
  while(times > 0){
    digitalWrite(ledPin, HIGH);delay(200);
    digitalWrite(ledPin, LOW);delay(200);
    
    times = times - 1;
  }
}
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

Serial.println("=== Smart Countdowm Starting ===");
while(startValue > 0){
Serial.print("Count: ");
Serial.println(startValue);
flashLED(startValue);
delay(1000);
startValue = startValue - 1;
}
Serial.println("=== Countdown Complete ===");
}

void loop() {
  // put your main code here, to run repeatedly:

}
