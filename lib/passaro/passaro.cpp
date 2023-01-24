#include <passaro.hpp>
#include <objeto_bitmap.hpp>
#include <Arduino.h>

Passaro::Passaro() {
    x = 80;
    y = 32;
    vx = 1;
    vy = 0;
    frame = 0;
}

void Passaro::atualizar(int vx = 1) {
    x -= vx;
    y += vy;
}


void Passaro::printarNaTela(U8GLIB_SSD1306_128X64 tela) {
    if (frame <= 20) {
        tela.drawBitmapP(x, y, 3, 23, passaro_pterodactyl_1);

    } else {
        tela.drawBitmapP(x, y, 3, 23, passaro_pterodactyl_2);
        if (frame >= 40) frame = 0;
    }
    frame += 1;
}