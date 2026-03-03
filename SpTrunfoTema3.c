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
//comparação entre as cartas:
printf ("----------------------COMPARAÇÃO DAS CARTAS-------------------------------\n");
if (população > população2) {
printf ("Primeira carta ganhou em popualção! - População: %lu\n", população);
}
else if (população < população2){
printf ("Segunda carta ganhou em população! - População: %lu\n", população2);
}
else if (população == população2) {
printf ("Impressionante, as duas cartas empataram em população! - População: %lu\n", população);
}

if (pontos_turisticos > pontos_turisticos2) {
printf ("Primeira carta ganhou em pontos turisticos! - Pontos turisticos: %d\n", pontos_turisticos);
}
else if (pontos_turisticos < pontos_turisticos2){
printf ("Segunda carta ganhou em pontos turisticos! - Pontos turisticos: %d\n", pontos_turisticos2);
}
else if (pontos_turisticos == pontos_turisticos2) {
printf ("Impressionante, as duas cartas empataram em pontos turisticos! - Pontos turisticos: %d\n", pontos_turisticos);
}

if ( area > area2) {
printf ("Primeira carta ganhou em área! - Área: %.2lfdm²\n", area);
}
else if (area < area2){
printf ("Segunda carta ganhou em área! - Área: %.2lfdm²\n", area2);
}
else if (area == area2) {
printf ("Impressionante, as duas cartas empataram em área! - Área: %.2lfdm²\n", area);
}

if (pib > pib2) {
printf ("Primeira carta ganhou em PIB! - PIB: %.2lf\n", pib);
}
else if (pib < pib2){
printf ("Segunda carta ganhou em PIB! - PIB: %.2lf\n", pib2);
}
else if (pib == pib2) {
printf ("Impressionante, as duas cartas empataram em PIB! - PIB: %.2lf\n", pib);
}

if (densidade_populacional < densidade_populacional2) {
printf ("Primeira carta ganhou em densidade populacional! - Densidade: %.4lf hab/km²\n", densidade_populacional);
}
else if (densidade_populacional > densidade_populacional2){
printf ("Segunda carta ganhou em densidade populacional! - Densidade: %.4lf hab/km²\n", densidade_populacional2);
}
else if (densidade_populacional == densidade_populacional2) {
printf ("Impressionante, as duas cartas empataram em densidade populacional! - Densidade: %.4lf hab/km²\n", densidade_populacional);
}

if ( per_capita > per_capita2) {
printf ("Primeira carta ganhou em PIB per capita! - PIB per capita: %.2lf R$\n", per_capita);
}
else if (per_capita < per_capita2){
printf ("Segunda carta ganhou em PIB per capita! - PIB per capita: %.2lf R$\n", per_capita2);
}
else if (per_capita == per_capita2) {
printf ("Impressionante, as duas cartas empataram em PIB per capita! - PIB per capita: %.2lf R$\n", per_capita);
}

if ( superpoder1 > superpoder2) {
printf ("Primeira carta ganhou em superpoder! - Superpoder: %.2lf\n", superpoder1);
}
else if (superpoder1 < superpoder2){
printf ("Segunda carta ganhou em superpoder! - Superpoder: %.2lf\n", superpoder2);
}
else if (superpoder1 == superpoder2) {
printf ("Impressionante, as duas cartas empataram em superpoder! - Superpoder carta 1: %.2lf, Superpoder carta 2: %.2lf\n", superpoder1, superpoder2);
}

return 0;
}