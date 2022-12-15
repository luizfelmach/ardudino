#include <jogo.hpp>

Jogo::Jogo() {
    status = MENU;
}

void Jogo::setup() {
    Wire.begin();
    Wire.beginTransmission(MPU);
    Wire.write(0x6B);
    Wire.write(0);
    Wire.endTransmission(true);
    Serial.begin(9600);
}

void Jogo::loop() {
    atualiza();

    if (status == MENU) {
        renderizaMenuIniciarJogo();
    }
    if (status == JOGANDO) {
        renderizaPartida();
    }
    if (status == PERDEU) {
        renderizaPerdeuJogo();
    }
}

void Jogo::atualiza() {
    pontuacao += 1;
}

void Jogo::renderizaMenuIniciarJogo() {

}

void Jogo::renderizaPartida() {

}

void Jogo::renderizaPerdeuJogo() {

}