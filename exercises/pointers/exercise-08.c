/* 8- Implemente uma função encontra_maior que recebe um vetor de inteiros,
o tamanho dele e um ponteiro para inteiro. A função deve achar o maior número do vetor
e salvar o resultado no endereço passado por parâmetro;
*/
#include <stdio.h>
void encontramaior(int *vet, int tamanho, int *maior){
    int aux = *vet;
    for(int i = 0; i < tamanho; i++){
        if(*(vet+i) > aux){
            aux = *(vet+i);
        }
    }
    *maior = aux;
}
int main(){
    int vet[5] = {5, 8, 2, 4, 6}, tamanho = 5, maior;
    encontramaior(vet, tamanho, &maior);
    printf("O maior e: %d", maior);
    return 0;
}
