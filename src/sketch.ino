// IRremote Arduino Library
//
// Copyright (c) 2013 Dave Sieh
// See LICENSE.txt for details.

#include <IRremote.h>

const int irPin = A3;   // analog input pin 3 (digital 17)
IRrecv irrecv(irPin);     // create the IR receive object

void setup() {
  irrecv.enableIRIn(); // Start the ir receiver
}

void loop() {
}
