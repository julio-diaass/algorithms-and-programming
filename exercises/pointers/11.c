/*
11- Escreva uma função que receba como argumento um vetor e seu tamanho (n). O vetor deve armazenar n notas.
Sua função de computar: a média das notas, a maior nota e a menor nota.
Certifique que esses valores retornem para quem chamou sua função.  Teste a função na main().
*/
#include <stdio.h>
float media(float *vet, int n);
float maior(float vet, int n);
float menor(float vet, int n);
int main(){
    int n;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    float vet[n];
    printf("Digite as notas: ");
    for(int i = 0; i < n; i++){
        scanf("%f", &vet[i]);
    }
    float m = media(vet, n);
    float M = maior(vet, n);
    float menork = menor(vet, n);
    printf("A media e: %.2f\n", m);
    printf("A maior nota e: %.2f\n", M);
    printf("A Menor nota e: %.2f", menork);

    return 0;
}
float media(float *vet, int n){
    float soma = 0;
    float m = 0;
    for(int i = 0; i < n; i++){
        soma += vet[i];
    }
    m = (float)soma / n;
    return m;
}
float maior(float *vet, int n){
    float maior = *vet;
    for(int i = 0; i < n; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}
float menor(float *vet, int n){
    float menor = *vet;
    for(int i = 0; i < n; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }

}
    return menor;
}

