#include <stdio.h>


int main() {
    printf("Desafio do jogo Super Trunfo Novato\n\n");
    // Com as regras de condição adicionadas.

    char pais1[2];
    char pais2[2];

    char codPais1[5];
    char codPais2[5];

    char nome1[100];
    char nome2[100];

    unsigned long int populacao1;
    unsigned long int populacao2;

    float area1;
    float area2;

    float pib1;
    float pib2;

    float densidadePopulacional1;
    float densidadePopulacional2;

    float pibPerCapita1;
    float pibPerCapita2;

    float superTrunfo1;
    float superTrunfo2;

    printf("Escolha uma letra para seu 1° País (A-H) \n");
    scanf("%1s", pais1);
    printf("Escolha um código para sua 1° carta (01-04) \n");
    scanf("%4s", codPais1);
    printf("Qual o nome do seu 1° País?\n");
    scanf("%99s", nome1);
    printf("Qual a população do seu 1° País?\n");
    scanf("%lu", &populacao1);
    printf("Qual o tamanho do seu 1° País?\n");
    scanf("%f", &area1);
    printf("Qual o PIB do seu 1° País?\n");
    scanf("%f", &pib1);
        densidadePopulacional1 = populacao1 / area1;
        pibPerCapita1 = pib1 / populacao1;
        superTrunfo1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1);
    printf("A densidade populacional do %s é %.2f habitantes por km².\n", nome1, densidadePopulacional1);
    printf("O PIB per capita do %s é de R$%.2f.\n", nome1, pibPerCapita1);
    printf("O super trunfo da 1° carta é: %.2f\n\n", superTrunfo1);

    printf("Escolha uma letra para seu 2° País (A-H) \n");
    scanf("%1s", pais2);
    printf("Escolha um código para sua 2° carta (01-04) \n");
    scanf("%4s", codPais2);
    printf("Qual o nome do seu 2° País?\n");
    scanf("%99s", nome2);
    printf("Qual a população do seu 2° País?\n");
    scanf("%lu", &populacao2);
    printf("Qual o tamanho do seu 2° País?\n");
    scanf("%f", &area2);
    printf("Qual o PIB do seu 2° País?\n");
    scanf("%f", &pib2);
        densidadePopulacional2 = populacao2 / area2;
        pibPerCapita2 = pib2 / populacao2;
        superTrunfo2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2); // Essa divisão sugerida na aula anterior \
        dividindo 1 pela densidade populacional, fiz dessa maneira, mas confesso que não compreendi bem se era assim que deveria ser feito.
    printf("A densidade populacional do %s é %.2f habitantes por km².\n", nome2, densidadePopulacional2);
    printf("O PIB per capita do %s é de R$%.2f.\n", nome2, pibPerCapita2);
    printf("O super trunfo da 2° carta é: %.2f\n\n", superTrunfo2);

    printf("1° carta: %s%s - %s - População: %lu Milhões - Área: %.2f km² - PIB: R$%.2f \
        - Densidade Populacional: %.2f habitantes por km² - PIB per Capita: R$%.2f - Super Trunfo: %.2f\n", \
        pais1, codPais1, nome1, populacao1, area1, pib1, densidadePopulacional1, pibPerCapita1, superTrunfo1);
        // Descobri como quebrar linhas dentro do código, facilita muito a visualização.
    printf("2° carta: %s%s - %s \
        - População: %lu Milhões \
        - Área: %.2f km² \
        - PIB: R$%.2f \
        - Densidade Populacional: %.2f habitantes por km² \
        - PIB per Capita: R$%.2f \
        - Super Trunfo: %.2f\n\n", \
        pais2, codPais2, nome2, populacao2, area2, pib2, densidadePopulacional2, pibPerCapita2, superTrunfo2);

        if(codPais1 < codPais2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        } // Primeira comparação entre cartas, não é sugerido no exercício, mas eu lembro de quando jogava era um item importante do jogo.
        if(populacao1 > populacao2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }
        if(area1 > area2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }
        if(pib1 > pib2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }
        if(densidadePopulacional1 < densidadePopulacional2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }
        if(pibPerCapita1 > pibPerCapita2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }
        if(superTrunfo1 > superTrunfo2){
            printf("A 1° carta venceu esse duelo\n");
        } else {
            printf("A 2° carta venceu esse duelo\n");
        }

    return 0;
}