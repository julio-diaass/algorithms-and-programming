/*1- Escreva um programa que declare uma variável inteira com valor 10 e
um ponteiro para ela.  Imprima o endereço da variável, o valor guardado
no ponteiro e o valor apontado por ele usando o operador *;
*/
#include <stdio.h>
int main(){
    int valor = 10, *p = &valor;
    printf("%p\n", &valor);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}
