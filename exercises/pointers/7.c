/*7) Declare um vetor de 5 números inteiros. Use um ponteiro para percorrer o vetor
e imprimir o valor de cada posição sem usar a notação de colchetes [], apenas somando
posições ao endereço do ponteiro;
*/
#include <stdio.h>
int main(){
    int vet[5] = {10, 5, 8, 1, 3};
    int *p = vet;
    for(int i = 0; i < 5; i++){
    printf("%d ", *(p+i));
    }
    return 0;
}
