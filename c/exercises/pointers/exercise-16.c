/*
16) Escreva uma função que recebe dois vetores de inteiros (v1 e v2)
e seus tamanhos, sua função deve computar o vetore interseção
(vetInter).
a = [3, 6, 7, 1, 2]; b = [4, 7, 2, 8, 9];
vetInter = [7, 2, ...]... ou seja, todos os elementos
que estão no vetor 'a' e também no vetor 'b'.
*/
#include <stdio.h>
void tamanhos(int *n1, int *n2, int *n3);
void escrevet(int n1, int n2, int *vet1, int *vet2);
void vetinter(int n1, int n2, int n3, int *vet1, int *vet2, int *vetInter, int *aux);
int main(){
    int n1, n2, n3;
    tamanhos(&n1, &n2, &n3);
    int vet1[n1], vet2[n2], vetInter[n3];
    int aux = 0;
    escrevet(n1, n2, vet1, vet2);
    vetinter(n1, n2, n3, vet1, vet2, vetInter, &aux);
    /*
    for(int i = 0; i < n1; i++){
        printf("%d ", vet1[i]);
    }
    for(int i = 0; i < n2; i++){
        printf("%d ", vet2[i]);
    }
    */
    for(int i = 0; i < aux; i++){
        printf("%d ", vetInter[i]);
    }

    return 0;
}
void tamanhos(int *n1, int *n2, int *n3){
printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", n1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", n2);
    if(*n1 > *n2){
        *n3 = *n1;
    }
    else{
        *n3 = *n2;
    }
}
void escrevet(int n1, int n2, int *vet1, int *vet2){
    printf("Digite %d numeros para o vetor 1: ", n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &vet1[i]);
    }
    printf("Digite %d numeros para o vetor 2: ", n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &vet2[i]);
    }
}
void vetinter(int n1, int n2, int n3, int *vet1, int *vet2, int *vetInter, int *aux){

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(vet1[i] == vet2[j]){
                vetInter[*aux] = vet1[i];
                (*aux)++;
        }
    }
   }
}
