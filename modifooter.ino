const int buttonOnePin = 1;
const int buttonTwoPin = 2;
const int buttonThreePin = 3;
const int buttonFourPin = 4;

void setup() {
  pinMode(buttonOnePin, INPUT);
  pinMode(buttonTwoPin, INPUT);
  pinMode(buttonThreePin, INPUT);
  pinMode(buttonFourPin, INPUT);
  pinMode(0, OUTPUT);
  delay(100);
  digitalWrite(0, 1);
  delay(100);
  digitalWrite(0, 0);
  delay(100);
  digitalWrite(0, 1);
  delay(100);
  digitalWrite(0, 0);
  delay(100);
  digitalWrite(0, 1);
  delay(100);
  digitalWrite(0, 0);
  delay(100);
  digitalWrite(0, 1);
}

void loop() {
  delay(10);
  bool buttonOnePressed = digitalRead(buttonOnePin);
  bool buttonTwoPressed = digitalRead(buttonTwoPin);
  bool buttonThreePressed = digitalRead(buttonThreePin);
  bool buttonFourPressed = digitalRead(buttonFourPin);

//    (buttonFourPressed ? MODIFIERKEY_SHIFT : 0) |
//    (buttonTwoPressed ? MODIFIERKEY_ALT : 0)
  Keyboard.set_modifier(
    (buttonOnePressed ? MODIFIERKEY_CTRL : 0) |
    (buttonThreePressed ? MODIFIERKEY_SHIFT : 0) |
    (buttonFourPressed ? MODIFIERKEY_ALT : 0) |
    (buttonTwoPressed ? MODIFIERKEY_GUI : 0)
  );
  Keyboard.send_now();
}
