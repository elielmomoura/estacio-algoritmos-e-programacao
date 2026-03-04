#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Definiremos A = São Paulo, B = Rio de Janeiro, C = Rio Grande do Sul, D = Parana, 
// E = Santa Catarina, F = Minas Gerais, G = Bahia e H = Goias.
char opcao_0, codigo_0[3],cidade_0[50], opcao_1, codigo_1[3],cidade_1[50];
char *estado_0, *estado_1;
// *estado_0 o * na frente indica que é ponteiro para string
int populacao_0, pontosTur_0, populacao_1, pontosTur_1;
float area_0, pib_0, area_1, pib_1;

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  printf("===================\n");
  printf("Supertrunfo CIDADES\n");
  printf("===================\n\n");
  printf("Preencha os dados das cartas 'Cidades'\n\n");
  printf("O primeiro campo Estado, preencha conforme litas abaixo:\nA = São Paulo\nB = Rio de Janeiro\nC = Rio Grande do Sul\n");
  printf("D = Parana\nE = Santa Catarina\nF = Minas Gerais\nG = Bahia\nH = Goias\n\n");
  
  // Área para entrada de dados da CARTA 1
  do
  {
    printf("Entre com informações da Carta 1 \n");
    printf("Entre com codigo do Estado: ");
    scanf(" %c",&opcao_0);
    switch (opcao_0)
    {
    case 'A':
    case 'a':
      estado_0 = "São Paulo";
      break;
    case 'B':
    case 'b':
      estado_0 = "Rio de Janeiro";
      break;
    case 'C':
    case 'c':
      estado_0 = "Rio Grande do Sul";
      break;
    case 'D':
    case 'd':
      estado_0 = "Parana";
      break;
    case 'E':
    case 'e':
      estado_0 = "Santa Catarina";
      break;
    case 'F':
    case 'f':
      estado_0 = "Minas Gerais";
      break;
    case 'G':
    case 'g':
      estado_0 = "Bahia";
      break;
    case 'H':
    case 'h':
      estado_0 = "Goias";
      break;
    
    default:
      estado_0 = NULL;  // marca como inválido
      printf("Opção inválida! Tente novamente.\n\n");
    }
  } while (estado_0 == NULL);  // repete enquanto for inválido
  // espaço antes do %c evita erro com ENTER anterior
  printf("Entre com codigo da Carta(maximo de 2 digitos): ");
  scanf("%2s",codigo_0);
  
  printf("Entre com o nome da cidade: ");
  scanf(" %[^\n]", cidade_0);

  printf("Populacao: ");
  scanf(" %d", &populacao_0);

  printf("Area: ");
  scanf(" %f", &area_0);

  printf("PIB: ");
  scanf(" %f", &pib_0);

  printf("Numero de pontos turisticos: ");
  scanf(" %d", &pontosTur_0);
  printf("\n");
  
  // Área para entrada de dados da CARTA 2
  do
  {
    printf("Entre com informações da Carta 2 \n");
    printf("Entre com codigo do Estado: ");
    scanf(" %c",&opcao_1);
    switch (opcao_1)
    {
    case 'A':
    case 'a':
      estado_1 = "São Paulo";
      break;
    case 'B':
    case 'b':
      estado_1 = "Rio de Janeiro";
      break;
    case 'C':
    case 'c':
      estado_1 = "Rio Grande do Sul";
      break;
    case 'D':
    case 'd':
      estado_1 = "Parana";
      break;
    case 'E':
    case 'e':
      estado_1 = "Santa Catarina";
      break;
    case 'F':
    case 'f':
      estado_1 = "Minas Gerais";
      break;
    case 'G':
    case 'g':
      estado_1 = "Bahia";
      break;
    case 'H':
    case 'h':
      estado_1 = "Goias";
      break;
    
    default:
      estado_1 = NULL;  // marca como inválido
      printf("Opção inválida! Tente novamente.\n\n");
    }
  } while (estado_1 == NULL);  // repete enquanto for inválido
  // espaço antes do %c evita erro com ENTER anterior
  printf("Entre com codigo da Carta(maximo de 2 digitos): ");
  scanf("%2s",codigo_1);
  
  printf("Entre com o nome da cidade: ");
  scanf(" %[^\n]", cidade_1);

  printf("Populacao: ");
  scanf(" %d", &populacao_1);

  printf("Area: ");
  scanf(" %f", &area_1);

  printf("PIB: ");
  scanf(" %f", &pib_1);

  printf("Numero de pontos turisticos: ");
  scanf(" %d", &pontosTur_1);
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("\n===== Dados da Carta 1 =====\n");
  printf("Estado: %s\n", estado_0);
  printf("Codigo: %c%s\n", opcao_0,codigo_0);
  printf("Cidade: %s\n", cidade_0);
  printf("Populacao: %d\n", populacao_0);
  printf("Area: %.2f\n", area_0);
  printf("PIB: %.2f\n", pib_0);
  printf("Pontos Turisticos: %d\n\n", pontosTur_0);
  
  printf("\n===== Dados da Carta 2 =====\n");
  printf("Estado: %s\n", estado_1);
  printf("Codigo: %c%s\n", opcao_1,codigo_1);
  printf("Cidade: %s\n", cidade_1);
  printf("Populacao: %d\n", populacao_1);
  printf("Area: %.2f\n", area_1);
  printf("PIB: %.2f\n", pib_1);
  printf("Pontos Turisticos: %d\n\n", pontosTur_1);

return 0;
} 