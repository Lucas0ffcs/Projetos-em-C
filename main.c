#include <gba_console.h>  // funções de texto
#include <gba_video.h>    // funções de vídeo
#include <gba_systemcalls.h> // VBlankIntrWait
#include <stdio.h>        // iprintf

int main(void) {
    consoleDemoInit();          // inicializa a tela de texto
    iprintf("Hello, Game Boy Advance!\n");  // escreve na tela

    while(1) {
        VBlankIntrWait();       // espera a tela atualizar
    }
}

