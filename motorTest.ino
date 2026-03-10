//test code for running motor speed
int Vin;
void setup() {
  // put your setup code here, to run once:
pinMode(A2, INPUT);
pinMode(A6, OUTPUT);
}

void loop() {
Vin = analogRead(A2); //reads A2 voltage
Vin = (Vin/4096)*570; //converts input to be within the linear amplifier range
analogWrite(A6, Vin); //Outputs the proportional value
}
