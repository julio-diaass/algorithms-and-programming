/*
10) Crie dois vetores no mesmo programa: um vetor de 3 elementos do tipo char e um vetor de 3 elementos do tipo double.
Imprima o endereço de memória de cada uma das 3 posições do vetor de char e, logo depois, o endereço de cada posição
do vetor de double. Explique por que o tipo char avança somente 1 enquanto que o tipo double avança 8.
*/
#include <stdio.h>
int main(){
    char vet[3] = {'J', 'U', 'L'};
    double vetor[3] = {2500000, 213142, 1322321};
    for(int i = 0; i < 3; i++){
    printf("%p\n", vet+i);
    }
    printf("\n");
    for(int i = 0; i < 3; i++){
    printf("%p\n", vetor+i);
    }
    return 0;
}

/*
O tipo char avança somente 1 unidade por ocupar apenas 1 byte de memória. Já Double ocupa 8 bytes.
*/
