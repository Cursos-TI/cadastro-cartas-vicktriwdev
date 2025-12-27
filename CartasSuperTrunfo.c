#include <stdio.h>
#include <locale.h>

int main(){
//suporte para acentos
setlocale(LC_ALL, "");

//declaração de variáveis
char cidade1 [20];
char estado1 [20];
char codigo1 [4];
float populacao1;
float km1;
float pib1;
int turistas1;
float densidade1;
float percapita1;

//entrada de dados da primeira carta
printf("Digite a cidade da carta:  \n");
scanf("%s", cidade1);

printf("Digite o estado da carta:  \n");
scanf("%19s", estado1);

printf("Digite o código da carta usando a inicial do estado e dois números:  \n");
scanf("%3s", codigo1);

printf("Digite a população da cidade:  \n");
scanf("%f", &populacao1);

printf("Digite quantos km tem a cidade:  \n");
scanf("%f", &km1);

printf("Digite o PIB da cidade:  \n");
scanf("%f", &pib1);

printf("Digite quantos pontos turísticos a cidade tem:  \n");
scanf ("%d", &turistas1);
//linha em branco antes da exibição da carta
printf("\n");

//variáveis da segunda carta
char cidade2 [20];
char estado2 [20];
char codigo2 [4];
float populacao2;
float km2;
float pib2;
int turistas2;
float densidade2;
float percapita2;

printf("\n");
//entrada de dados da segunda carta
printf("Digite a cidade da segunda carta:  \n");
scanf("%s", cidade2);

printf("Digite o estado da segunda carta:  \n");
scanf("%19s", estado2);

printf("Digite o código da segunda carta usando a inicial do estado e dois números:  \n");
scanf("%4s", codigo2);

printf("Digite a população da segunda cidade:  \n");
scanf("%f", &populacao2);

printf("Digite quantos km tem a segunda cidade:  \n");
scanf("%f", &km2);

printf("Digite o PIB da segunda cidade:  \n");
scanf("%f", &pib2);

printf("Digite quantos pontos turísticos a segunda cidade tem:  \n");
scanf ("%d", &turistas2);
//linha em branco antes da segunda carta
printf("\n");

//calculo matematico
densidade1 = (float) populacao1 / km1;
percapita1 = (float) pib1 / populacao1;
densidade2 = (float) populacao2 / km2;
percapita2 = (float) pib2 / populacao2;

//exibição da primeira carta
printf("Carta 1: \nCidade: %s \nEstado: %s \nCódigo: %s \n", cidade1, estado1, codigo1); 
printf("População: %.0f \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d\n",populacao1, km1, pib1, turistas1);
printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidade1, percapita1);
//espaço visual para a segunda carta
printf("\n\n");
printf("Carta 2: \nCidade: %s \nEstado: %s \nCódigo: %s \n", cidade2, estado2, codigo2);
printf("População: %.0f \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d\n",populacao2, km2, pib2, turistas2);
printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidade2, percapita2);

return 0;
}