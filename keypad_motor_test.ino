//Code By Nate Hopper
//Scorbot ER3 Robotic Arm
//Intended Board: ATMEGA2560 Board 
//Method of Control: 4x4 Keypad

#include <Keypad.h>
#define REVERSE 1
#define FORWARD 0
//motor states
#define BASE 2
#define LOWERARM 3
#define UPPERARM 4
#define WRISTONE 5
#define WRISTTWO 6
#define HAND 7

int motorselect = BASE;
int state = FORWARD;
 //Motor 2 drive B

int Motor1a = 2;
int Motor1b = 3;
int Motor2a = 4;
int Motor2b = 5;
int Motor3a = 6;
int Motor3b = 7;
int Motor4a = 8;
int Motor4b = 9;
int Motor5a = 10;
int Motor5b = 11;


const byte ROWS = 4;
const byte COLS = 4;
int x;

char hexaKeys[COLS][ROWS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'0', 'F', 'E', 'D'}
};

byte colPins[COLS] = {37, 36, 35, 34};
byte rowPins[ROWS] = {33, 32, 31, 30};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
 // pinMode(10, OUTPUT);
  //pinMode(11, OUTPUT);
  pinMode(Motor1a, OUTPUT);
  pinMode(Motor1b, OUTPUT);
  pinMode(Motor2a, OUTPUT);
  pinMode(Motor2b, OUTPUT);
  pinMode(Motor3a, OUTPUT);
  pinMode(Motor3b, OUTPUT);
  pinMode(Motor4a, OUTPUT);
  pinMode(Motor4b, OUTPUT);
  pinMode(Motor5a, OUTPUT);
  pinMode(Motor5b, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  char customKey = customKeypad.getKey();
  x = customKey;
  int y = map(x, 48, 70, 0, 22);



  if (y == 0) {
    state++;
    if (state > 1) {
      state = 0;
    }
  }
  if (customKey) {
    Serial.print(customKey);
    Serial.print("   ");
    Serial.print(y);
    Serial.print("   ");
    Serial.print(state);
    Serial.print("   ");
    Serial.println(motorselect);
  }
  

switch(motorselect){
  case BASE:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor1a, HIGH);
        digitalWrite(Motor1b, LOW);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, HIGH);
        delay(y * 100);
        digitalWrite(Motor1a, LOW);
        digitalWrite(Motor1b, LOW);
      }


      break;
      
  }
  break;

  case LOWERARM:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor2a, HIGH);
        digitalWrite(Motor2b, LOW);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, HIGH);
        delay(y * 100);
        digitalWrite(Motor2a, LOW);
        digitalWrite(Motor2b, LOW);
      }


      break;
      
  }
  break;
case UPPERARM:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor3a, HIGH);
        digitalWrite(Motor3b, LOW);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, HIGH);
        delay(y * 100);
        digitalWrite(Motor3a, LOW);
        digitalWrite(Motor3b, LOW);
      }


      break;
      
  }
  break;
case WRISTONE:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor4a, HIGH);
        digitalWrite(Motor4b, LOW);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, HIGH);
        delay(y * 100);
        digitalWrite(Motor4a, LOW);
        digitalWrite(Motor4b, LOW);
      }


      break;
      
  }
  break;
case WRISTTWO:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor5a, HIGH);
        digitalWrite(Motor5b, LOW);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 2) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 3) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 4) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 5) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 6) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 7) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 8) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }
      if (y == 9) {
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, HIGH);
        delay(y * 100);
        digitalWrite(Motor5a, LOW);
        digitalWrite(Motor5b, LOW);
      }


      break;
      
  }
  break;
case HAND:
  switch (state) {
    case FORWARD:
      if (y == 1) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 2) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 3) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 4) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 5) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 6) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 7) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 8) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 9) {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }

      break;
    case REVERSE:
     if (y == 1) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 2) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 3) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 4) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 5) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 6) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 7) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 8) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }
      if (y == 9) {
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(y * 100);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }


      break;
      
  }
  break;

}
}
