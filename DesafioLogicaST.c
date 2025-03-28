#include <stdio.h>

int main(){

    char estado1[3], estado2[3]; // Limitei para 3 caracteres para inserir somente a sigla de cada estado.
    char codigo1[5], codigo2[5]; // Código da carta.
    char nome1[25], nome2[25]; // Nome da cidade.
    unsigned long int populacao1, populacao2; // Numero de habitantes.
    float area1, area2; // area em m².
    float pib1, pib2; // Produto interno bruto.
    float dpop1, dpop2;// Densidade demográfica.
    float ppc1, ppc2; // PIB per capita.
    int pontos1, pontos2; // Quantidade de pontos turisticos.
    
          

    printf ("*** CADASTRE A CARTA 1 *** \n");

    printf ("Estado: \n");
    scanf ("%s", estado1);
    printf ("Codigo da Carta: \n");
    scanf ("%s", codigo1);
    printf ("Nome da Cidade: \n");
    scanf ("%s", nome1);                                 // Cadastrando a primeira carta
    printf ("Número de Habitantes: \n");
    scanf ("%lu", &populacao1);
    printf ("Area da Cidade: \n");
    scanf ("%f", &area1);
    printf ("Valor do PIB: \n");
    scanf ("%f", &pib1);
    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &pontos1);

    dpop1 = (float)populacao1 / area1;                  // calculo para resultado da densidade demográfica.
    ppc1 = (float)pib1 / populacao1;                    // calculo para resultado do pib per capita.

    

    printf (" -- DADOS DA CARTA 1 --\n");         

    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", nome1);                       // Imprimindo os dados da primeira carta na tela 
    printf ("População: %lu\n", populacao1);
    printf ("Area: %.fKM²\n", area1);
    printf ("PIB: R$ %.2f\n", pib1);
    printf ("Densidade Populacional: %.2f hab/KM²\n", dpop1);
    printf ("PIB Per Capita: R$ %.2f\n", ppc1);
    printf ("Quantidade de Pontos Turísticos: %d\n\n", pontos1);

             

    printf ("*** CADASTRE A CARTA 2 *** \n");

    printf ("Estado: \n");
    scanf ("%s", estado2);
    printf ("Codigo da Carta: \n");
    scanf ("%s", codigo2);
    printf ("Nome da Cidade: \n");
    scanf ("%s", nome2);                                      // Cadastrando a segunda carta ///
    printf ("Número de Habitantes: \n");
    scanf ("%lu", &populacao2);
    printf ("Area da Cidade: \n");
    scanf ("%f", &area2);
    printf ("Valor do PIB: \n");
    scanf ("%f", &pib2);
    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &pontos2);
     
    dpop2 = (float)populacao2 / area2;                      // calculo para resultado da densidade demográfica.
    ppc2 = (float)pib2 / populacao2;                        // calculo para resultado do pib per capita.

    
     
    printf ("DADOS DA CARTA 2\n");
     
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", nome2);                          // Imprimindo os dados da segunda carta na tela ///
    printf ("População: %lu\n", populacao2);
    printf ("Area: %.fKM²\n", area2);
    printf ("PIB: R$ %.2f\n", pib2);
    printf ("Densidade Populacional: %.2f hab/KM²\n", dpop2);
    printf ("PIB Per Capita: R$ %.2f\n", ppc2);
    printf ("Quantidade de Pontos Turísticos: %d\n\n", pontos2);


    int menu;
    int atk1, atk2;                         
    int resultado1, resultado2;
    int atributo1, atributo2;                     // Inseridas novas variáveis para criação da logica do jogo.
    float valor1_c1, valor2_c1;
    float valor1_c2, valor2_c2;
    float soma1, soma2;

    printf ("---- BEM VINDO AO JOGO SUPER TRUNFO ---- \n\n");
    printf ("Escolha uma das opções a baixo: \n");

    printf ("1. Iniciar Partida\n");                              
    printf ("2. Informações do Jogo\n");                // Menu Inicial do Jogo.
    printf ("3. Sair do Jogo\n");                      
    scanf ("%d", &menu);

    switch (menu)
    {
    case 1:
        printf (" -- Escolha o Primeiro Atributo --\n");
        printf ("1. População\n");
        printf ("2. Área\n");                 // Menu secundario para inicialização de partida e escolha do primeiro atributo.
        printf ("3. PIB\n");                  // Opções numedaras de 1 a 5 para identificação de cada atributo.
        printf ("4. Pontos Turísticos\n");
        printf ("5. Densidade Demográfica\n");
        scanf ("%d", &atk1);

        switch (atk1)
        {
        case 1:
            printf ("Você Escolheu o atributo: 1 População\n\n");
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            atributo1 = 1;
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf ("Você Escolheu o atributo: 2 Área\n\n");
            valor1_c1 = area1;
            valor1_c2 = area2;
            atributo1 = 2;
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf ("Você Escolheu o atributo: 3 PIB\n\n");
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            atributo1 = 3;
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf ("Você Escolheu o atributo: 4 Pontos Turísticos\n\n");
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            atributo1 = 4;
            resultado1 = pontos1 > pontos2 ? 1 : 0;
            break;
        case 5:
            printf ("Você Escolheu o atributo: 5 Densidade Demográfica\n\n");
            valor1_c1 = dpop1;
            valor1_c2 = dpop2;
            atributo1 = 5;
            resultado1 = dpop1 < dpop2 ? 1 : 0;
            break;
        default:
            printf ("---- Escolha uma Opção Válida ----\n");
            break;
        }

        printf (" -- Escolha o Segundo Atributo --\n");
        printf ("1. População\n");
        printf ("2. Área\n");                       // menu para escolha do segundo atributo.
        printf ("3. PIB\n");                        // numerados de 1 a 5 para identificação.
        printf ("4. Pontos Turísticos\n");
        printf ("5. Densidade Demográfica\n");
        scanf ("%d", &atk2);

        if (atk1 == atk2)
        {
            printf ("ERRO!!!  Escolha um atributo diferente\n");  // verificação para caso de escolha repetida.
        }else
        {
            switch (atk2)
            {
            case 1:
            printf ("Você Escolheu o atributo: 1 População\n\n");
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            atributo2 = 1;
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf ("Você Escolheu o atributo: 2 Área\n\n");
            valor2_c1 = area1;
            valor2_c2 = area2;
            atributo2 = 2;
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf ("Você Escolheu o atributo: 3 PIB\n\n");
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            atributo2 = 3;
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf ("Você Escolheu o atributo: 4 Pontos Turísticos\n\n");
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            atributo2 = 4;
            resultado2 = pontos1 > pontos2 ? 1 : 0;
            break;
        case 5:
            printf ("Você Escolheu o atributo: 5 Densidade Demográfica\n\n");
            valor2_c1 = dpop1;
            valor2_c2 = dpop2;
            atributo2 = 5;
            resultado2 = dpop1 < dpop2 ? 1 : 0;
            break;
        default:
            printf (" ---- Escolha uma Opção Válida ----\n");
            break;
            }

            soma1 = valor1_c1 + valor2_c1; 
            soma2 = valor1_c2 + valor2_c2;

            printf (" >>>>>>>>>>  BATALHA DAS CARTAS  <<<<<<<<<<\n");  // Comparação dos dados e impressão do resultado.
            printf ("Carta 1: %s/%s - %s    VS    Carta 2: %s/%s - %s\n", nome1, estado1, codigo1, nome2, estado2, codigo2);
            printf ("Atributos Escolhidos: %d e %d\n\n", atributo1, atributo2);

            if (resultado1 == 1 && resultado2 == 1)
            {
                printf (" --- RESULTADO DA PARTIDA ---\n\n");
                printf ("Carta 1: %s/%s - %s\n", nome1, estado1, codigo1);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor1_c1, atributo2, valor2_c1);
                printf ("Soma dos Atributos: %.2f\n\n", soma1);

                printf ("Carta 2: %s/%s - %s\n", nome2, estado2, codigo2);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor1_c2, atributo2, valor2_c2);
                printf ("Soma dos Atributos: %.2f\n\n", soma2);

                printf ("****** VITORIA CARTA 1 EM AMBOS ATRIBUTOS ******\n");
            } else if (resultado1 == 0 && resultado2 == 0)
            {
                printf (" --- RESULTADO DA PARTIDA ---\n\n");
                printf ("Carta 1: %s/%s - %s\n", nome1, estado1, codigo1);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor1_c1, atributo2, valor1_c2);
                printf ("Soma dos Atributos: %.2f\n\n", soma1);

                printf ("Carta 2: %s/%s - %s\n", nome2, estado2, codigo2);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor2_c1, atributo2, valor2_c2);
                printf ("Soma dos Atributos: %.2f\n\n", soma2);

                printf ("****** VITORIA CARTA 2 EM AMBOS ATRIBUTOS ******\n\n");
            } else
            {
                printf (" >>>>>>>>>>   HOUVE UM EMPATE   <<<<<<<<<< \n");
                printf ("<<< Desempate realizado pela soma dos atributos >>>\n\n");
                printf (" --- RESULTADO DA PARTIDA ---\n\n");
                printf ("Carta 1: %s/%s - %s\n", nome1, estado1, codigo1);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor1_c1, atributo2, valor2_c1);
                printf ("Soma dos Atributos: %.2f\n\n", soma1);

                printf ("Carta 2: %s/%s - %s\n", nome2, estado2, codigo2);
                printf ("Atributos usados: %d = %.2f & %d = %.2f\n", atributo1, valor1_c2, atributo2, valor2_c2);
                printf ("Soma dos Atributos: %.2f\n\n", soma2);

                if (soma1 > soma2)
                {
                    printf (" ----- VITORIA CARTA 1 NO DESEMPATE -----\n");
                } else if (soma2 > soma1)
                {
                    printf (" ----- VITORIA CARTA 2 NO DESEMPATE -----\n");
                } else 
                {
                    printf ("EMPATE TOTAL!!!!\n");
                }
            }
        }
        break;
    case 2:
        printf ("Este é o Jogo Super Trunfo\n\n");
        break;
    case 3:
        printf ("Saindo do Jogo....\n\n");
        break;
    default:
        printf ("Escolha uma opção valida\n");
        break;
    }

    return 0;
}