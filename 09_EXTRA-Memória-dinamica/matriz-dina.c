#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int lin, int col, int **mat) {
    int cont = 1;
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            mat[i][j] = cont;
            cont++;
        }
    }
}

void exibir(int lin, int col, int **mat) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
        }
    }
}

int main()
{
    int linhas = 3, colunas = 3;
    int **mat = malloc(sizeof(int *) * linhas); // aloca 3 linhas
    mat[0] = malloc(sizeof(int) * colunas); // aloca 3 colunas
    mat[1] = malloc(sizeof(int) * colunas); // aloca 3 colunas
    mat[2] = malloc(sizeof(int) * colunas); // aloca 3 colunas
    preencherMatriz(linhas, colunas, mat);
    exibir(linhas, colunas, mat);
    
    return 0;
}