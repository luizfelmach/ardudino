#include <objeto.hpp>
#include <objeto_bitmap.hpp>

Objeto::Objeto(){
    i=0;
    x=0;
    y=0;
};

void Objeto::atualizar(int vx=1){
    if (x <= -64) {
        i += 1;
         x= 0;
    }
    x-=vx;
    y= (int)random(55,64);
    tipoObjeto=random(PASSARO,CACTO);
    
}

void Objeto::printarNaTela(U8GLIB_SSD1306_128X64 tela){
    tela.drawBitmapP(x, y, 3, 27, cacto_allArray[i % 4]);
    atualizar();
}