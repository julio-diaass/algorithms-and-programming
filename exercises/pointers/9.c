/*
9) Escreva um programa que leia um vetor de 6 números inteiros. Declare dois ponteiros:
ptr_inicio (apontando para o primeiro elemento, índice 0) e ptr_fim (apontando para o último
elemento, índice 5). Crie um laço de repetição que troque os valores apontados por ptr_inicio e ptr_fim.
A cada repetição, use a aritmética de ponteiros para somar 1 ao ptr_inicio (avançar) e
subtrair 1 do ptr_fim (recuar). O laço deve parar quando os ponteiros se cruzarem.
No final, exiba o vetor completamente invertido.
*/
#include <stdio.h>

int main(){
    int vet[6], aux;
    int *ptr_inicio = vet;
    int *ptr_fim = vet+5;
    for(int i = 0; i < 6; i++){
    scanf("%d", vet+i);
    }
    while(ptr_inicio < ptr_fim){
        aux = *ptr_inicio;
        *ptr_inicio = *ptr_fim;
        *ptr_fim = aux;
        ptr_inicio++;
        ptr_fim--;
    }
    for(int i = 0; i < 6; i++){
    printf("%d ", *(vet+i));
}
    return 0;
}
