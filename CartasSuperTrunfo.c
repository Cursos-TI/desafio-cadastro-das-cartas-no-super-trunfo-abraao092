#include <stdio.h>

 //
int main(){
char cidade1[100] = "americana";
char cidade2[100] = "santa barbara d oeste";
char estadoA[100] = "são paulo";

int populacao1 = 246655; // americana
int populacao2 = 189338; // santa barbara do oeste
float area1 = 133.91; // americana
float area2 = 271.03; // santa barbara do oeste
int pontos_turisticos1 = 5; // americana
int pontos_turisticos2 = 7; // santa barbara do oeste
float pib1 = 18.5; // americana
float pib2 = 11.2; // santa barbara do oeste


//ENTRADA DE DADOS DA PRIMEIRA CARTA
printf("PRIMERIA CARTA: %s, %s\n", cidade1, estadoA);

printf("Digite a população da primeira carta:");
scanf("%d", &populacao1);

printf("Digite a Área da primeira carta:");
scanf("%f", &area1);

printf("Digite o numero de pontos turisticos da primeira carta:");
scanf("%d", &pontos_turisticos1);

printf("Digite o PIB da primeira carta:");
scanf("%f", &pib1);

// ENTRADA DE DADOS DA SEGUNDA CARTA 
printf("SEGUNDA CARTA: %s, %s\n", cidade2, estadoA);

printf("Digite a população da segunda carta:");
scanf("%d", &populacao2);

printf("Digite a Área da segunda carta:");
scanf("%f", &area2);
    
printf("Digite o numero de pontos turisticos da segunda carta:");
scanf("%d", &pontos_turisticos1);

printf("Digite o PIB da segunda carta:");
scanf("%f", &pib2);

// DADOS DA PRIMEIRA CARTA
printf("\nDados da primeira carta\n");
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("Pontos turisticos: %d\n", pontos_turisticos1);
printf("PIB: %.2f\n", pib1);

// DADOS DA SEGUNDA CARTA 
printf("\nDados da segunda carta\n");
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("Pontos turisticos: %d\n", pontos_turisticos2);
printf("PIB: %.2f\n", pib2);








return 0;
}
