#include <stdio.h>

int main() {
  // Declaração de variáveis:
int carta = 31231, pontos_turisticos = 73, população = 1000000;
char letra = 'A', nome_cidade [70], nome [100], codigo [60];
float pib = 50000.00, area = 500.00;
//declarando variáveis da segunda carta:
int carta2 = 12, pontos_turisticos2 = 23, população2 = 23;
char letra2 = 'B', nome_cidade2 [77], nome2 [100], codigo2 [100];
float pib2 = 5098, area2 = 543;
// Entrada de dados
printf ("Número da carta:\n ");
scanf (" %d", &carta);

printf ("Letra da cidade\n", letra);
scanf (" %c", &letra);

printf ("Código da carta:\n", codigo);
scanf (" %s", codigo);

printf ("Nome da cidade:\n", nome_cidade);
scanf (" %s", nome_cidade);

printf ("Qual população da cidade?\n");
scanf (" %d", &população);

printf ("Qual a área da cidade?\n");
scanf (" %f", &area);

printf ("Qual o PIB da cidade?\n");
scanf (" %f", &pib);

printf ("Quantos pontos turisticos possui a cidade?\n");
scanf (" %d", &pontos_turisticos);
//impressão de dados.
printf ("Número da carta: %d\n"  "Letra do estado: %c\n" , carta, letra);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo, nome_cidade);
printf ("População: %d\n" "Àrea da cidade: %.2f\n", população, area);
printf ("PIB do estado: %f\n"  "Pontos Turisticos: %d\n", pib, pontos_turisticos);
//fim da impressão da primeira carta.
//Entrada de dados da segunda carta:
printf ("Número da carta:\n ", carta2);
scanf (" %d", &carta2);

printf ("Letra da cidade:\n", letra2);
scanf (" %c", &letra2);

printf ("Código da carta:\n", codigo2);
scanf (" %s", codigo2);

printf ("Nome da cidade:\n", nome_cidade2);
scanf (" %s", nome_cidade2);

printf ("Qual população do cidade?\n", população2);
scanf (" %d", &população2);

printf ("Qual a área da cidade?\n", area2);
scanf (" %f", &area2);

printf ("Qual o PIB da cidade?\n", pib2);
scanf (" %f", &pib2);

printf ("Quantos pontos turisticos possui a cidade?\n", pontos_turisticos2);
scanf (" %d", &pontos_turisticos2);

//impressão.
printf ("Número da carta: %d\n" "Letra do estado: %c\n" , carta2, letra2);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo2, nome_cidade2);
printf ("População: %d\n" "Àrea da cidade: %.2f\n", população2, area2);
printf ("PIB do estado: %f\n" "Pontos Turisticos: %d\n", pib2, pontos_turisticos2);
//fim da impressão segunda carta.
return 0;
} 
