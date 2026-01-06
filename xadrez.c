#include <stdio.h>

// ================= TORRE =================
// Bem, a torre sempre se move em uma linha reta.
// Como solicitado no desafio, ela deve se mover 5 casas para a direita.
// Usando a estrutura: mudanças na estrutura
// Movimento recursivo da Torre
// Direção: Direita

void moverTorre(int casas) {
    if (casas == 0) {
        return; // condição de parada da recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

/////////////////////// RAINHA ///////////////////////
// já a rainha pode se mover em todas as direções no tabuleiro.
// Movimento recursivo da Rainha
// Direção: Esquerda
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ================= BISPO =================
// O Bispo sempre se move na diagonal no tabuleiro.
// Usando a estrutura: mudança na estrutura
// - Recursividade
// - Loops aninhados
// Movimento: Diagonal (Cima + Direita)
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    // Loop externo: movimento vertical
    for (int vertical = 1; vertical <= 1; vertical++) {

        // Loop interno: movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/////////////////////// CAVALO ///////////////////////
// O cavalo deve se move em L no tabuleiro
// Movimentação: Mudança na movimentação
// 2 casas para cima e 1 para a direita
// Uso de loops aninhados complexos
void moverCavalo() {

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    for (int i = 1; i <= movimentoVertical; i++) {

        // Controle extra para demonstrar uso avançado
        if (i > movimentoVertical) {
            break;
        }

        printf("Cima\n");

        // Após completar o movimento vertical, faz o horizontal
        if (i == movimentoVertical) {

            int j = 1;
            while (j <= movimentoHorizontal) {

                if (j < 0) {
                    continue; // não acontece, mas demonstra uso
                }

                printf("Direita\n");
                j++;
            }
        }
    }
}


int main() {

    // Valores definidos diretamente no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do BISPO:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da RAINHA:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do CAVALO:\n");
    moverCavalo();

    return 0;
}