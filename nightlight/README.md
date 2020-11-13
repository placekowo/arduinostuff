This program turns on a transistor when it is dark, and turns it off when it is light. I am using this circuit to turn on and off some lights in a window. 
Any NPN transistor should work, just make sure that it can pass enough current for your lights. I will draw up a schematic for this one day.

I am using a D1047 transistor (maybe a bit overkill but it's the only thing I had laying around that's powerful enough), a 5k potentiometer, a LDR, a 1K resistor, and a 10K resistor.

Base of the transistor connects to D9 through a 1K resistor. Collector connects to the negative terminal of the output (the -ve is switched on and off,) and the emitter is connected to ground. The input voltage is connected straight to the output voltage, you may want to power your Arduino with the same voltage using the Vin pin, although you don't have to. (Arduino's have a voltage regulator on the board, and I believe it can take anything from 6-20V but please make sure with your board before you fry anything.)

The LDR's resistance increases when it sees less light, and decreases when it sees more. It is connected to the Arduino with a resistive divider, as the Arduino can only measure potential difference, and not resistance. I am using a 10k resistor. One end of the LDR is connected to 5V, the other end of it is in series with the 10K resistor, and you connect to A0 at this junction. The other end of the resistor is connected to ground.

The potentiometer's center pin is connected to A1, the two pins on the edges are connected to 5V and GND (the orientation of these doesn't matter, just make sure A1 is center.)





