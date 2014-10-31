int power_1 = D7;
int power_2 = D6;

void setup() {
  Spark.function("power", powerControl);
  pinMode(power_1, OUTPUT);
  pinMode(power_2, OUTPUT);
  
  digitalWrite(power_1, HIGH);
  digitalWrite(power_2, HIGH);
}

void loop() {}

int powerControl(String command)
{
   int state = 0;
   //find out the pin number and convert the ascii to integer
   int pinNumber = (command.charAt(1) - '0') - 1;

   // find out the state of the led
   if(command.substring(3,7) == "HIGH") state = 1;
   else if(command.substring(3,6) == "LOW") state = 0;
   else return -1;

   // write to the appropriate pin
   digitalWrite(switchPin, state); 
   return 1;
}