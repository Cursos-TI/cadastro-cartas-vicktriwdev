#include <stdio.h>
#include <locale.h>

int main(){
//suporte para acentos
setlocale(LC_ALL, "");

//declaração de variáveis
char cidade1 [20], cidade2 [20];
char estado1 [20], estado2 [20];
char codigo1 [4], codigo2 [4];
int populacao1, populacao2;
float km1, km2;
float pib1, pib2;
int turistas1, turistas2;
float densidade1, densidade2;
float percapita1, percapita2;
double superpoder1, superpoder2;

//entrada de dados da primeira carta
printf("Digite a cidade da carta:  \n");
scanf("%s", cidade1);

printf("Digite o estado da carta:  \n");
scanf("%19s", estado1);

printf("Digite o código da carta usando a inicial do estado e dois números:  \n");
scanf("%3s", codigo1);

printf("Digite a população da cidade:  \n");
scanf("%d", &populacao1);

printf("Digite quantos km tem a cidade:  \n");
scanf("%f", &km1);

printf("Digite o PIB da cidade:  \n");
scanf("%f", &pib1);

printf("Digite quantos pontos turísticos a cidade tem:  ");
scanf ("%d", &turistas1);

printf("\n\n"); 
//entrada de dados da segunda carta
printf("Digite a cidade da segunda carta:  \n");
scanf("%s", cidade2);

printf("Digite o estado da segunda carta:  \n");
scanf("%19s", estado2);

printf("Digite o código da segunda carta usando a inicial do estado e dois números:  \n");
scanf("%3s", codigo2);

printf("Digite a população da segunda cidade:  \n");
scanf("%d", &populacao2);

printf("Digite quantos km tem a segunda cidade:  \n");
scanf("%f", &km2);

printf("Digite o PIB da segunda cidade:  \n");
scanf("%f", &pib2);

printf("Digite quantos pontos turísticos a segunda cidade tem:  ");
scanf ("%d", &turistas2);

//cálculo de densidade, per capita e superpoder
densidade1 = (float) populacao1 / km1;
densidade2 = (float) populacao2 / km2;
percapita1 = (float) pib1 / populacao1;
percapita2 = (float) pib2 / populacao2;
superpoder1 = populacao1 + km1 + pib1 + turistas1 + percapita1 + (1.0 / densidade1);
superpoder2 = populacao2 + km2 + pib2 + turistas2 + percapita2 + (1.0 / densidade2);

printf("\n\n");
//comparação final
printf("Resultado da Batalha de acordo com a População:\n");
    printf("Carta 1: %s: %d\n", cidade1, populacao1);
    printf("Carta 2: %s: %d\n", cidade2, populacao2);
if (populacao1>populacao2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com a Área:\n");
    printf("Carta 1: %s: %f\n", cidade1, km1);
    printf("Carta 2: %s: %f\n", cidade2, km2);
if (km1>km2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com o PIB:\n");
    printf("Carta 1: %s: %f\n", cidade1, pib1);
    printf("Carta 2: %s: %f\n", cidade2, pib2);
if (pib1>pib2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com o número de pontos Turísticos:\n");
    printf("Carta 1: %s: %d\n", cidade1, turistas1);
    printf("Carta 2: %s: %d\n", cidade2, turistas2);
if (turistas1>turistas2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com a Densidade Populacional:\n");
    printf("Carta 1: %s: %f\n", cidade1, densidade1);
    printf("Carta 2: %s: %f\n", cidade2, densidade2);
if (densidade1<densidade2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com o PIB per Capita:\n");
    printf("Carta 1: %s: %.2f\n", cidade1, percapita1);
    printf("Carta 2: %s: %.2f\n", cidade2, percapita2);
if (percapita1>percapita2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
printf("\n\n");
printf("Resultado da Batalha de acordo com o Superpoder:\n");
    printf("Carta 1: %s: %.2lf\n", cidade1, superpoder1);
    printf("Carta 2: %s: %.2lf\n", cidade2, superpoder2);
if (superpoder1>superpoder2){
    printf("Resultado: Carta 1 venceu!");
} else {
    printf("Resultado: Carta 2 venceu!");
}
return 0;
}