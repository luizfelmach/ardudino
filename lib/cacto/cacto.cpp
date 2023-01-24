#include <cacto.hpp>
#include <Arduino.h>
#include <objeto_bitmap.hpp>

Cacto::Cacto(){
    cacto = random(0, 3);
    x=80;
    y=30;
    vx = 0;
    vy = 0;
};

void Cacto::atualizar(int vx=1){
    x -= vx;
    y += vy;
}

void Cacto::printarNaTela(U8GLIB_SSD1306_128X64 tela){
    if (cacto == 0) {
        tela.drawBitmapP(x, y, 3, 27, cacto_allArray[cacto]);
    }
    if (cacto == 1) {
        tela.drawBitmapP(x, y, 3, 27, cacto_allArray[cacto]);

    }
    if (cacto == 2) {
        tela.drawBitmapP(x, y, 3, 27, cacto_allArray[cacto]);

    }
    if (cacto == 3) {
        tela.drawBitmapP(x, y, 3, 27, cacto_allArray[cacto]);

    }
}