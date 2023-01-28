#pragma once

#include <Arduino.h>
#include <led.hpp>

struct Botao {
    volatile bool estado;
    int pino;

    void inicializaBotao(const int p);
    void ativaInterrupcao();
    void desativaInterrupcao();
    void apertou();
    void verificaEstado(Led led);
};

