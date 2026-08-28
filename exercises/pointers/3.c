/* 3) Crie uma função chamada calcular_quadrado que recebe
um número inteiro por valor. A função deve calcular o quadrado
desse número e apenas retornar o resultado. No programa principal
(main), mostre que a variável original passada para a função não
mudou de valor após a chamada.
*/
#include <stdio.h>
int calcular_quadrado(int num){
    num *= num;
    return num;
}
int main(){
    int num, r;
    scanf("%d", &num);
    r = calcular_quadrado(num);
    printf("%d\n", r);
    printf("%d", num);
    return 0;
}
