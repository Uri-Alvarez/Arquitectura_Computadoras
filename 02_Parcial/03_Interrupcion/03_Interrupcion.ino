volatile boolean flag = false;  
// Interrupt Service Routine (ISR)  
void isr ()  
{
  flag = true;    
}// end of isr

void setup ()
{
  attachInterrupt (digitalPinToInterrupt (2), isr, CHANGE);   // attach interrupt handler 
  pinMode(13, OUTPUT); 
  digitalWrite(13, LOW);  
}  // end of setup

void loop () 
{
  if (flag) 
    { 
    // interrupt has occurred
    digitalWrite(13, HIGH);  
    }
} //end of loop