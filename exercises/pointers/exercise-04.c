/* 4- Crie uma função chamada zerar_contador que recebe um número inteiro por
referência (usando ponteiro). A função deve forçar o valor dessa variável a virar 0.
No programa principal, mostre que a variável original foi alterada diretamente.
*/
#include <stdio.h>
void zerar_contador(int *a){
    *a = 0;
}
int main(){
    int qtd;
    scanf("%d", &qtd);
    printf("Valor antes: %d\n", qtd);
    zerar_contador(&qtd);
    printf("%d", qtd);
    return 0;
}
