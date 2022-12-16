#include <dino.hpp>
#include <dino_bitmap.hpp>

Dino::Dino() {
    x = 10;
    y = 20;
    vx = 0;
    vy = 0;
    accx = 0;
    accy = 2;
    i = 0;
    status = ANDA;
}

void Dino::atualizar() {
    vx += accx;
    vy += accy;
    x += vx;
    y += vy;

    if (y >= 34) {
        y = 34;
        vy = 0;
    }
}

void Dino::pularDino() {
    if (status == PULOU) {
        return;
    }
    vy = -12;
}

void Dino::abaixaDino() {
    status = ABAIXOU;
}

void Dino::printarNaTela(U8GLIB_SSD1306_128X64 tela) {
    if (status == ANDA) {
        tela.drawBitmapP(x, y, 3, 23, dino_andando_array[i]);
        i += 1;
        if (i > 2) {
            i = 0;
        }
    }

    if (status == PULOU) {

    }

    if (status == ABAIXOU) {

    }

    if (status == MORREU) {

    }
}