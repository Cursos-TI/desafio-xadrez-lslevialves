#include <stdio.h>

// ===== Desafio nivel mestre =====

// mover torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0);

    printf("Direita\n");
    moverTorre(casas - 1);
}

// mover bispo 5 casas na diagonal superior direita
void moverBispo(int casas) {
    if (casas == 0);

    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// mover rainha  8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0);

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// mover cavalo em movimento em L (2 cima + 1 direita)
void moverCavaloVertical(int casas) {
    if (casas == 0);

    printf("Cima\n");
    moverCavaloVertical(casas - 1);
}

void moverCavalo(int etapa) {
    if (etapa == 0);

    moverCavaloVertical(2); // sobe 2
    printf("Direita\n");    // anda 1 pra direita
}

// ===== FUNÇÃO PRINCIPAL =====

int main() {

    int escolhaPeca;
    char continuar;

    do {
        printf("\n----Jogo de Xadrez-----\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("Escolha uma peça para ver seus movimentos: ");
        scanf("%d", &escolhaPeca);

        switch (escolhaPeca) {

        case 1:
            printf("Movimento da Torre:\n");
            moverTorre(5);
            break;

        case 2:
            printf("Movimento do Bispo:\n");
            moverBispo(5);
            break;

        case 3:
            printf("Movimento da Rainha:\n");
            moverRainha(8);
            break;

        case 4:
            printf("Movimento do Cavalo:\n");
            moverCavalo(1);
            break;

        default:
            printf("Opção inválida\n");
            continue;
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
