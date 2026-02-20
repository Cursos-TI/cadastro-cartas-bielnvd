#include <stdio.h>

int main() {
  // Declaração de variáveis:
int carta, pontos_turisticos, população;
char letra = 'A', nome_cidade [70], nome [100], codigo [60];
float pib, area, densidade_populacional, per_capita;

//declarando variáveis da segunda carta:
int carta2, pontos_turisticos2, população2;
char letra2 = 'B', nome_cidade2 [77], nome2 [100], codigo2 [100];
float pib2, area2, densidade_populacional2, per_capita2;

// Entrada de dados
printf ("Número da carta:\n");
scanf (" %d", &carta);

printf ("Letra da cidade\n");
scanf (" %c", &letra);

printf ("Código da carta:\n");
scanf (" %s", codigo);

printf ("Nome da cidade:\n");
scanf (" %s", nome_cidade);

printf ("Qual população da cidade?\n");
scanf (" %d", &população);

printf ("Qual a área da cidade?\n");
scanf (" %f", &area);

printf ("Qual o PIB da cidade?\n");
scanf (" %f", &pib);

printf ("Quantos pontos turisticos possui a cidade?\n");
scanf (" %d", &pontos_turisticos);
printf (" *** Segunda Carta ***\n");
//Entrada de dados da segunda carta:
printf ("Número da carta:\n ");
scanf (" %d", &carta2);

printf ("Letra da cidade:\n");
scanf (" %c", &letra2);

printf ("Código da carta:\n");
scanf (" %s", codigo2);

printf ("Nome da cidade:\n");
scanf (" %s", nome_cidade2);

printf ("Qual população do cidade?\n");
scanf (" %d", &população2);

printf ("Qual a área da cidade?\n");
scanf (" %f", &area2);

printf ("Qual o PIB da cidade?\n");
scanf (" %f", &pib2);

printf ("Quantos pontos turisticos possui a cidade?\n");
scanf (" %d", &pontos_turisticos2);

//Cálculo de PIB e Densidade populacional(Carta1).
densidade_populacional = (float) população/ area;
per_capita = (float) pib/ população; 
// Carta2
densidade_populacional2 = (float) população2/ area2;
per_capita2 = (float) pib2/ população2; 

//impressão.
printf ("Número da carta: %d\n"  "Letra do estado: %c\n" , carta, letra);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo, nome_cidade);
printf ("População: %d\n" "Àrea da cidade: %.2fkm²\n", população, area);
printf ("PIB do estado: %f\n"  "Pontos Turisticos: %d\n", pib, pontos_turisticos);
printf ("Densidade Populacional é: %.5fhab/km²\n", densidade_populacional);
printf ("O Pib Per Capita é: %.7f Reais\n", per_capita);

printf ("Número da carta: %d\n" "Letra do estado: %c\n" , carta2, letra2);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo2, nome_cidade2);
printf ("População: %d\n" "Àrea da cidade: %.2fkm²\n", população2, area2);
printf ("PIB do estado: %f\n" "Pontos Turisticos: %d\n", pib2, pontos_turisticos2);
printf ("Densidade Populacional é: %.5fhab/km²\n", densidade_populacional2);
printf ("O Pib Per Capita é: %.7f Reais\n", per_capita2);

//fim da impressão segunda carta.
return 0;
}
