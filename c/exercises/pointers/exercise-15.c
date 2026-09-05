#include <stdio.h>
/* 15)  Escreva uma função que receba 3 vetores inteiros
(vet, vImpares e vPares), sua função deve passar todos os valores
impares de vet para vImpares e todos os valores pares para vPares).
Observe que a main() deve saber os tamanhos do vetor de impar e de par.
*/
void escrevevet(int n, int *vet);
void vetpar(int n, int *vet, int *vpar, int *qtdpar);
void vetimpar(int n, int *vet, int *vimp, int *qtdimpar);
int main(){
    int n, qtdpar = 0, qtdimpar = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n], vimp[n], vpar[n];
    escrevevet(n, vet);
    vetpar(n, vet, vpar, &qtdpar);
    vetimpar(n, vet, vimp, &qtdimpar);
    printf("Pares: %d -> ", qtdpar);
    for(int i = 0; i < qtdpar; i++){
        printf("%d ", vpar[i]);
    }
    printf("\n");
    printf("Impares: %d -> ", qtdimpar);
    for(int i = 0; i < qtdimpar; i++){
        printf("%d ", vimp[i]);
    }
    return 0;
}
void escrevevet(int n, int *vet){
    printf("Digite os valores do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
}
void vetpar(int n, int *vet, int *vpar, int *qtdpar){
    int aux = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            vpar[aux] = vet[i];
            aux++;
        }
    }
    *qtdpar = aux;
}
void vetimpar(int n, int *vet, int *vimp, int *qtdimpar){
    int aux = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 != 0){
            vimp[aux] = vet[i];
            aux++;
        }
    }
    *qtdimpar = aux;
}
