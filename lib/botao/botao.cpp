#include <botao.hpp>

void Botao::inicializaBotao(const int p) {
    this->estado = 0;
    this->pino = p;
    pinMode(this->pino, INPUT);
}

void Botao::ativaInterrupcao() {
    attachInterrupt(digitalPinToInterrupt(this->pino), apertou, RISING);
    this->estado = 0;
}

void Botao::desativaInterrupcao() {
    detachInterrupt(digitalPinToInterrupt(this->pino));
}

void Botao::apertou() {
    this->estado = !estado;
}

void Botao::verificaEstado(Led led) {
    if (this->estado) {
        led.mudaEstadoEscreve(10);
        this->estado = !estado;
        this->desativaInterrupcao();
        return true;
    }
    return false;
}