/*
2)  Crie um programa com uma função chamada soma_mais_dez que recebe um ponteiro
para um número inteiro. A função deve somar 10 ao valor armazenado na variável
original e alterar seu conteúdo diretamente na memória principal.
*/
#include <stdio.h>
void soma10(int *soma){
    *soma += 10;
}
int main(){
    int num;
    scanf("%d", &num);
    soma10(&num);
    printf("%d", num);
}
