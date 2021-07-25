int a = 13; // declare the variables to pin 
int b=  12; // declare the variables to pin
int c = 11; // declare the variables to pin
int d = 10; // declare the variables to pin
int e = 9; // declare the variables to pin
int f = 8; // declare the variables to pin
int g = 7; // declare the variables to pin

void setup() {
  pinMode(a,OUTPUT); // configure 6 pin used as output
  pinMode(b,OUTPUT); // configure 7 pin used as output
  pinMode(c,OUTPUT); // configure 8 pin used as output
  pinMode(d,OUTPUT); // configure 9 pin used as output
  pinMode(e,OUTPUT); // configure 10 pin used as output
  pinMode(f,OUTPUT); // configure 11 pin used as output
  pinMode(g,OUTPUT); // configure 12 pin used as output
}
void loop() 
{      int i;
     for(i=0;i<=9;i++)
 {   
         switch(i)
{ 
case 0:                               // For Display 0
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  break;

case 1:                       // For Display 1
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  break;

  case 2:                      // For Display 2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  break;

  case 3:                                        // For Display 3
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  break;

  case 4:                        // For Display 4
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;

  case 5:                    // For Display 5
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;

  case 6:                          // For Display 6
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;

case 7:                          // For Display 7
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  break;

case 8:                               // For Display 8
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;

case 9:                               // For Display 9
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;
 }
delay(1000);    // Give 1 sec delay
}
}
