const int sensorPin = 0;    // defining all the pins
const int transistorPin = 9;
const int potentiometerPin = 1; // center pin of pot is connected to A1, edge pins connect to 5V and GND.  

int level; // defining variables to be used later
int threshold;

void setup() {  // put your setup code here, to run once:
  pinMode(transistorPin, OUTPUT);  // defining transistor pin as an output
  Serial.begin(9600); // outputting light value to serial for tuning
}

void loop() {  // put your main code here, to run repeatedly:
  threshold = analogRead(potentiometerPin); // potentiometer to set the threshold
  level=analogRead(sensorPin); // read the voltage from the sensor pin
  Serial.print(level); // print the level to the serial
  Serial.println(); // newline to make the serial output more readable

if (level < threshold) {
  digitalWrite(transistorPin, HIGH);  // if the light level is below the threshold set at the start, make transistorpin high, turning the light strip on
}

else{
  digitalWrite(transistorPin, LOW);  // if the light level is above the treshold, the transistorpin is set to low, and the lights turn off
}

}
