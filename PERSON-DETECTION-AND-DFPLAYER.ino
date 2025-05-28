// MADE MY MADAN R 20/02/2025//

#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// Entry Ultrasonic Pins
#define TRIG_ENTRY 2
#define ECHO_ENTRY 3

// Exit Ultrasonic Pins
#define TRIG_EXIT 4
#define ECHO_EXIT 5

// DFPlayer Serial Pins
SoftwareSerial mySerial(10, 11); // RX, TX for DFPlayer
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(TRIG_ENTRY, OUTPUT);
  pinMode(ECHO_ENTRY, INPUT);
  pinMode(TRIG_EXIT, OUTPUT);
  pinMode(ECHO_EXIT, INPUT);

  // Initialize DFPlayer
  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer not found");
    while (true);
  }
  myDFPlayer.volume(20); // Set volume 0 to 30
}

void loop() {
  float distanceEntry = measureDistance(TRIG_ENTRY, ECHO_ENTRY);
  float distanceExit = measureDistance(TRIG_EXIT, ECHO_EXIT);

  // If person detected within 5 meters on entry
  if (distanceEntry > 0 && distanceEntry <= 500) {
    Serial.println("Person detected at entry");
    myDFPlayer.play(1); // welcome.mp3 should be 0001.mp3
    delay(5000); // wait before detecting again
  }

  // If person detected within 5 meters on exit
  if (distanceExit > 0 && distanceExit <= 500) {
    Serial.println("Person detected at exit");
    myDFPlayer.play(2); // thankyou.mp3 should be 0002.mp3
    delay(5000); // wait before detecting again
  }

  delay(200); // short delay between readings
}

float measureDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2; // cm
  return distance;
}
