#pragma once
#include <U8glib.h>
#include <constantes.hpp>

struct Objeto {
    
    int i;
    int x;
    int y;
    int tipoObjeto;
    Objeto();
    void atualizar(int vx);
    void printarNaTela(U8GLIB_SSD1306_128X64 tela);
};
