/*
13) Desenvolva um programa que leia um vetor de 6 números inteiros.
Escreva uma função chamada separar_pares_impares que recebe o vetor, o seu tamanho,
e mais duas variáveis inteiras por referência: qtd_pares e qtd_impares. A função deve
analisar o vetor e contar quantos números são pares e quantos são ímpares. Ela deve atualizar
diretamente as variáveis da main através dos ponteiros.
*/
#include <stdio.h>
void escrevet(int n, int *vet);
void separar_pares_impares(int n, int *vet, int *qtd_pares, int *qtd_impares);
int main(){
    int n = 6;
    int vet[n];
    int qtd_pares = 0, qtd_impares = 0;
    escrevet(n, vet);
    separar_pares_impares(n, vet, &qtd_pares, &qtd_impares);
    printf("A quantidade de pares e: %d\n", qtd_pares);
    printf("A quantidade de impares e: %d", qtd_impares);
    return 0;
}
void escrevet(int n, int *vet){
    printf("Digite os %d valores do vetor: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
}
void separar_pares_impares(int n, int *vet, int *qtd_pares, int *qtd_impares){
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
        (*qtd_pares)++;
        }
        else{
        (*qtd_impares)++;
        }
    }
}
