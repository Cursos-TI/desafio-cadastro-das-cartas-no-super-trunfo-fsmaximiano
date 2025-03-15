#include <stdio.h>

int main() {
   // Variáveis para a Carta 1
   char estado1;              // Letra do estado (A-H)
   char codigo1[4];           // Código da carta (ex: A01) + terminador nulo
   char nomeCidade1[100];     // Nome da cidade (tamanho máximo arbitrário)
   int populacao1;            // População da cidade
   float area1;               // Área em km²
   float pib1;                // PIB em bilhões de reais
   int pontosTuristicos1;     // Número de pontos turísticos

   // Variáveis para a Carta 2
   char estado2;              // Letra do estado (A-H)
   char codigo2[4];           // Código da carta (ex: B02) + terminador nulo
   char nomeCidade2[100];     // Nome da cidade (tamanho máximo arbitrário)
   int populacao2;            // População da cidade
   float area2;               // Área em km²
   float pib2;                // PIB em bilhões de reais
   int pontosTuristicos2;     // Número de pontos turísticos

   // Leitura dos dados da Carta 1
   printf("Digite os dados da Carta 1:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado1);          // Espaço antes de %c para ignorar whitespace
   printf("Código da Carta (ex: A01): ");
   scanf("%s", codigo1);            // Lê a string do código
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", nomeCidade1);   // Lê o nome até o newline
   printf("População: ");
   scanf("%d", &populacao1);        // Lê um inteiro
   printf("Área (km²): ");
   scanf("%f", &area1);             // Lê um float
   printf("PIB (bilhões de reais): ");
   scanf("%f", &pib1);              // Lê um float
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicos1); // Lê um inteiro

   // Leitura dos dados da Carta 2
   printf("\nDigite os dados da Carta 2:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado2);
   printf("Código da Carta (ex: B02): ");
   scanf("%s", codigo2);
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", nomeCidade2);
   printf("População: ");
   scanf("%d", &populacao2);
   printf("Área (km²): ");
   scanf("%f", &area2);
   printf("PIB (bilhões de reais): ");
   scanf("%f", &pib2);
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicos2);

   // Exibição dos dados da Carta 1
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", nomeCidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);               // 2 casas decimais
   printf("PIB: %.2f bilhões de reais\n", pib1);    // 2 casas decimais
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

   // Exibição dos dados da Carta 2
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeCidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

   return 0;
}