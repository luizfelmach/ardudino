#pragma once

#include <Arduino.h>
#include <Wire.h>

struct Acelerometro {
    int x;
    int y;
    int z;

    void atualizaDados();
    void detectaMovimento();
    bool detectaAbaixou();
    bool detectaPulou();
    bool detectaParado();
};

