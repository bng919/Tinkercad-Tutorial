/*
 * Created by Emma Bos and Ben Graham for the Tinkercad Tutorial
 * for the Queen's Faculty of Applied Science APSC 200 course.
 */
const int BUTTON = 2;
const int LED = 3;
int BUTTONstate = 0;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("The light is on");
    delay(500);
  } 
  else {
    digitalWrite(LED, LOW);
  }
}
