#include <stdio.h>


int main() {
    

   printf ("Desafio super trunfo Basico \n");
   
   int pontosturisticos;
   float populacao, area, PIB;
   char codigodacidade[50];
   char nome[100];

   printf("Digite o Codigo da Cidade: \n");
   scanf("%s", &codigodacidade);

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &nome),

   printf("Insira a Populacão da Cidade: \n");
   scanf("%f", &populacao);

   printf("Digite a Àrea: \n");
   scanf("%f", &area);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Pontos Turisticos: \n");
   scanf("%d", &pontosturisticos);

   printf("Nome da Cidade: %s \n", nome);
   printf("Codigo da Cidade: %s \n", codigodacidade);
   printf("População: %f \n", populacao);
   printf("Área: %f \n", area);
   printf("PIB: %f \n", PIB),
   printf("Pontos Turisticos: %d \n", pontosturisticos);



    return 0;
}
