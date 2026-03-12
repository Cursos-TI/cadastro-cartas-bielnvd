#include <stdio.h>

int main() {
  // Declaração de variáveis:
int carta, pontos_turisticos, opcao;
char letra = 'A', nome_cidade [70], nome [100], codigo [60];
double pib, area, densidade_populacional, per_capita;
unsigned long int população;

//declarando variáveis da segunda carta:
int carta2, pontos_turisticos2, opcao2;
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

//Entrada de dados da segunda carta:
printf (" *** SEGUNDA CARTA!! ***\n");

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
//soma dos atributos para o superpoder:
double superpoder1 = população +  pontos_turisticos + area + pib + densidade_populacional + per_capita;
double superpoder2 = população2 + pontos_turisticos2 + area2 + pib2 + densidade_populacional2 + per_capita2;

printf ("Escolha um atributo para comparar com a segunda carta:\n");
printf ("1. População.\n");
printf ("2. Àrea.\n");
printf ("3. PIB.\n");
printf ("4. Número de pontos turísticos.\n");
printf ("5. Densidade demográfica.\n");
printf ("6. Superpoder.");
scanf ("%d", &opcao);

switch (opcao)
{
case 1:
   if (população > população2) {
   printf ("Primeira carta venceu!\nVencedor: %lu - Perdedor: %lu", população, população2);
   } else if (população < população2) {
    printf ("Segunda carta venceu!\nVencedor: %lu - Perdedor: %lu", população2, população);
   } else {
   printf (" Empate!\n Primeira carta: %lu - Segunda carta: %lu", população, população2); 
   }

  break;
case 2:
if (area > area2) {
   printf ("Primeira carta venceu!\n Vencedor: %.2f - Perdedor: %.2f", area, area2);
   } else if (area < area2) {
    printf ("Segunda carta venceu!\n Vencedor: %.2f - Perdedor: %.2f", area2, area);
   } else {
   printf (" Empate!\n Primeira carta:\n %.2f - Segunda carta: %.2f", area, area2); 
   }
break;

case 3:
if (pib > pib2) {
   printf ("Primeira carta venceu!\n Vencedor: %.2f - Perdedor: %.2f", pib, pib2);
   } else if (pib < pib2) {
    printf ("Segunda carta venceu!\n Vencedor: %.2f - Perdedor: %.2f", pib2, pib);
   } else {
   printf (" Empate!\n Primeira carta: %.2f - Segunda carta: %.2f", pib, pib2); 
   }
break;

case 4:
if (pontos_turisticos > pontos_turisticos2) {
   printf ("Primeira carta venceu!\nVencedor: %d - Perdedor: %d", pontos_turisticos, pontos_turisticos2);
   } else if (pontos_turisticos < pontos_turisticos2) {
    printf ("Segunda carta venceu!\nVencedor: %d - Perdedor: %d", pontos_turisticos2, pontos_turisticos);
   } else {
   printf (" Empate!\n Primeira carta: %d - Segunda carta: %d", pontos_turisticos, pontos_turisticos2); 
   }
break;

case 5:
if (densidade_populacional > densidade_populacional2) {
   printf ("Segunda carta venceu!\nvencedor: %.2f - Perdedor: %.2f", densidade_populacional2, densidade_populacional);
   } else if (densidade_populacional < densidade_populacional2) {
    printf ("Primeira carta venceu!\nVencedor: %.2f - Perdedor: %.2f", densidade_populacional, densidade_populacional2);
   } else {
   printf (" Empate!\n Primeira carta: %.2f - Segunda carta: %.2f", densidade_populacional, densidade_populacional2); 
   }
break;
case 6:
if (superpoder1 > superpoder2 ) {
   printf ("Primeira carta venceu!\nvencedor: %.2f - Perdedor: %.2f", superpoder1, superpoder2);
   } else if (superpoder1 < superpoder2) {
    printf ("Segunda carta venceu!\nVencedor: %.2f - Perdedor: %.2f", superpoder2, superpoder1);
   } else {
   printf (" Empate!\nPrimeira carta: %.2f - Segunda carta: %.2f\n", superpoder1, superpoder2); 
   }
break;

default:
printf ("Selicione um atributo válido e tente novamente!");
  break;
  
}
  
return 0;
}