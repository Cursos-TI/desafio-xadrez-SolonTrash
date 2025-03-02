#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e a direita)
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Movimento da Rainha (8 casas para esquerda)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    do {
       printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j<= 8);

    return 0;
    }
