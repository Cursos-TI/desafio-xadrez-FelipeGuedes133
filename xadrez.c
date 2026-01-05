#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // ================= TORRE =================
    // Bem, a torre sempre se move em uma linha reta.
    // Como solicitado no desafio, ela deve se mover 5 casas para a direita.
    // Usando a estrutura: FOR

    int casasTorre = 5;

    printf("Movimento da TORRE:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ================= BISPO =================
    // O Bispo sempre se move na diagonal no tabuleiro.
    // como solicitado no desafio, ele deve se mover 5 casas na diagonal para cima e à direita.
    // Usando a estrutura: WHILE

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do BISPO:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // ================= RAINHA =================
    // já a rainha pode se mover em todas as direções no tabuleiro.
    // como solicitado no desafio, a rainha deve se movimentar 8 casas para a esquerda.
    // usando a estrutura: DO-WHILE

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da RAINHA:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
