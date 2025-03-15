#include <stdio.h>

int main(){

    char estado1[25], estado2[25]; // Nome do estado.
    char codigo1[5], codigo2[5]; // Código da carta.
    char nome1[25], nome2[25]; // Nome da cidade.
    unsigned long int populacao1, populacao2; // Numero de habitantes.
    float area1, area2; // area em m².
    float pib1, pib2; // Produto interno bruto.
    float dpop1, dpop2;// Densidade populacional.
    float ppc1, ppc2; // PIB per capita.
    int pontos1, pontos2; // Quantidade de pontos turisticos.
    
          /// Cadastrando a primeira carta ///

    printf ("*** CADASTRE A CARTA 1 *** \n");

    printf ("Estado: \n");
    scanf ("%s", estado1);
    printf ("Codigo da Carta: \n");
    scanf ("%s", codigo1);
    printf ("Nome da Cidade: \n");
    scanf ("%s", nome1);
    printf ("Número de Habitantes: \n");
    scanf ("%lu", &populacao1);
    printf ("Area da Cidade: \n");
    scanf ("%f", &area1);
    printf ("Valor do PIB: \n");
    scanf ("%f", &pib1);
    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &pontos1);

    dpop1 = (float)(populacao1 / area1); // calculo para resultado da densidade populacional.
    ppc1 = (float)(pib1 / populacao1); // calculo para resultado do pib per capita.

    /// Imprimindo os dados da primeira carta na tela ///

    printf ("DADOS DA CARTA 1\n");

    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", nome1);
    printf ("População: %lu\n", populacao1);
    printf ("Area: %.fKM²\n", area1);
    printf ("PIB: R$ %.2f\n", pib1);
    printf ("Densidade Populacional: %.2f hab/KM²\n", dpop1);
    printf ("PIB Per Capita: R$ %.2f\n", ppc1);
    printf ("Quantidade de Pontos Turísticos: %d\n", pontos1);

             /// Cadastrando a segunda carta ///

    printf ("*** CADASTRE A CARTA 2 *** \n");

    printf ("Estado: \n");
    scanf ("%s", estado2);
    printf ("Codigo da Carta: \n");
    scanf ("%s", codigo2);
    printf ("Nome da Cidade: \n");
    scanf ("%s", nome2);
    printf ("Número de Habitantes: \n");
    scanf ("%lu", &populacao2);
    printf ("Area da Cidade: \n");
    scanf ("%f", &area2);
    printf ("Valor do PIB: \n");
    scanf ("%f", &pib2);
    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &pontos2);
     
    dpop2 = (float)(populacao2 / area2); // calculo para resultado da densidade populacional.
    ppc2 = (float)(pib2 / populacao2); // calculo para resultado do pib per capita.
     
    printf ("DADOS DA CARTA 2\n");
     
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", nome2);
    printf ("População: %lu\n", populacao2);
    printf ("Area: %.fKM²\n", area2);
    printf ("PIB: R$ %.2f\n", pib2);
    printf ("Densidade Populacional: %.2f hab/KM²\n", dpop2);
    printf ("PIB Per Capita: R$ %.2f\n", ppc2);
    printf ("Quantidade de Pontos Turísticos: %d\n\n", pontos2);


    printf ("-/-/-/-/-/ BATALHA DAS CARTAS /-/-/-/-/-\n\n");

    if (ppc1 > ppc2){
        printf ("Carta 1 - %s - PIB Per Capita: R$ %.2f\n", nome1, ppc1);
        printf ("Carta 2 - %s - PIB Per Capita: R$ %.2f\n", nome2, ppc2);
        printf ("Carta 1 Venceu!!!\n");
    } else{
        printf ("Carta 1 - %s: PIB Per Capita: R$ %.2f\n", nome1, ppc1);
        printf ("Carta 2 - %s: PIB Per Capita: R$ %.2f\n", nome2, ppc2);
        printf ("Carta 2 Venceu!!!\n");
    }
    

    return 0;

}