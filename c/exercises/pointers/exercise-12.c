/*
12) Escreva uma função que recebe um vetor de inteiros como parâmetro e seu tamanho.
A função deve computar e retornar a quantidade multiplos de 5 que existem no vetor.
Teste a função na main().
*/
#include <stdio.h>
void numvet(int n, int *vet);
int qtd(int n, int *vet);
int main(){
    int n, r = 0;
    printf("Digite qual sera o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    numvet(n, vet);
    r = qtd(n, vet);
    printf("A quantidade e: %d", r);
    return 0;
}
void numvet(int n, int *vet){
    printf("Digite os %d numeros: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
}
int qtd(int n, int *vet){
    int qtdd = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 5 == 0){
            qtdd++;
        }
    }
    return qtdd;
}
