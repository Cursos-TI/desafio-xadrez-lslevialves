#include <stdio.h>

int main(){

    int escolhaPeca, movimentoCompleto; 
    int i, j, k;
    char continuar;

    do{
        printf("\n----Jogo de Xadrez-----\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("Escolha uma peça para ver seus movimentos: ");
        scanf("%d", &escolhaPeca);

        switch (escolhaPeca)
        {
        case 1:
            printf("Movimento da Torre:\n");
            for(i = 0; i < 5; i++){
                printf("Direita\n");
            }
            break;

        case 2:
            printf("Movimento do Bispo:\n");
            j = 0;
            while(j < 5){
                printf("Cima Direita\n");
                j++;
            }
            break;

        case 3:
            printf("Movimento da Rainha:\n");
            k = 0;
            do{
                printf("Esquerda\n");
                k++;
            } while(k < 8);
            break;
        
        case 4:
            while (movimentoCompleto--)
            {
                for (i = 0; i < 2; i++){
                    printf("Cima\n");
                            
                }
                printf("Direita\n");   
           
                break;
            }
        default:
            printf("Opção inválida\n");
            continue;
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
