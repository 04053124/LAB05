#include <Keypad.h>
  const byte ROWS=4;
  const byte COLS=4;
  char keys[ROWS][COLS]={
 {'7','8','9','C'},
 {'4','5','6','D'},
 {'1','2','3','E'},
 {'0','A','B','F'}
  };
  byte rowPins[ROWS]={10,11,12,13};
  byte colPins[COLS]={6,7,8,9};
  
  Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS,
  COLS);
void setup(){
Serial.begin(9600);
}
void loop(){
char key = keypad.getKey(); 
if (key != NO_KEY){
Serial.println(key);
}
}
