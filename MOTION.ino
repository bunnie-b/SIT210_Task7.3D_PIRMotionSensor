# define SensorPin 6
int LED = 9; // connect the first LED to digital pin 9
int LED2 = 10; // connect the second LED to digital pin 10


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SensorPin, INPUT);
  digitalWrite(SensorPin,LOW);
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SensorPin)) {
    Serial.println("Active, both LEDs go on"); //Both LEDs are ON, to show high activity
    digitalWrite ( 9, HIGH);
    digitalWrite(10,HIGH); 
  }
  else {
    Serial.println("Inactive, 1st LED goes on");
    digitalWrite(9,HIGH); // FIRST LED IS ON, to show the low activity
  }


  delay(3000); // Delays 3 seconds.
}
