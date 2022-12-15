#include <dino.hpp>

Dino::Dino() {
    x = 10;
    y = 30;
    vx = 0;
    vy = 0;
    accx = 0;
    accy = 0;
    status = ANDA;
}

void Dino::atualizar() {
    vx += accx;
    vy += accy;
    x += vx;
    y += vy;
}

void Dino::pularDino() {
    if (status == PULOU) {
        return;
    }
    vy = -5;
}

void Dino::abaixaDino() {
    status = ABAIXOU;
}

void Dino::printarNaTela(U8GLIB_SSD1306_128X64 tela) {
    if (status == ANDA) {
        //tela.drawBitmapP(20, 40, 3, 23, dino_testetrex_up_1s);
    }

    if (status == PULOU) {

    }

    if (status == ABAIXOU) {

    }

    if (status == MORREU) {

    }
}