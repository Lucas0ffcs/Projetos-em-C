#include <gba_console.h>  // fun��es de texto
#include <gba_video.h>    // fun��es de v�deo
#include <gba_systemcalls.h> // VBlankIntrWait
#include <stdio.h>        // iprintf

int main(void) {
    consoleDemoInit();          // inicializa a tela de texto
    iprintf("Hello, Game Boy Advance!\n");  // escreve na tela

    while(1) {
        VBlankIntrWait();       // espera a tela atualizar
    }
}

