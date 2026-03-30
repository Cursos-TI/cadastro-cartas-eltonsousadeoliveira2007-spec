#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo;
  char cidade;
  int populacao;
  float area;
  float pib;
  int turismo;

  // Área para entrada de dados
  printf("Digite os dados da carta 01.\n");
  
  printf("Qual é o Estado:\n");
  scanf("%s", &estado);
  
  printf("Digite o código da carta:\n");
  scanf("%s", &codigo);

  printf("Nome da Cidade:\n");
  scanf("%s", &cidade);

  printf("Qual o número populacional:\n");
  scanf("%d", &populacao);

  printf("Informe a área territorial em km²:\n");
  scanf("%f", &area);

  printf("Valor do PIB:\n");
  scanf("%f", &pib);

  printf("Quantidade de pontos turísticos:\n");
  scanf("%d", &turismo);

 printf("Digite agora os dados da carta 02.\n");
  
  printf("Qual é o Estado:\n");
  scanf("%s", &estado);
  
  printf("Digite o código da carta:\n");
  scanf("%s", &codigo);

  printf("Nome da Cidade:\n");
  scanf("%s", &cidade);

  printf("Qual o número populacional:\n");
  scanf("%d", &populacao);

  printf("Informe a área territorial em km²:\n");
  scanf("%f", &area);

  printf("Valor do PIB:\n");
  scanf("%f", &pib);

  printf("Quantidade de pontos turísticos:\n");
  scanf("%d", &turismo);  

  // Área para exibição dos dados da cid
return 0;
} 
