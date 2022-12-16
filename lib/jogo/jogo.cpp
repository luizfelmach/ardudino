#include <jogo.hpp>

Jogo::Jogo() {
    tela = U8GLIB_SSD1306_128X64(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);
    status = JOGANDO;
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
    tela.firstPage();

    do {
        chao.printarNaTela(tela);
        dino.printarNaTela(tela);
    } while (tela.nextPage());


    if (pontuacao % 20 == 0) {
        dino.pularDino();
    }

    dino.atualizar();
}

void Jogo::renderizaPerdeuJogo() {

}