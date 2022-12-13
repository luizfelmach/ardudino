#pragma once

#include <U8glib.h>

struct Tela {
    U8GLIB_SSD1306_128X64 u8g;

    void mostraTela();
    void atualizaTela();
};