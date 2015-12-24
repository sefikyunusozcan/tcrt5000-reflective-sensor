int ledPin = 13; // the number of the LED pin
int analogPin = 3; // connected to the TCRT5000 C pin
int val = 0; // variable to get input from TCRT5000

// the setup routine runs once when you press reset
void setup() {
           // initialize serial communication at 9600 bits per second
            Serial.begin(9600);
           // initialize the LED pin as an output:
            pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever
void loop() {
            
            val = analogRead(analogPin); // read the state of the tcrt5000

            Serial.println(val);
            
            delay(500); // delay in between reads for stability
            Serial.println("Konteynır:");
            if (val > 1000)
                       Serial.println("DOLU");
            else
                       Serial.println("BOŞ");

            if (val > 1000)
                       // value less then 1000, turn on led
                       digitalWrite(ledPin, LOW);
            else
                       // value less then 1000, turn off led 
                       digitalWrite(ledPin, OUTPUT);
}
