//declar the variables into integrs.
int red = 11;
int yellow = 10;
int green = 9;
int x = 0;
int button = 4;
int reading =0;
void setup() {
//knowing which is write and which is read.  
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT);
}
void loop() {
  reading = digitalRead(button);//show the arduino that the reading is input(button). 
  if (reading==HIGH)
  {
  x++;
    //when i press on the button the led will open and when i press tow times the onther led will open and countinue but when i press 4 times it closed all leds.
  if ( x==1)
  {
    digitalWrite(red,HIGH);
  }
  else if (x==2)
  {
   digitalWrite(yellow,HIGH);
  }
  else if (x==3)
  {
    digitalWrite(green,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
    x=0;
  }
  delay(250);//tell the arduino to wait quarter second to read the button again.
}  
}
