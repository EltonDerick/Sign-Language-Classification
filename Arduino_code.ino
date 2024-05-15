#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define the flex sensor pins
const int flexSensorPin1 = A0;
const int flexSensorPin2 = A1;
const int flexSensorPin3 = A2;
const int flexSensorPin4 = A3;
const int flexSensorPin5 = A4;

// Variable to store sensor values
int flexValue1;
int flexValue2;
int flexValue3;
int flexValue4;
int flexValue5;

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD
  lcd.print("Sign Language");
  delay(2000);
}

void loop() {
  // Read the flex sensor values
  flexValue1 = analogRead(flexSensorPin1);
  flexValue2 = analogRead(flexSensorPin2);
  flexValue3 = analogRead(flexSensorPin3);
  flexValue4 = analogRead(flexSensorPin4);
  flexValue5 = analogRead(flexSensorPin5);

  // Display the corresponding sign on the LCD
  lcd.clear();
  if (isSignA(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: A");
  } else if (isSignB(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: B");
  } else if (isSignC(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: C");
  } else if (isSignD(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: D");
  } else if (isSignE(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: E");
  } else if (isSignF(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: F");
  } else if (isSignG(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: G");
  } else if (isSignH(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: H");
  } else if (isSignI(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: I");
  } else if (isSignJ(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: J");
  } else if (isSignK(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: K");
  } else if (isSignL(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: L");
  } else if (isSignM(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: M");
  } else if (isSignN(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: N");
  } else if (isSignO(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: O");
  } else if (isSignP(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: P");
  } else if (isSignQ(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: Q");
  } else if (isSignR(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: R");
  } else if (isSignS(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: S");
  } else if (isSignT(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: T");
  } else if (isSignU(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: U");
  } else if (isSignV(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: V");
  } else if (isSignW(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: W");
  } else if (isSignX(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: X");
  } else if (isSignY(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: Y");
  } else if (isSignZ(flexValue1, flexValue2, flexValue3, flexValue4, flexValue5)) {
    lcd.print("Sign: Z");
  } else {
    lcd.print("Unknown Sign");
  }

  delay(500); // Delay for readability
}

bool isSignA(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 < 300 && val3 < 300 && val4 < 300 && val5 < 300);
}
bool isSignB(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 > 600 && val3 > 600 && val4 < 300 && val5 < 300);
}
bool isSignC(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 500 && val2 > 500 && val3 < 300 && val4 < 300 && val5 < 300);
}
bool isSignD(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 > 300 && val3 > 300 && val4 < 300 && val5 < 300);
}
bool isSignE(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 > 600 && val3 > 600 && val4 < 300 && val5 < 300);
}
bool isSignF(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 500 && val2 < 300 && val3 > 500 && val4 < 300 && val5 < 300);
}
bool isSignG(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 > 600 && val4 < 300 && val5 < 300);
}
bool isSignH(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 > 300 && val3 < 300 && val4 < 300 && val5 > 300);
}
bool isSignI(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 > 600 && val3 < 300 && val4 < 300 && val5 > 600);
}
bool isSignJ(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 > 600 && val3 > 600 && val4 < 300 && val5 > 600);
}
bool isSignK(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 > 600 && val4 > 600 && val5 < 300);
}
bool isSignL(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 < 300 && val3 > 600 && val4 < 300 && val5 < 300);
}
bool isSignM(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 > 600 && val3 > 600 && val4 > 600 && val5 < 300);
}
bool isSignN(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 > 600 && val3 < 300 && val4 > 600 && val5 > 600);
}
bool isSignO(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 > 600 && val3 < 300 && val4 > 600 && val5 < 300);
}
bool isSignP(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 > 600 && val4 > 600 && val5 > 600);
}
bool isSignQ(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 < 300 && val3 > 600 && val4 > 600 && val5 < 300);
}
bool isSignR(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 > 600 && val3 > 300 && val4 < 300 && val5 > 300);
}
bool isSignS(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 < 300 && val4 > 600 && val5 > 600);
}
bool isSignT(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 > 600 && val3 < 300 && val4 > 600 && val5 < 300);
}
bool isSignU(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 > 300 && val3 < 300 && val4 > 300 && val5 < 300);
}
bool isSignV(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 > 300 && val3 < 300 && val4 > 300 && val5 > 300);
}
bool isSignW(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 < 300 && val3 > 300 && val4 > 300 && val5 > 300);
}
bool isSignX(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 > 300 && val4 > 600 && val5 < 300);
}
bool isSignY(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 300 && val2 < 300 && val3 > 300 && val4 < 300 && val5 > 600);
}
bool isSignZ(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 > 600 && val4 > 600 && val5 < 300);
}
bool isSignLove(int val1, int val2, int val3, int val4, int val5) {
  return (val1 > 600 && val2 > 600 && val3 < 300 && val4 <300 && val5 > 600)
}
bool isSignYes(int val1, int val2, int val3, int val4, int val5) {
  return (val1 < 300 && val2 < 300 && val3 < 300 && val4 < 300 && val5 < 300)
}



