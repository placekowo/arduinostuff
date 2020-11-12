// Center pin of pot is connected to A1, edge pins are connected to 5V and GND.
// LED is connected between D9 and GND.
// The potentiometer value is output in the serial terminal at 9600 baud.

int in = 0; // Setting the value of the variables to 0
int out = 0;

void setup() {
pinMode(9, OUTPUT); // Makes pin D9 an output
Serial.begin(9600); // Starts serial communication at 9600 baud
}

void loop() {
  in = analogRead(1); // Reads the value of the potentiometer
  out = map(in, 0, 1023, 0, 255); // Potentiometer outputs 0-1023, whereas analogWrite outputs 0-255
  Serial.print(out); // Outputs the value of the above map to the serial console
  Serial.println(); // Carriage return to make the serial output more readable
  analogWrite(9, out); // Outputs converted poteniometer value to the LED
}
