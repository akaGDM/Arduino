// Scott Camarena
// October 2013
//
// 6 Channel Radio Receiver Class Example
//=======================================================

#include "sixChReceiver.h"

sixChReceiver rec( A0, A1, A2, A3 );
int val;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val = rec.check(1);
  Serial.print( val );
  Serial.print( "\t" );
  val = rec.check(2);
  Serial.print( val );
  Serial.print( "\t" );
  val = rec.check(3);
  Serial.print( val );
  Serial.print( "\t" );
  val = rec.check(4);
  Serial.print( val );
  delay(50);
  Serial.println( "\n\n\n\n\n\n\n\n\n\n\n" );
}
