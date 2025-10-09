#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.






#include <stdio.h>


//Função para calcular a densidade populacional de cada cidade
float densidadePopulacional(int populacao, float area) {
    float densidade;
    densidade = (float) populacao / area;

    return densidade;
}
//Função para calcular o PIB per capita
float pibPerCapita(float pib, int populacao) {
    float pibPerCapita;
    pibPerCapita = (float) pib / populacao;

    return pibPerCapita;
}


int main() {
    //INICIANDO O JOGO
    printf("SEJA BEM VINDO AO SUPER TRUNFO, VAMOS COMEÇAR!!\n");

    //Pegando Informações da primeira carta
    char estado[20];
    char codigo[3];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroPT;
    float superPoderCarta1; 

    printf("VAMOS PREENCHER AS INFORMACOES DA PRIMEIRA CARTA\n");
    printf("Digite o Pais:");
    scanf(" %s", &estado);
    while (getchar() != '\n'); // limpa buffer
    printf("Digite o Codigo da carta(OBS: o codigo deve ser a primeira letra no estado seguida de um numero de 01 a 04(EXEMPLO: A01, A02...)):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade:");
    scanf("%s", &nomeCidade);
    printf("Digite o numero de habitantes:");
    scanf("%i", &populacao);
    printf("Digite a Aréa(em Km):");
    scanf("%f", &area);
    printf("Digite o PIB:");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos:");
    scanf("%i", &numeroPT);

    //Calculando Densidade populacional da carta 1
    float densidadeCarta1 = densidadePopulacional(populacao, area);
    //Calculando PIB per capita da carta 1
    float pibPerCapitaCarta1 = pibPerCapita(pib, populacao);
    //Calculando super poder carta 1
    superPoderCarta1 = (float)populacao + area + pib + numeroPT + pibPerCapitaCarta1;



    //Pegando Informações da segunda carta 
    char estado2[20];
    char codigo2[3];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroPT2;
    float superPoderCarta2;
    
    printf("VAMOS PREENCHER AS INFORMACOES DA SEGUNDA CARTA\n");
    printf("Digite o pais:");
    scanf(" %s", &estado2);
    while (getchar() != '\n'); // limpa buffer
    printf("Digite o Codigo da carta(OBS: o codigo deve ser a primeira letra no estado seguida de um numero de 01 a 04(EXEMPLO: A01, A02...)):");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:");
    scanf("%s", &nomeCidade2);
    printf("Digite o numero de habitantes:");
    scanf("%i", &populacao2);
    printf("Digite a Aréa(em Km):");
    scanf("%f", &area2);
    printf("Digite o PIB:");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:");
    scanf("%i", &numeroPT2);

    //Calculando Densidade populacional da carta 2
    float densidadeCarta2 = densidadePopulacional(populacao2, area2);
    //Calculando PIB per capita da carta 2
    float pibPerCapitaCarta2 = pibPerCapita(pib2, populacao2);
    //Calculando super poder carta 2
    superPoderCarta2 = (float)populacao2 + area2 + pib2 + numeroPT2 + pibPerCapitaCarta2;
    
    /*
    //Informações das duas cartas mostradas no terminal
    printf("MUITO BEM, AS INFORMAÇOES DAS CARTAS SÃO AS SEGUINTES:\n\n");
    //Carta Numero 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %i\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", numeroPT);
    printf("Densidade populacional: %.2f hab/km2\n", densidadeCarta1);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapitaCarta1);
    //Carta Numero 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", numeroPT2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadeCarta2);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapitaCarta2);
    */


    //Comparações
    int atributo1;
    int atributo2;
    int ressultado1;
    int ressultado2;
    char *nomeAtributo1;
    char *nomeAtributo2;
    float Caso1ValorAtributo1;
    float Caso1ValorAtributo2;
    float Caso2ValorAtributo1;
    float Caso2ValorAtributo2;



    //Induzir o usuario a escolher o atributo que quer comparar
    printf("Informe qual atributo das cartas você quer comparar:\n");
    printf("Digite 1 - População\n");
    printf("Digite 2 - Area\n");
    printf("Digite 3 - PIB\n");
    printf("Digite 4 - Numero de pontos turisticos\n");
    printf("Digite 5 - Densidade populacional\n");
    printf("Digite 6 - PIB per capita\n");
    printf("Digite 7 - Super poder\n");
    scanf("%i", &atributo1);

    //Induzir o usuario a escolher o atributo que quer comparar
    printf("Informe qual atributo das cartas você quer comparar:\n");
    printf("Digite 1 - População\n");
    printf("Digite 2 - Area\n");
    printf("Digite 3 - PIB\n");
    printf("Digite 4 - Numero de pontos turisticos\n");
    printf("Digite 5 - Densidade populacional\n");
    printf("Digite 6 - PIB per capita\n");
    printf("Digite 7 - Super poder\n");
    scanf("%i", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você escolheu os mesmos atributos!, tente novamente!\n");
    }
    else {
        //Utilizando switch para determinar qual atributo vai ser usado e condiçoes para ver o vencedor de acordo com o atributo escolhido
        switch (atributo1){
        case 1:
            if (populacao > populacao2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "População";
                Caso1ValorAtributo1 = populacao;
                Caso1ValorAtributo2 = populacao2;

            }
            else if(populacao < populacao2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo2 = "População";
                Caso1ValorAtributo1 = populacao;
                Caso1ValorAtributo2 = populacao2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 2:
            if (area > area2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "Area";
                Caso1ValorAtributo1 = area;
                Caso1ValorAtributo2 = area2;
            }
            else if (area < area2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "Area";
                Caso1ValorAtributo1 = area;
                Caso1ValorAtributo2 = area2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 3:
            if (pib > pib2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "PIB";
                Caso1ValorAtributo1 = pib;
                Caso1ValorAtributo2 = pib2;
            }
            else if (pib < pib2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "PIB";
                Caso1ValorAtributo1 = pib;
                Caso1ValorAtributo2 = pib2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 4:
            if (numeroPT > numeroPT2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "Numero de pontos turisticos";
                Caso1ValorAtributo1 = numeroPT;
                Caso1ValorAtributo2 = numeroPT2;
            }
            else if (numeroPT < numeroPT2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "Numero de pontos turisticos";
                Caso1ValorAtributo1 = numeroPT;
                Caso1ValorAtributo2 = numeroPT2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 5:
            if (densidadeCarta1 < densidadeCarta2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "Densidade";
                Caso1ValorAtributo1 = densidadeCarta1;
                Caso1ValorAtributo2 = densidadeCarta2;
            }
            else if (densidadeCarta1 > densidadeCarta2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "Densidade";
                Caso1ValorAtributo1 = densidadeCarta1;
                Caso1ValorAtributo2 = densidadeCarta2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 6:
            if (pibPerCapitaCarta1 > pibPerCapitaCarta2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "PIB per capita";
                Caso1ValorAtributo1 = pibPerCapitaCarta1;
                Caso1ValorAtributo2 = pibPerCapitaCarta2;
            }
            else if (pibPerCapitaCarta1 < pibPerCapitaCarta2) { //caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "PIB per capita";
                Caso1ValorAtributo1 = pibPerCapitaCarta1;
                Caso1ValorAtributo2 = pibPerCapitaCarta2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        case 7:
            if (superPoderCarta1 > superPoderCarta2) { //Caso 1: carta 1 vence.
                ressultado1 = 1;
                nomeAtributo1 = "SUPER PODER";
                Caso1ValorAtributo1 = superPoderCarta1;
                Caso1ValorAtributo2 = superPoderCarta2;
            }
            else if (superPoderCarta1 < superPoderCarta2) { //Caso 2: carta 2 vence.
                ressultado1 = 0;
                nomeAtributo1 = "SUPER PODER";
                Caso1ValorAtributo1 = superPoderCarta1;
                Caso1ValorAtributo2 = superPoderCarta2;
            }
            else { //caso 3: Empate.
                printf("Empate!\n"); 
            }
            break;
        default:
            break;
        }





        switch (atributo2){
            case 1:
                if (populacao > populacao2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "População";
                    Caso2ValorAtributo1 = populacao;
                    Caso2ValorAtributo2 = populacao2;
    
                }
                else if(populacao < populacao2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "População";
                    Caso2ValorAtributo1 = populacao;
                    Caso2ValorAtributo2 = populacao2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 2:
                if (area > area2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "Area";
                    Caso2ValorAtributo1 = area;
                    Caso2ValorAtributo2 = area2;
                }
                else if (area < area2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "Area";
                    Caso2ValorAtributo1 = area;
                    Caso2ValorAtributo2 = area2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 3:
                if (pib > pib2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "PIB";
                    Caso2ValorAtributo1 = pib;
                    Caso2ValorAtributo2 = pib2;
                }
                else if (pib < pib2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    Caso2ValorAtributo1 = pib;
                    Caso2ValorAtributo2 = pib2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 4:
                if (numeroPT > numeroPT2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "Numeros de pontos turisticos";
                    Caso2ValorAtributo1 = numeroPT;
                    Caso2ValorAtributo2 = numeroPT2;
                }
                else if (numeroPT < numeroPT2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "Numeros de pontos turisticos";
                    Caso2ValorAtributo1 = numeroPT;
                    Caso2ValorAtributo2 = numeroPT2;;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 5:
                if (densidadeCarta1 < densidadeCarta2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "Densidade";
                    Caso2ValorAtributo1 = densidadeCarta1;
                    Caso2ValorAtributo2 = densidadeCarta2;
                }
                else if (densidadeCarta1 > densidadeCarta2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "Densidade";
                    Caso2ValorAtributo1 = densidadeCarta1;
                    Caso2ValorAtributo2 = densidadeCarta2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 6:
                if (pibPerCapitaCarta1 > pibPerCapitaCarta2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "PIB per capita";
                    Caso2ValorAtributo1 = pibPerCapitaCarta1;
                    Caso2ValorAtributo2 = pibPerCapitaCarta2;
                }
                else if (pibPerCapitaCarta1 < pibPerCapitaCarta2) { //caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "PIB per capita";
                    Caso2ValorAtributo1 = pibPerCapitaCarta1;
                    Caso2ValorAtributo2 = pibPerCapitaCarta2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            case 7:
                if (superPoderCarta1 > superPoderCarta2) { //Caso 1: carta 1 vence.
                    ressultado2 = 1;
                    nomeAtributo2 = "SUPER PODER";
                    Caso2ValorAtributo1 = superPoderCarta1;
                    Caso2ValorAtributo2 = superPoderCarta2;
                }
                else if (superPoderCarta1 < superPoderCarta2) { //Caso 2: carta 2 vence.
                    ressultado2 = 0;
                    nomeAtributo2 = "SUPER PODER";
                    Caso2ValorAtributo1 = superPoderCarta1;
                    Caso2ValorAtributo2 = superPoderCarta2;
                }
                else { //caso 3: Empate.
                    printf("Empate!\n"); 
                }
                break;
            default:
                break;
            }
            //Resultado do duelo 
            printf("Resultado do duelo:\n");
            printf("PAISES: %s, %s\n", estado, estado2);
            printf("ATRIBUTOS 1 e 2: %s, %s\n", nomeAtributo1, nomeAtributo2);
            printf("Valores dos Atributos 1: %d, %d Valores dos Atributos 2: %d, %d\n", Caso1ValorAtributo1, Caso1ValorAtributo2, Caso2ValorAtributo1, Caso2ValorAtributo2);
            float soma1 = Caso1ValorAtributo1 + Caso2ValorAtributo1;
            float soma2 = Caso1ValorAtributo2 + Caso2ValorAtributo2;
            printf("Soma dos atributos são: %f e  %f\n", soma1, soma2);
            soma1 > soma2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");

    }

}