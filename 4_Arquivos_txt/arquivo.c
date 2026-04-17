#include <stdio.h>
#include <stdlib.h>

void escever_arquivo_txt(char *caminho_arquivo, int n, int vet[n]){
  FILE *fp = fopen(caminho_arquivo, "w");
  if(fp == NULL){
    fprintf(stderr, "Caminho do arquivo! \n");
    return;
  }
  for(int i = 0; i<n; i++){
    fprintf(fp, "d\n", vet[i]);
  }
  fclose(fp);
}
int main(){
  int vet[5] = {5, 3, 2, 7, 9};
  escever_arquivo_txt("./dados/numeros.txt", int n, int *vet)

  return 0;
}
