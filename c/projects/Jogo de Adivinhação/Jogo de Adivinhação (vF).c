#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Biblioteca inserida para uso da função abs no cálculo dos pontos perdidos
//#define NUMERO_DE_TENTATIVAS 5
int main(){
    //imprime o cabeçalho do nosso jogo
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao! *\n");
    printf("*******************************************\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Selecione o nivel de dificuldade:\n");
    printf("(1) Facil  (2) Medio  (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch(nivel){
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 10;
            break;
        default:
            numerodetentativas = 6;
            break;
    }


    for(int i=1; i<=numerodetentativas; i++){
    printf("Tentativa %d.\n", tentativas);
    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d.\n", chute);

    if(chute < 0){
        printf("Voce nao pode chutar numeros negativos!\n");
        //i--;
        continue;
    }

    acertou = (chute == numerosecreto);
    int maior = (chute > numerosecreto);
    if(acertou){
        break;
    }
           else if(maior){
                printf("Seu chute foi maior que o numero secreto.\n");
            }
            else{
                printf("Seu chute foi menor que o numero secreto.\n");
            }
            tentativas++;
            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo!\n\n");
    if(acertou){
        printf("Voce ganhou!\n");
        printf("Voce acertou em %d tentativas. ", tentativas);
        printf("Sua pontuacao foi de %.2f pontos.", pontos);
    }
    else{
        printf("Voce perdeu! O numero secreto era: %d. Tente novamente!\n\n", numerosecreto);
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }
}
