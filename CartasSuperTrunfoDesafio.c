#include <stdio.h>

int main(){
    printf("Carta 1!\n");
    int populacao, numerodepontosturisticos;
    float area, pib;
    char estado[5], codigo[8], nomedacidade[50];

printf("Qual a População: \n");
scanf("%d", &populacao);

printf("Área: \n");
scanf("%f", &area);

printf("Numero Pontos Turisticos: \n");
scanf("%d", &numerodepontosturisticos);

printf("Estado: \n");
scanf("%s", &estado);

printf("Pib: \n");
scanf("%f", &pib);

printf("Codigo: \n");
scanf("%s", &codigo);

printf("Nome da Cidade: \n");
scanf("%s", &nomedacidade);



printf("nome do populacao: %d - numero de pontos turisticos: %d\n", populacao, numerodepontosturisticos);
printf("area: %f - estado: %s\n", area, estado);
printf("pib: %f - codigo: %s\n", pib, codigo);
printf("nomedacidade: %s\n", nomedacidade);

return 0;




}