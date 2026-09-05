#include <stdio.h>
int calculate(int a, int b, char op){
    if(op == '+'){
        return a+b;
    }
    else if(op == '-'){
        return a-b;
    }
    else if(op == '*'){
        return a*b;
    }
    else if(op == '/'){
        return a/b;
    }
    else if(op != '+' || '-' || '*' || '/'){
        printf("Operacao invalida");
    }

}
int main(){
    int a, b;
    char op;
    int r;
    printf("Digite 2 numeros e 1 operador: ");
    scanf("%d %d %c", &a, &b, &op);
    r = calculate(a, b, op);
    printf("O resultado e: %d", r);
}
