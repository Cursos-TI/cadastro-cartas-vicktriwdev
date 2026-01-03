#include <stdio.h>
#include <locale.h>

int main(){
//suporte para acentos
setlocale(LC_ALL, "");

//declaração de variáveis
char cidade1 [20], cidade2 [20];
char estado1 [20], estado2 [20];
char codigo1 [4], codigo2 [4];
unsigned long int populacao1, populacao2;
float km1, km2;
float pib1, pib2;
int turistas1, turistas2;
float densidade1, densidade2;
float percapita1, percapita2;
double superpoder1, superpoder2;
char vencedor[2][10] = {"Carta 2", "Carta 1"};

//entrada de dados da primeira carta
printf("Digite a cidade da carta:  \n");
scanf("%s", cidade1);

printf("Digite o estado da carta:  \n");
scanf("%19s", estado1);

printf("Digite o código da carta usando a inicial do estado e dois números:  \n");
scanf("%3s", codigo1);

printf("Digite a população da cidade:  \n");
scanf("%u", &populacao1);

printf("Digite quantos km tem a cidade:  \n");
scanf("%f", &km1);

printf("Digite o PIB da cidade:  \n");
scanf("%f", &pib1);

printf("Digite quantos pontos turísticos a cidade tem:  \n");
scanf ("%d", &turistas1);
//linha em branco antes da exibição da carta
printf("\n");

//entrada de dados da segunda carta
printf("Digite a cidade da segunda carta:  \n");
scanf("%s", cidade2);

printf("Digite o estado da segunda carta:  \n");
scanf("%19s", estado2);

printf("Digite o código da segunda carta usando a inicial do estado e dois números:  \n");
scanf("%3s", codigo2);

printf("Digite a população da segunda cidade:  \n");
scanf("%u", &populacao2);

printf("Digite quantos km tem a segunda cidade:  \n");
scanf("%f", &km2);

printf("Digite o PIB da segunda cidade:  \n");
scanf("%f", &pib2);

printf("Digite quantos pontos turísticos a segunda cidade tem:  \n");
scanf ("%d", &turistas2);
//linha em branco antes da segunda carta
printf("\n");

//cálculo sobre densidade e per capita
densidade1 = (float) populacao1 / km1;
percapita1 = (float) pib1 / populacao1;
densidade2 = (float) populacao2 / km2;
percapita2 = (float) pib2 / populacao2;

//cálculo para Super Poder
superpoder1 = populacao1 + km1 + pib1 + turistas1 + percapita1 + (1.0 / densidade1);
superpoder2 = populacao2 + km2 + pib2 + turistas2 + percapita2 + (1.0 / densidade2);

//exibição da primeira carta
printf("Carta 1: \nCidade: %s \nEstado: %s \nCódigo: %s \n", cidade1, estado1, codigo1); 
printf("População: %.0u \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d\n",populacao1, km1, pib1, turistas1);
printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2lf", densidade1, percapita1, superpoder1);
printf("\n\n");
//exibição da segunda carta
printf("Carta 2: \nCidade: %s \nEstado: %s \nCódigo: %s \n", cidade2, estado2, codigo2);
printf("População: %.0u \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d\n",populacao2, km2, pib2, turistas2);
printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2lf", densidade2, percapita2, superpoder2);
printf("\n\n");

//comparação final
printf("Resultado da Batalha\n");
printf("População: %s venceu (%d)\n", vencedor[populacao1 > populacao2], (populacao1 > populacao2));
printf("Área (km²): %s venceu (%d)\n", vencedor[km1 > km2], (km1 > km2));
printf("PIB: %s venceu (%d)\n", vencedor[pib1 > pib2], (pib1 > pib2));
printf("Pontos Turísticos: %s venceu (%d)\n", vencedor[turistas1 > turistas2], (turistas1 > turistas2));
printf("Densidade Populacional: %s venceu (%d)\n", vencedor[densidade1 < densidade2], (densidade1 < densidade2));
printf("PIB per Capita: %s venceu (%d)\n", vencedor[percapita1 > percapita2], (percapita1 > percapita2));
printf("Super Poder: %s venceu (%d)\n", vencedor[superpoder1 > superpoder2], (superpoder1 > superpoder2));

return 0;
}