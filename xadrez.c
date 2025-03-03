#include <stdio.h>

// Recursiva Torre
void movimentoTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Casa %d: Direita\n", 6 - casas); // Contagem decrescente
    movimentoTorre(casas - 1);
}

//Recurssiva com Loops aninhados para o Bispo
void movimentoBispo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Casa %d: cima, Direita\n", 6 - casas); 
    movimentoBispo(casas - 1);
}

// Recursiva para a Rainha
void movimentoRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Casa %d: Esquerda\n", 9 - casas); // Contagem decrescente
    movimentoRainha(casas - 1);
}

int main() {
    // Movimento da Torre (5 casas para direita)
    printf("Movimento da Torre:\n");
    movimentoTorre(5);

    // Movimento do Bispo (5 casas na diagonal para cima e a direita)
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5);

    // Movimento da Rainha (8 casas para esquerda)
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);

    //Movimento do Cavalo (2 para cima e 1 para a direita, em "L")
    printf("\nMovimento do Cavalo:\n");
    int passosParaCima = 2; 
    int passosParaDireita = 1; 

    // Loops complexos para o movimento vertical - para baixo
    for (int i = 1; i <= passosParaCima; i++) {
        printf("Casa %d: Cima\n", i);
        if (i == passosParaCima) {
            for (int j = 1; j <= passosParaDireita; j++) {
                if (j == passosParaDireita) {
                    printf("Casa %d: Direita\n", passosParaCima + j);
                    break; 
                }
            }
        }
    }

    return 0;
    }