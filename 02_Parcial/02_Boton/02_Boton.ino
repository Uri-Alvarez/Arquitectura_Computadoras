const int inputPin = 7;
int input7 = 0;
int lastState;

void setup() {
	pinMode(inputPin, INPUT);
	Serial.begin(9600); // inicalizacion del puerto serial
}

void loop() {
	input7 = digitalRead(inputPin);
  	if(lastState ==LOW && input7 == HIGH)
    {
	Serial.println("1");
    delay(100);
	}
	else if(lastState == HIGH && input7 == LOW){
 	Serial.println("0");
    delay(100);
	}
  lastState = input7;
}
//Tarea: Modificar el texto para que al presionar el boton salga "1", y cuando se deja deprecionar salgo solo un "0"