int in_1 = 8;
int in_2 = 9;
int in_3 = 10;

void setup() {
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  pinMode(in_3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long redSwitch = random(0, 2);
  long yellowSwitch = random(0, 2);
  long greenSwitch = random(0, 2);
  flashLights(convertBool(redSwitch), convertBool(yellowSwitch), convertBool(greenSwitch));
  delay(1000);
}

void flashLights(bool red, bool yellow, bool green) {
  if (red) {
    digitalWrite(in_1, HIGH);
  } else {
    digitalWrite(in_1, LOW);
  }
  if (yellow) {
    digitalWrite(in_2, HIGH);
  } else {
    digitalWrite(in_2, LOW);
  }
  if (green) {
    digitalWrite(in_3, HIGH);
  } else {
    digitalWrite(in_3, LOW);
  }
}

bool convertBool(int a) {
  if (a == 1) {
    return true;
  } else {
    return false;
  }
}
