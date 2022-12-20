#include <jogo.hpp>
#include <constantes.hpp>

Jogo::Jogo() {
    tela = U8GLIB_SSD1306_128X64(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);
    status = JOGANDO;
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
    acel.atualizaDados();
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


   acel.detectaMovimento();
   
    if(acel.detectaPulou()){
        dino.pularDino();

    }
    
    if(acel.detectaAbaixou()){
        dino.abaixaDino();
    }

    dino.atualizar();
}

void Jogo::renderizaPerdeuJogo() {

}