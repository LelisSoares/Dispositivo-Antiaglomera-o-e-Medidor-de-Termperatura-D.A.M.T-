/*
 A set of custom made large numbers for a 16x2 LCD using the 
 LiquidCrystal librabry. Works with displays compatible with the 
 Hitachi HD44780 driver. 
 
 The Cuicuit:
 LCD RS pin to D12
 LCD Enable pin to D11
 LCD D4 pin to D5
 LCD D5 pin to D4
 LCD D6 pin to D3
 LCD D7 pin to D2
 LCD Vee tied to a pot to control brightness
 LCD Vss and R/W tied to ground
 LCD Vcc to +5V
 */

// include the library
#include <LiquidCrystal.h>
#include <Ultrasonic.h>

int L1 = 2;
int L2 = 3;


// initialize the interface pins
LiquidCrystal lcd(A1, A0, A2, A3, A4, A5);
Ultrasonic ultrasonic(8,9);

// the 8 arrays that form each segment of the custom numbers
byte bar1[8] = 
{
        B11100,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11100
};
byte bar2[8] =
{
        B00111,
        B01111,
        B01111,
        B01111,
        B01111,
        B01111,
        B01111,
        B00111
};
byte bar3[8] =
{
        B11111,
        B11111,
        B00000,
        B00000,
        B00000,
        B00000,
        B11111,
        B11111
};
byte bar4[8] =
{
        B11110,
        B11100,
        B00000,
        B00000,
        B00000,
        B00000,
        B11000,
        B11100
};
byte bar5[8] =
{
        B01111,
        B00111,
        B00000,
        B00000,
        B00000,
        B00000,
        B00011,
        B00111
};
byte bar6[8] =
{
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B11111,
        B11111
};
byte bar7[8] =
{
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00111,
        B01111
};
byte bar8[8] =
{
        B11111,
        B11111,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
};


void t(int col){
  lcd.setCursor(col-1, L1); 
  lcd.write(8);
  lcd.setCursor(col+1, L1); 
  lcd.write(8);
  lcd.setCursor(col, L1);
  lcd.write(1);
  lcd.setCursor(col, L1+1);
  lcd.write(1);
  
}
void l(int col){
  lcd.setCursor(col+1, L1+1); 
  lcd.write(6);
  lcd.setCursor(col, L1);
  lcd.write(2);
  lcd.setCursor(col, L1+1);
  lcd.write(2);
  
}

void AA(int col){
  lcd.setCursor(col, L1); 
  lcd.write(2);  
  lcd.write(3); 
  lcd.write(1);
  lcd.setCursor(col, L2); 
  lcd.write(2);  
  lcd.setCursor(col+2, L2); 
  lcd.write(1);
}

void d(int col){
  lcd.setCursor(col, L1); 
  lcd.write(255); 
  lcd.write(8); 
  lcd.write(1);
  lcd.setCursor(col, L2); 
  lcd.write(255);
  lcd.write(6);  
  lcd.write(1);
}




void custom0(int col)
{ // uses segments to build the number 0
  lcd.setCursor(col, L1); 
  lcd.write(2);  
  lcd.write(8); 
  lcd.write(1);
  lcd.setCursor(col, L2); 
  lcd.write(2);  
  lcd.write(6);  
  lcd.write(1);
}

void custom1(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(32);
  lcd.write(32);
  lcd.write(1);
  lcd.setCursor(col,L2);
  lcd.write(32);
  lcd.write(32);
  lcd.write(1);
}

void custom2(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(5);
  lcd.write(3);
  lcd.write(1);
  lcd.setCursor(col, L2);
  lcd.write(2);
  lcd.write(6);
  lcd.write(6);
}

void custom3(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(5);
  lcd.write(3);
  lcd.write(1);
  lcd.setCursor(col, L2);
  lcd.write(7);
  lcd.write(6);
  lcd.write(1); 
}

void custom4(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(2);
  lcd.write(6);
  lcd.write(1);
  lcd.setCursor(col, L2);
  lcd.write(32);
  lcd.write(32);
  lcd.write(1);
}

void custom5(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);
  lcd.setCursor(col, L2);
  lcd.write(7);
  lcd.write(6);
  lcd.write(1);
}

void custom6(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);
  lcd.setCursor(col, L2);
  lcd.write(2);
  lcd.write(6);
  lcd.write(1);
}

void custom7(int col)
{
  lcd.setCursor(col,L1);
  lcd.write(2);
  lcd.write(8);
  lcd.write(1);
  lcd.setCursor(col, L2);
  lcd.write(32);
  lcd.write(32);
  lcd.write(1);
}

void custom8(int col)
{
  lcd.setCursor(col, L1); 
  lcd.write(2);  
  lcd.write(3); 
  lcd.write(1);
  lcd.setCursor(col, L2); 
  lcd.write(2);  
  lcd.write(6);  
  lcd.write(1);
}

void custom9(int col)
{
  lcd.setCursor(col, L1); 
  lcd.write(2);  
  lcd.write(3); 
  lcd.write(1);
  lcd.setCursor(col, L2); 
  lcd.write(7);  
  lcd.write(6);  
  lcd.write(1);
}

int printNumber(int value, int col) {


  int milhar = 0;
  int centena = 0;
  int dezena = 0; 
  int unidade = 0;

  milhar = value/1000;
  centena = (value-(milhar*1000))/100;
  dezena = (value-((milhar*1000)+(centena*100)))/10;
  unidade = value-((milhar*1000)+(centena*100)+(dezena*10));

  Serial.println(milhar);
  Serial.println(centena);
  Serial.println(dezena);
  Serial.println(unidade);
  
if(milhar>0){
  agrupa(milhar, col);
  col+=3;
}
if(centena>0||value>=100){
  agrupa(centena, col);
  col+=3;
}
if(dezena>0||value>=10){
  agrupa(dezena, col);
  col+=3;
}

agrupa(unidade, col);
col+=3;

  
 
}  

int agrupa(int value, int col){
  if (value == 0) {
    custom0(col);
  } if (value == 1) {
    custom1(col);
  } if (value == 2) {
    custom2(col);
  } if (value == 3) {
    custom3(col);
  } if (value == 4) {
    custom4(col);
  } if (value == 5) {
    custom5(col);
  } if (value == 6) {
    custom6(col);
  } if (value == 7) {
    custom7(col);
  } if (value == 8) {
    custom8(col);
  } if (value == 9) {
    custom9(col);
  }   
}

void setup()
{
  
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  // assignes each segment a write number
  lcd.createChar(1,bar1);
  lcd.createChar(2,bar2);
  lcd.createChar(3,bar3);
  lcd.createChar(4,bar4);
  lcd.createChar(5,bar5);
  lcd.createChar(6,bar6);
  lcd.createChar(7,bar7);
  lcd.createChar(8,bar8);
 
  
  // sets the LCD's rows and colums:
  lcd.begin(20, 4);
  
  
  int a = 10;


lcd.setCursor(0,0);
lcd.print("< TOTAL DE PESSOAS >");
lcd.setCursor(0,1);
lcd.print("--------------------");
  for(int x = 40; x <=50; x++){


    if(x<10){
      if(x == 0){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS >");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 7);  
       delay(400);
       //lcd.clear();
       delay(50);
    }
    
    if(x>=10 && x<100){
      if(x == 10){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS >");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 6);  
       delay(400);
       //lcd.clear();
       delay(50);
    }

    if(x>=100){
      if(x == 100){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS >");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 5);  
       delay(300);
       //lcd.clear();
       delay(50);
    }
  }

/*
  
  for(int x = 110; x >0; x--){
  
  
    if(x<10){
      if(x == 0){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS:>");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 7);  
       delay(300);
       //lcd.clear();
       delay(50);
    }
    
    if(x>=10 && x<100){
      if(x == 10){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS:>");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 6);  
       delay(300);
       //lcd.clear();
       delay(50);
    }


    if(x>=110){
      if(x == 100|| (x==99)){
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("< TOTAL DE PESSOAS:>");
        lcd.setCursor(0,1);
        lcd.print("--------------------");
      }
       printNumber(x, 5);  
       delay(300);
       //lcd.clear();
       delay(50);
    }
  }
*/
lcd.clear();

  
}





void loop()

{
  //printDist(ultrasonic.Ranging(CM));
  lcd.setCursor(0,3);
  lcd.print("< AGUARDE SUA VEZ  >");
  lcd.setCursor(0,2);
  lcd.print("--------------------");

  L1 = 0;
  L2 = 1;
 
  l(1);
  custom0(3);
  t(7);
  AA(9);
  d(12);
  custom0(15);
  digitalWrite(13,1);
  delay(900);
  

  lcd.setCursor(0,0);
  lcd.print("                    ");
  lcd.setCursor(0,1);
  lcd.print("                    ");
   digitalWrite(13,0);
  delay(400);
 
  
  

}  
