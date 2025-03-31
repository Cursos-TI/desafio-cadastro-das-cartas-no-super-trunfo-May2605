#include <stdio.h>

int main(){
    int populacao, numerodepontosturisticos;
    float area, pib;
    char estado[8], codigodacarta[A01, B02, C03], nomedacidade [50];

printf("qual a população: \n");
scanf("%d", &populacao);

printf("digite a Área: \n");
scanf("%f", &area);

printf("digite o estado: \n");
scanf("%s", &estado);

printf("quantos pontos turisticos \n");
scanf("%d", &pontosturisticos);

printf("nome do populacao: %d - pontosturisticos: %d", populacao, pontosturisticos);
printf("area: %f - estado: %s", area, estado);

return 0;

}