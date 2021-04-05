// Import the Liquid Crystal library
#include <LiquidCrystal.h>;
//Initialise the LCD with the arduino. LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  // Switch on the LCD screen
  lcd.begin(16, 2);
  // Print these words to my LCD screen
  lcd.print("ROCK");
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("PICK YOUR WEAPON");
  //lcd.setCursor(0, 1);
  int input = analogRead(A0);
  //lcd.print(input);
  //Serial.println(input);
  long output = random(1, 4); 
  if(500 < input && input < 520){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("YOU CHOSE ROCK");
    lcd.setCursor(0, 1);
    switch(output){
      case 1:
      lcd.print("ROCK, WE TIE");
      delay(2000);
      break;
      case 2:
      lcd.print("PAPER, YOU LOSE");
      delay(2000);
      break;
      case 3:
      lcd.print("SCISSORS,YOU WIN");
      delay(2000);
      break;
    }
    lcd.clear();
  }
  if(960 < input && input < 980){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("U CHOSE SCISSORS");
    lcd.setCursor(0, 1);
    switch(output){
      case 1:
      lcd.print("ROCK - YOU LOSE");
      delay(2000);
      break;
      case 2:
      lcd.print("PAPER - YOU WIN");
      delay(2000);
      break;
      case 3:
      lcd.print("SCISSORS, WE TIE");
      delay(2000);
      break;
    }
    lcd.clear();
  }
  if(1010 < input && input < 1030){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("U CHOSE PAPER");
    lcd.setCursor(0, 1);
    switch(output){
      case 1:
      lcd.print("ROCK - YOU WIN");
      delay(2000);
      break;
      case 2:
      lcd.print("PAPER - WE TIE");
      delay(2000);
      break;
      case 3:
      lcd.print("SCISSORS, U LOSE");
      delay(2000);
      break;
    }
    lcd.clear();
  }
}
