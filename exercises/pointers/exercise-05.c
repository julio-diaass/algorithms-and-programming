/*5) Uma função em C só pode retornar um valor com o comando return.
Escreva uma função chamada calcular_retangulo que recebe a base e a
altura de um retângulo por valor. Ela deve calcular a área e o perímetro.
Como precisamos de duas respostas, use a passagem por referência para entregar
a área e o perímetro de volta ao programa principal.
*/
#include <stdio.h>
void calcule(int b, int a, int *A, int *P){
    *A = b * a;
    *P = (2*b) + (2*a);
}
int main(){
    int base, altura, A, P;
    scanf("%d %d", &base, &altura);
    calcule(base, altura, &A, &P);
    printf("Area: %d\n", A);
    printf("Perimetro: %d\n", P);
    return 0;
}
