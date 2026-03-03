#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
char código1[20], código2[20];
char cidade1[40], cidade2[40];
int população1, população2;
float área1, área2;
float pib1, pib2;
int turístico1, turístico2; 
  // Área para entrada de dados
printf("--- Cadastro Carta 1 ---\n");

printf("digite o estado (A-H): \n");
scanf("%c", &estado1);

printf("digite o código da carta: \n");
scanf("%s", &código1);

printf("digite o nome da cidade: \n");
scanf("%s", &cidade1);

printf("digite a população: \n");
scanf("%d", &população1);

printf("digite a área (km²): \n");
scanf("%f", &área1);

printf("digite o PIB: \n");
scanf("%f", &pib1);

printf("digite o número de pontos turísticos: \n");
scanf("%d", &turístico1);

printf("--- Cadastro Carta 2 ---\n");

printf("digite o estado (A-H) \n");
scanf("%c", &estado2);

printf("digite o código da carta: \n");
scanf("%s", &código2);

printf("digite o nome da cidade: \n");
scanf("%s", &cidade2);

printf("digite a população: \n");
scanf("%d", &população2);

printf("digite a área (km²): \n");
scanf("%f", &área2);

printf("digite o PIB: \n");
scanf("%f", &pib2);

printf("digite o número de pontos turísticos: \n");
scanf("%d", &turístico2);

  // Área para exibição dos dados da cidade
printf("\nCarta 1:\nestado: %c\ncódigo: %s\ncidade: %s\npopulação: %d\nárea: %.2f km²\npib: %.2f bilhões\npontos turísticos: %d\n",
 estado1, código1, cidade1, população1, área1, pib1, turístico1);

printf("\nCarta 2:\nestado: %c\ncódigo: %s\ncidade: %s\npopulação: %d\nárea: %.2f km²\npib: %.2f bilhões\npontos turísticos: %d\n", 
 estado2, código2, cidade2, população2, área2, pib2, turístico2);

return 0;

}
