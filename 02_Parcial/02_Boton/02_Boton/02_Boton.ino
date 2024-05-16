const int inputPin = 7;
int input7 = 0;

void setup() {
	pinMode(inputPin, INPUT);
	Serial.begin(9600); // inicalizacion del puerto serial
}

void loop() {
	input7 = digitalRead(inputPin);
  	if(input7 == HIGH)
    {
	Serial.println("1");
    delay(100);
	}
	else{
 	Serial.println("0");
    delay(100);
	}
}