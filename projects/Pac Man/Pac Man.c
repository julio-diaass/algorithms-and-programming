#include <stdio.h>
#include <stdlib.h>

char **mapa;
int linhas, colunas;

void lermapa(){
    FILE* f;
    f = fopen("mapav0.txt", "r");
    if(f==0){
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    fscanf(f, "%d %d", &linhas, &colunas);

    alocamapa();

    for(int i = 0; i < 5; i++){
        fscanf(f, "%s", mapa[i]);
    }
    fclose(f);
}
void alocamapa(){
    mapa = malloc(sizeof(char*) * linhas);
    for(int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * (colunas + 1));
    }
}
void liberamapa(){
    for(int i = 0; i < linhas; i++){
        free (mapa[i]);
    }
    free(mapa);
}
int main(){

    lermapa();

    for(int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }

    liberamapa();
}
