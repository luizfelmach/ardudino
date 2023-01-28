#pragma once

#include <Arduino.h>

struct Led {
    volatile bool estado;
    int pino;

    void inicializaLed(const int p);
    void mudaEstado();
    void escreve();
    void mudaEstadoEscreve(int Microseconds);
};