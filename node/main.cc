#include <HardwareSerial.h>

#include "lib.h"
#include "protocol.h"

void setup() {
    const char *h = hello();
    Serial.println(h);
}

void loop() {
    
}