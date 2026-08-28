/*
17) Escreva uma função que receba um vetor de floats e seu tamanho.
Sua função deve ordenar o vetor em ordem crescente.
*/
void ordenar(float *vet, int tamanho);
int main(){
    int tamanho = 3;
    float vet[3] = {4.0, 6.0, 2.0};
    ordenar(vet, tamanho);
    for(int i = 0; i < tamanho; i++){
            printf("%.1f ", vet[i]);
    }
    return 0;
}
void ordenar(float *vet, int tamanho){
    float aux = 0;
    for(int i = 0; i < tamanho; i++){
        for(int j = i + 1; j < tamanho; j++){
        if(vet[i] > vet[j]){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }

    }
    }
}
