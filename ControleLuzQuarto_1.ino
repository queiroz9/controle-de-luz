/*
  ControleLuzQuarto_1

 Controle das luzes do quarto
 09/01/2017
 Leandro Queiroz Ferreira - queiroizinn@gmail.com
 V. 1
 
*/

// constants won't change. They're used here to
// set pin numbers:
const int button01 = 8;     // the number of the pushbutton pin
const int luz01 =  13;      // the number of the LED pin
const int rele01 =  7;      // the number of the LED pin
const int rele02 =  5;      // the number of the LED pin
int flag = HIGH;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {

  
  Serial.begin(9600);      // open the serial port at 9600 bps:   
  // initialize the LED pin as an output:
  pinMode(luz01, OUTPUT);
  pinMode(rele01, OUTPUT);

 // pinMode(luz02, OUTPUT);
  pinMode(rele02, OUTPUT);
  /*
  pinMode(luz03, OUTPUT);
  pinMode(rele03, OUTPUT);

  pinMode(luz04, OUTPUT);
  pinMode(rele04, OUTPUT);*/
  
  // initialize the pushbutton pin as an input:
  pinMode(button01, INPUT_PULLUP);

  digitalWrite(rele01, HIGH);
  digitalWrite(rele02, HIGH);
//  digitalWrite(rele03, HIGH);
  //digitalWrite(rele04, HIGH);
}

void loop() {
  // read the state of the pushbutton value:
 buttonState = digitalRead(button01);



  
  if (buttonState != HIGH  ) {

    flag = (flag == HIGH ) ? LOW : HIGH;
    
    // turn LED on:
    digitalWrite(luz01, flag);
    digitalWrite(rele02, !flag);
 //digitalWrite(rele02, flag);

    Serial.println(flag);
     Serial.println("++");
    delay(500);
  
  
  }
  
 // Serial.println(buttonState) ;
}
