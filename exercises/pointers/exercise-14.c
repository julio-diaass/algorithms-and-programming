/*
14) Escreva uma função que receba uma string como argumento, compute e
retorne quantos espaços, quantas letras 'a' ou 'A' e quantos letras 'c' tem na string.
*/
#include <stdio.h>
void escrevestr(char *str);
void qtd(char *str, int *qtdspc, int *qtda, int *qtdc);
int main(){
    char str[100];
    int qtdspc = 0, qtda = 0, qtdc = 0;
    escrevestr(str);
    qtd(str, &qtdspc, &qtda, &qtdc);
    printf("Quantidade de espacos: %d\n", qtdspc);
    printf("Quantidade de A/a: %d\n", qtda);
    printf("Quantidade de c: %d", qtdc);
    return 0;
}
void escrevestr(char *str){
    printf("Digite uma frase: ");
    scanf("%99[^\n]", str);
}
void qtd(char *str, int *qtdspc, int *qtda, int *qtdc){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ')
            (*qtdspc)++;
        if(str[i] == 'A' || str[i] == 'a')
            (*qtda)++;
        if(str[i] == 'c')
            (*qtdc)++;
    }
}
