	const int trigPin = 7; 
	const int echoPin = 4; 
	int red=9; 
	int blue=10; 
	int green=11; 
	long duration; 
	int distance; 
						// the setup function runs once when you press reset or power the board 
	void setup() 
	{ 
	//initialize digital pin 13 as an output. 
	pinMode(trigPin, OUTPUT); 
	pinMode(echoPin, INPUT); 
	pinMode(13, OUTPUT); 
	pinMode(9, OUTPUT); 
	pinMode(10, OUTPUT); 
	pinMode(11,OUTPUT); 
	Serial.begin(9600); 
	} 
	// the loop function runs over and over again forever 
	void loop()
	{ 
						// Clears the trigPin 
		digitalWrite(trigPin, LOW); 
		delayMicroseconds(2); 
						// Sets the trigPin on HIGH state for 10 micro seconds 
		digitalWrite(trigPin, HIGH); 
		delayMicroseconds(10); 
		digitalWrite(trigPin, LOW); 
						// Reads the echoPin, returns the sound wave travel time in microseconds 
		duration = pulseIn(echoPin, HIGH); 
						// Calculating the distance 
		distance = duration * 0.034/2; 
						// Prints the distance on the Serial Monitor 
		Serial.print("Distance"); 
		Serial.println(distance); 
		digitalWrite(11, HIGH); 
		if (distance < 30) 
		{ 
			digitalWrite(11, LOW); 
			digitalWrite(10, LOW); 
			digitalWrite(13, HIGH); 
			digitalWrite(9, HIGH); 
		} 
		else if (distance >= 30 && distance <= 50) 
		{ 
			digitalWrite(11, LOW); 
			digitalWrite(10, HIGH);
			digitalWrite(13, LOW); 
			digitalWrite(9, LOW); 
		} 
		else 
		{ 
		digitalWrite(13, LOW); 
		digitalWrite(9, LOW); 
		digitalWrite(10, LOW); 
		digitalWrite(11, HIGH); 
		} 
	}
