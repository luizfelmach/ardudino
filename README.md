<p align="center">
  <a href="https://github.com/luizfelmach/ardudino">
    <img width="200px" alt="ardudino" src="./assets/banner.png">
  </a>
</p>

<div align="center">

  ![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

</div>


## Conteúdo
- [Conteúdo](#conteúdo)
- [Resumo](#resumo)
- [Descrição](#descrição)
- [Como compilar](#como-compilar)
- [Detalhes](#detalhes)
- [Componentes](#componentes)
- [Circuito](#circuito)
- [Resultado](#resultado)
- [Autores](#autores)

## Resumo

O projeto consiste em um **mini emulador** de jogo controlado por um Arduino. O Arduino irá controlar uma tela Oled i2c no qual conterá um jogo baseado no Dino do navegador Chrome (T-Rex Running).

## Descrição

valor

## Como compilar

O projeto foi inteiramente construído utilizando [PlatformIO](https://platformio.org/). Para utilizar faça [download](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) da extensão para o vscode. O PlaformIO, a partir do arquivo de configuração ***platformio.ini*** faz a instalação das dependências necessárias para compilar. 

```toml
; platformio.ini

[env:uno]
platform = "atmelavr"
board = "uno"
framework = "arduino"
lib_deps = "olikraus/U8glib@^1.19.1" ; dependência necessária
```

Com tudo configurado, basta clicar no botão **build** do platformIO e fazer o **upload** para o Arduino.

## Detalhes

valor

## Componentes

- Display i2c (Tela Oled 1.3’’ 128x64)
- Arduino Uno
- Push button
- Leds
- Resistores
- Acelerômetro (MPU)

## Circuito

<p align="center">
  <img width="500px" src="./assets/schematic.png" />
</p>

## Resultado

<div align="center">

  [![ardudino](https://img.youtube.com/vi/ardudino/0.jpg)](https://www.youtube.com/watch?v=ardudino)

</div>

## Autores

- **[@luizfelmach](https://github.com/luizfelmach)**
- **[@gabriellybc](https://github.com/gabriellybc)**
- **[@carpesfelipe](https://github.com/carpesfelipe)**
