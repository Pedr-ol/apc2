#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
  char nome[200];
  unsigned int idade;
} Pessoa;
//ESCREVER
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
//LER
Pessoa *ler_pessoas_bin(char *caminho_arquivo, int n_pessoas, Pessoa pessoas [n_pessoas]) {
  //abertura de arquivo
  FILE *in_bin = fopen(caminho_arquivo, "r");

  //validaçao da abertura
  if(in_bin==NULL){
    fprintf(stderr, "Impossivel de abrir %s\n", caminho_arquivo);
  } else {
    printf("Arquivo %s aberto com sucesso\n", caminho_arquivo);
  }
  //ler dados
  //Pessoa *pessoas = NULL;
  Pessoa *pessoa = malloc(sizeof(Pessoa)*n_pessoas);
  int pessoas_lidas = fread(pessoas, sizeof(Pessoa), n_pessoas, in_bin);
  
  //fechar arquivo
  fclose(in_bin);
  return pessoas;
}

void exibir(int n, Pessoa pessoas[n]){
  for(int i=0; i<n; i++){
    printf("{nome: %s idade: %d}\n", pessoas[i].nome, pessoas[i].idade);
  }
}
  int main(void){
    Pessoa pessoas[5] = {
      {.nome = "João Marcos", .idade = 25},
      {.nome = "Ana Maria", .idade = 21},
      {.nome = "Beto", .idade = 18},
      {.nome = "Caio", .idade = 22},
      {.nome = "Davi", .idade = 19},
    };
  
    escrever_pessoas_bin("./pessoas.bin", 5, pessoas);
    Pessoa *p_pessoas = ler_pessoas_bin("./pessoas.bin", 5, pessoas);

    
   exibir(5, p_pessoas);
    return 0;
  }