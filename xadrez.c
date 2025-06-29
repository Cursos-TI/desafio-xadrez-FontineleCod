#include <stdio.h>

// Constantes para quantidade de movimentos
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimento do BISPO: 5 casas na diagonal superior direita
    printf("Movimento do BISPO:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimento da TORRE: 5 casas para a direita
    printf("\nMovimento da TORRE:\n");
    int j = 0;
    while (j < TORRE_MOV) {
        printf("Direita\n");
        j++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda
    printf("\nMovimento da RAINHA:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOV);

    return 0;
}
