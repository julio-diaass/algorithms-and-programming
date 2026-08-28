/*
6) Escreva uma função chamada trocar_valores que recebe duas variáveis inteiras.
O objetivo é inverter os valores delas (o que estava na primeira vai para a segunda
e vice-versa). Explique e prove no código por que esse exercício obriga o uso de passagem por referência.
*/
#include <stdio.h>
void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
/* A passagem da função deve ser feita por referência, pois para alterar os valores entre as
variáveis, basta alterar o conteúdo apontado pelo ponteiro.

A função precisa receber os endereços das duas variáveis para poder alterar diretamente
seus valores originais. Ao utilizar ponteiros, *a e *b permitem acessar e modificar
o conteúdo armazenado nesses endereços. Se os valores fossem passados apenas por valor,
a função modificaria apenas cópias das variáveis.
*/
