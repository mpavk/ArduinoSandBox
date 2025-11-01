
// #include <Arduino.h>

// #include <LiquidCrystal.h>

// const int RW = 11;
// const int RS = 12;
// const int ENABLE = 2;
// const int DI = 12;
// const int DB[] = {3,4,5,6,7,8,9,10};
// int i = 0;

// LiquidCrystal lcd(RS, RW,ENABLE, DB[0],DB[1],DB[2],DB[3],DB[4],DB[5],DB[6],DB[7]);

// void setup1 (void) {
//     lcd.begin(16,2);
//     lcd.print("hello, world!");             
// }

// void loop1 (void) {
//   lcd.clear();                    //Clean the display
//   lcd.print("  I LOVE OLYA  "); 
  
//   lcd.noDisplay();                //Turn off the display
//   delay(500);                     //delay of 0.5s 
//   lcd.display();                  // Turn on the display
//   delay(500);
//   lcd.noDisplay();
//   delay(500); 
//   lcd.display();
//   delay(500);

//   //Loop to print an "X" on each character position of first row of the LCD
//   lcd.clear();
//   while(i < 16)
//   {
//     lcd.setCursor(i,0);
//     lcd.print("X");
//     i = i + 1;
//     delay(100);
//   }
//   i = 0;

//   //Loop to print an "X" on each character position of second row of the LCD
//   while(i < 16)
//   {
//     lcd.setCursor(i,1);
//     lcd.print("X");
//     i = i + 1;
//     delay(100);
//   }
//   i = 0;
  
//   lcd.setCursor(3,0);               //Start on position column 3 and row 0 
//   lcd.print("1234567890   ");       //Print the numbers
//   lcd.setCursor(3,1);               //Start on position column 3 and row 1 
//   lcd.print("0987654321   ");
//   delay(2000);

//   lcd.setCursor(0,0);               //Start on position column 0 and row 0 
//   lcd.print("   !$%&/()=?!   ");
//   lcd.setCursor(0,1);               //Start on position column 0 and row 0 
//   lcd.print("   |@#~!$%&/%   ");
//   delay(2000);
// }
