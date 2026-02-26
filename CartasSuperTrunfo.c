#include <stdio.h>

int main() {
  // Declaração de variáveis:
int carta, pontos_turisticos;
char letra = 'A', nome_cidade [70], nome [100], codigo [60];
double pib, area, densidade_populacional, per_capita;
unsigned long int população;

//declarando variáveis da segunda carta:
int carta2, pontos_turisticos2;
char letra2 = 'B', nome_cidade2 [77], nome2 [100], codigo2 [100];
double pib2, area2, densidade_populacional2, per_capita2;
unsigned long int população2;
// Entrada de dados
printf ("Número da carta:\n");
scanf (" %d", &carta);

printf ("Letra da cidade\n");
scanf (" %c", &letra);

printf ("Código da carta:\n");
scanf (" %s", codigo);

printf ("Nome da cidade:\n");
scanf ( " %s", nome_cidade);

printf ("Qual população da cidade?\n");
scanf (" %lu", &população);

printf ("Qual a área da cidade?\n");
scanf (" %lf", &area);

printf ("Qual o PIB da cidade?\n");
scanf (" %lf", &pib);

printf ("Quantos pontos turisticos possui a cidade?\n");
scanf (" %d", &pontos_turisticos);
printf (" *** SEGUNDA CARTA!! ***\n");
//Entrada de dados da segunda carta:
printf ("Número da carta:\n ");
scanf (" %d", &carta2);

printf ("Letra da cidade:\n");
scanf (" %c", &letra2);

printf ("Código da carta:\n");
scanf (" %s", codigo2);

printf ("Nome da cidade:\n");
scanf ( " %s", nome_cidade2);

printf ("Qual população do cidade?\n");
scanf (" %lu", &população2);

printf ("Qual a área da cidade?\n");
scanf (" %lf", &area2);

printf ("Qual o PIB da cidade?\n");
scanf (" %lf", &pib2);

printf ("Quantos pontos turisticos possui a cidade?\n");
scanf (" %d", &pontos_turisticos2);

//Cálculo de PIB e Densidade populacional(Carta1).
densidade_populacional = (double) população/ area;
per_capita = (double) pib/ população; 
// Carta2
densidade_populacional2 = (double) população2/ area2;
per_capita2 = (double) pib2/ população2; 

//impressão.
printf ("Número da carta: %d\n"  "Letra do estado: %c\n" , carta, letra);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo, nome_cidade);
printf ("População: %lu\n" "Àrea da cidade: %.2lfdm²\n", população, area);
printf ("PIB do estado: %.2lf\n"  "Pontos Turisticos: %d\n", pib, pontos_turisticos);
printf ("Densidade Populacional é: %.4lfhab/km²\n", densidade_populacional);
printf ("O Pib Per Capita é: %.2lf R$\n", per_capita);

printf ("-----------------------------------------------------------------------\n");

printf ("Número da carta: %d\n" "Letra do estado: %c\n" , carta2, letra2);
printf ("Código da carta: %s\n"  "Nome da cidade: %s \n", codigo2, nome_cidade2);
printf ("População: %lu\n" "Àrea da cidade: %.2lfdm²\n", população2, area2);
printf ("PIB do estado: %.2lf\n" "Pontos Turisticos: %d\n", pib2, pontos_turisticos2);
printf ("Densidade Populacional é: %.4lfhab/km²\n", densidade_populacional2);
printf ("O Pib Per Capita é: %.2lf R$\n", per_capita2);
//comparação entre as cartas:
int populaçãoC = população > população2, pontos_turisticosC = pontos_turisticos > pontos_turisticos2, areaC = area > area2, pibC = pib > pib2, densidade_populacionalC = densidade_populacional < densidade_populacional2, per_capitaC = per_capita > per_capita2;

double superpoder1 = população +  pontos_turisticos + area + pib + densidade_populacional + per_capita;
double superpoder2 = população2 + pontos_turisticos2 + area2 + pib2 + densidade_populacional2 + per_capita2;
int superResultado = superpoder1 > superpoder2;
printf ("------------COMPARAÇÃO DE CARTAS------------\n"); 
printf ("População Carta%d venceu: %d\n", carta, populaçãoC);
printf ("Área Carta%d venceu: %d\n", carta, areaC);
printf ("PIB Carta%d venceu: %d\n", carta, pibC);
printf ("Densidade Populacional: Carta%d venceu: %d\n", carta, densidade_populacionalC);
printf ("PIB Per Capita: Carta%d venceu: %d\n", carta, per_capitaC);
printf ("Pontos Turisticos Carta%d venceu: %d\n", carta, pontos_turisticosC);
printf ("Super poder da carta%d venceu: %d\n", carta, superResultado);
return 0;
}
