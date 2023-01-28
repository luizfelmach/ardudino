#include <led.hpp>

void Led::inicializaLed(const int p) {
    this->estado = 0;
    this->pino = p;
    pinMode(this->pino, OUTPUT);
}

void Led::mudaEstado() {
    this->estado = !estado;
}

void Led::escreve() {
    digitalWrite(this->pino, this->estado);
}

void Led::mudaEstadoEscreve(int Microseconds) {
    this->mudaEstado();
    this->escreve();
    delayMicroseconds(Microseconds);
    this->mudaEstado();
}