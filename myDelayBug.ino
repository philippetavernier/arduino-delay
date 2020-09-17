void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
   }
}


void myDelay(long int delay_time)
{
  int i;
  int a=0;
for(i==0;i<=delay_time;i++)
{ a=a+1;
 Serial.println(a);
}
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  myDelay(4294967295);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  myDelay(4294967295);                       // wait for a second
}


