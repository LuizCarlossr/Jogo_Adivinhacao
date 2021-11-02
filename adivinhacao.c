#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    //Imprime cabecalho do nosso jogos do

    printf("\n\n          P  /_\\  P                            \n");
    printf("         /_\\_|_|_/_\\                              \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao       \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!   \n");
    printf("    |" "  |  |_|  |"  " |                           \n");
    printf("    |_____| ' _ ' |_____|                           \n");
    printf("          \\__|_|__/                                \n");  
    printf("\n\n                                                \n");
    printf("\n Escolha um numero de 1 a 100\n\n");


    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade abaixo você escolhe?\n");
    printf("(1) Muito Fácil   - 20 Tentativas\n");
    printf("(2)   Fácil       - 15 Tentativas\n");
    printf("(3)   Médio       - 10 Tentativas\n");
    printf("(4)  Difícil      - 05 Tentativas\n");
    printf("(5) Muito Difícil - 03 Tentativas\n\n");
    printf("Opção: ");
    scanf("%d", &nivel);

    int numerodetentativas;
   
    switch(nivel) {
        case 1:printf("Muito Fácil\n"); 
            numerodetentativas = 20;
            break;

        case 2:printf("Fácil\n");
            numerodetentativas = 15;
            break;

        case 3:printf("Médio\n");
            numerodetentativas = 10;
            break;

        case 4:printf("Difícil\n");
            numerodetentativas = 5;
            break;

        default:printf("Muito Difícil\n");
            numerodetentativas = 3;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++) {

        printf("Tentativa %d\n\n", tentativas);
        printf("Qual é o seu chute\n");
       
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0 ) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
               
        if(acertou) {
             break;
        }
       
        else if(maior) {
            printf("Seu numero foi maior que o número secreto\n");
        }    
                     
        else {
            printf("Seu numero foi menor que o número secreto\n");
        }

        tentativas ++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("\n***Fim de jogo!***\n");

    if(acertou) {

        printf("\n\n            OOOOOOOOOOOOO            \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n                                   \n");

        printf("Voce ganhou!\n");
        printf("\nVocê acertou em %d tentaivas\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

    } else {
        printf("Você perdeu! Tente novamente!\n");
       
                printf("\n\n   \\|/ ____ \\|/       \n");
                printf("    @~/ ,. \\~@              \n");
                printf("   /_( \\__/ )_\\           \n");
                printf("      \\__U_/                \n");
                printf("\n\n                        \n");  
    }

   
}