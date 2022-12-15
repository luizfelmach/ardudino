#include <acelerometro.hpp>
#include <Wire.h>


Acelerometro::Acelerometro(){
    x=0;
    y=0;
    z=0; 
}

void Acelerometro::detectaMovimento(){
    x=(Wire.read()<<8|Wire.read());
    y=(Wire.read()<<8|Wire.read());
    z=(Wire.read()<<8|Wire.read());
    x/= 1000;
    y/= 1000;
    z /= 1000;
}
bool Acelerometro:: detectaAbaixou(){
    if(x<-5){
        Serial.println("abaixou");
        return true;
    }
    return false;
}

bool Acelerometro:: detectaPulou(){
    if(x>5){
        Serial.println("pulou");
        return true;
    }
    return false;
}

bool Acelerometro:: detectaParado(){
    if(x<=-5 && x<=5){
        Serial.println("ta paradao");
        return true;
    }
    return false;
}
