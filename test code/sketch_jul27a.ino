


/*
  +---------------------------------------------------------------------+
  |            instagram @techy_jr                                      |
  |     privatemail.suhail@gmail.com                                    |
  +---------------------------------------------------------------------+
*/




int LEDPIN = 12;  //LED pin set to the 12th pin of arduino

char input; // char variable to store data from hco5

void setup()
{
  Serial.begin(9600);  // set serial baud rate 9600
  pinMode(LEDPIN, OUTPUT);  // led set to output mode
  Serial.println("PROGRAM STARTED");
}

void loop()
{

//check wich charecter recieved through HC05

  if(Serial.available()>0)
  {
    input= Serial.read();
    if(input=='1')
    {
      Serial.println("ON");
      digitalWrite(LEDPIN, HIGH);
      delay(2000);
    }
    else if(input=='0')
    {
      Serial.println("OFF");
      digitalWrite(LEDPIN,LOW);
      delay(2000);
    }
    else
    {
      Serial.println("NO INPUT");
      Serial.println(input);
    }
  }

}  

