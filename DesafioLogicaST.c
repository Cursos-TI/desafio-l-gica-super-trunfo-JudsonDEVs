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

    /// Imprimindo os dados da segunda carta na tela ///
     
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


    int escolha; // Adicionei mais uma variável para utilização do switch

    printf ("-/-/-/-/-/ BATALHA DAS CARTAS /-/-/-/-/-\n\n");  /// menu interativo

    printf ("Escolha um mode de batalha: \n");
    printf ("1. Batalha de População\n");
    printf ("2. Batalha de Área\n");
    printf ("3. Batalha de PIB\n");
    printf ("4. Batalha de Pontos Turísticos\n");
    printf ("5. Batalha de Densidade Demografica\n");
    printf ("Você Escolheu: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
    case 1:
        if (populacao1 == populacao2)
        {
            printf ("***EMPATE!!!***\n");
        } else if (populacao1 > populacao2)
        {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: População \n");
            printf ("Carta 1: %lu  vs  Carta 2: %lu\n", populacao1, populacao2);
            printf ("Carta 1 Foi a Vencedora!!!\n");
        } else {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: População \n");
            printf ("Carta 1: %lu  //  Carta 2: %lu\n", populacao1, populacao2);
            printf ("Carta 2 Foi a Vencedora!!!\n");
        }
        break;
    case 2:
        if (area1 == area2)
        {
            printf ("***EMPATE!!!***\n");
        } else if (area1 > area2)
        {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Área \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", area1, area2);
            printf ("Carta 1 Foi a Vencedora!!!\n");
        } else {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Área \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", area1, area2);
            printf ("Carta 2 Foi a Vencedora!!!\n");
        }
        break;
    case 3:
        if (pib1 == pib2)
        {
            printf ("***EMPATE!!!***\n");
        } else if (pib1 > pib2)
        {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: PIB \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", pib1, pib2);
            printf ("Carta 1 Foi a Vencedora!!!\n");
        } else {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: PIB \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", pib1, pib2);
            printf ("Carta 2 Foi a Vencedora!!!\n");
        }
        break;
    case 4:
        if (pontos1 == pontos2)
        {
            printf ("***EMPATE!!!***\n");
        } else if (pontos1 > pontos2)
        {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Número de Pontos Turísticos \n");
            printf ("Carta 1: %d  vs  Carta 2: %d\n", pontos1, pontos2);
            printf ("Carta 1 Foi a Vencedora!!!\n");
        } else {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Número de Pontos Turísticos \n");
            printf ("Carta 1: %d  vs  Carta 2: %d\n", pontos1, pontos2);
            printf ("Carta 2 Foi a Vencedora!!!\n");
        }
        break;
    case 5:
        if (dpop1 == dpop2)
        {
            printf ("***EMPATE!!!***\n");
        } else if (dpop1 < dpop2)
        {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Densidade Demográfica \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", dpop1, dpop2);
            printf ("Carta 1 Foi a Vencedora!!!\n");
        } else {
            printf ("Carta 1 ** %s ** VS Carta 2 ** %s ** \n", nome1, nome2);
            printf ("Atributo de Batalha: Densidade Demográfica \n");
            printf ("Carta 1: %.2f  vs  Carta 2: %.2f\n", dpop1, dpop2);
            printf ("Carta 2 Foi a Vencedora!!!\n");
        }
        break;
    default:
            printf ("Escolha uma Opção Válida\n");
        break;
    }

    return 0;

}