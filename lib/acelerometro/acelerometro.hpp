#pragma once
#include <Arduino.h>

struct Acelerometro {
    int x;
    int y;
    int z;
    
    Acelerometro();
    void detectaMovimento();
    bool detectaAbaixou();
    bool detectaPulou();
    bool detectaParado();
};
