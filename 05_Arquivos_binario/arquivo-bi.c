#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
  char nome[200];
  unsigned int idade;
} Pessoa;

void escrever_pessoas_bin(
  char *caminho_arquivo, 
  int n_pessoas, 
  Pessoa pessoas [n_pessoas]
) {
  //abertura de arquivo
  FILE *out_bin = fopen(caminho_arquivo, "wb");
  
  //validaçao da abertura
  if(out_bin==NULL){
    fprintf(stderr, "Impossivel de abrir %s\n", caminho_arquivo);
  } else {
    printf("Arquivo %s aberto com sucesso\n", caminho_arquivo);
  }
  //escrever dados
  fwrite(pessoas, sizeof(Pessoa), n_pessoas, out_bin);
  //fechar arquivo
  fclose(out_bin);
}

  int main(void){
    Pessoa pessoas[5] = {
      {.nome = "João Marcos", .idade = 25},
      {.nome = "Ana Maria", .idade = 21},
      {.nome = "Beto", .idade = 18},
      {.nome = "Caio", .idade = 22},
      {.nome = "Davi", .idade = 19},
    };