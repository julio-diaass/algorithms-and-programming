//18) Escreva uma função que receba um vetor, compute e retorne a soma dos elementos impares e a média dos pares.
#include <stdio.h>
void calcule(int *vet, int *soma, float *media, int tamanho){
    int qtdm = 0;
        int somapar = 0;
        int somaimpar = 0;
    for(int i = 0; i < tamanho; i++){
        if(vet[i] % 2 == 0){
            somapar += vet[i];
            qtdm++;
        }
        else{
            somaimpar += vet[i];
        }
    }
    *media = (float)somapar / qtdm;
    *soma = somaimpar;
}
int main(){
    int tamanho = 5;
    int vet[5] = {2, 5 , 3, 7, 6};
    int soma = 0;
    float media = 0;
    calcule(vet, &soma, &media, tamanho);
    printf("%d %.1f", soma, media);
    return 0;
}
