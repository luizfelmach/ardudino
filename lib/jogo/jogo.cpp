#include <jogo.hpp>

Jogo::Jogo() {
    status = MENU;
}

void Jogo::setup() {

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