#include <stdio.h>

#define BISPO_MOVES 5
#define TORRE_MOVES 5
#define RAINHA_MOVES 8

int main() {
    int i;

    // Movimento do Bispo (Diagonal Superior Direita: cima + direita)
    printf("Movimento do Bispo (Diagonal Superior Direita):\n");
    for(i = 0; i < BISPO_MOVES; i++) {
        printf("CIMA\n");
        printf("DIREITA\n");
    }
    printf("\n");

    // Movimento da Torre (Direita)
    printf("Movimento da Torre (Direita):\n");
    for(i = 0; i < TORRE_MOVES; i++) {
        printf("DIREITA\n");
    }
    printf("\n");

    // Movimento da Rainha (Esquerda)
    printf("Movimento da Rainha (Esquerda):\n");
    for(i = 0; i < RAINHA_MOVES; i++) {
        printf("ESQUERDA\n");
    }

    return 0;
}
