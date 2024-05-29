volatile boolean flag = false;  
int i; 
// Interrupt Service Routine (ISR)  
void isr ()  
{
  digitalWrite(13, HIGH); //PRENDE EL LED
  delay(2000);
  digitalWrite(13, LOW);
}// end of isr

void setup ()
{
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);  
  Serial.begin(9600);
  attachInterrupt (digitalPinToInterrupt (2), isr, RISING);   // attach interrupt handler 
}  // end of setup

void loop () 
{
  Serial.println(i);
  i++;
  delay(9600);
} //end of loop