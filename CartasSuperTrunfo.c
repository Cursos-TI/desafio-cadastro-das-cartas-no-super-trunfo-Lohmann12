#include <stdio.h>


int main() {
    printf("Desafio do jogo Super Trunfo Novato\n\n");
    // Com as regras de condição adicionadas.


    char pais1[2] = "A";
    char codPais1[5] = "01";
    char nome1[100] = "Brasil";
    unsigned long int populacao1 = 212000000;
    float area1 = 8510000;
    float pib1 = 2179000000000;
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superTrunfo1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1);

    char pais2[2] = "B";
    char codPais2[5] = "02";
    char nome2[100] = "Argentina";
    unsigned long int populacao2 = 45700000;
    float area2 = 2780000;
    float pib2 = 633300000000;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superTrunfo2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2); 
        // Essa divisão sugerida na aula anterior \
        // dividindo 1 pela densidade populacional, fiz dessa maneira, mas confesso que não compreendi bem se era assim que deveria ser feito.

        int escolhaCarta;
        int escolhaAtributo;

        printf("Escolha uma carta para jogar: \n");
        printf("Carta 1.\n");
        printf("Carta 2.\n");
        scanf("%d", &escolhaCarta);

        switch (escolhaCarta) {
            case 1:
                printf( "Você joga com %s.\n\n" , nome1);
            break;
            case 2:
                printf( "Você joga com %s.\n\n" , nome2);
            break;
            default:
                printf("Nenhuma, porque Você não escolheu uma opção válida, tente novamente.");
            break;
        }

        if (escolhaCarta == 1){
            printf("Escolha um dos atributos para comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - PIB per Capita\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - Super Trunfo\n");
            scanf("%d", &escolhaAtributo);
         switch (escolhaAtributo){
            case 1:
                if(populacao1 > populacao2){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)", populacao1, populacao2);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)", populacao1, populacao2);
                }
            break;
            case 2:
                if(area1 > area2){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)", area1, area2);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)", area1, area2);
                }
            break;
            case 3:
                if(pib1 > pib2){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)", pib1, pib2);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)", pib1, pib2);
                }
            break;
            case 4:
                if (pibPerCapita1 > pibPerCapita2){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)", pibPerCapita1, pibPerCapita2);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)", pibPerCapita1, pibPerCapita2);
                }
            break;
            case 5:
                if(densidadePopulacional1 < densidadePopulacional2){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)", densidadePopulacional1, densidadePopulacional2);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)", densidadePopulacional1, densidadePopulacional2);
                }
            break;
            case 6:
                if(superTrunfo1 > superTrunfo2) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)", superTrunfo1, superTrunfo2);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)", superTrunfo1, superTrunfo2);
                }
            break;
            default:
                printf("Você não escolheu uma opção válida, tente novamente!");
        }
    } else {
            printf("Escolha um dos atributos para comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - PIB per Capita\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - Super Trunfo\n");
            scanf("%d", &escolhaAtributo);
         switch (escolhaAtributo){
            case 1:
                if(populacao2 > populacao1){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)\n", populacao2, populacao1);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)\n", populacao2, populacao1);
                }
            break;
            case 2:
                if(area2 > area1){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", area2, area1);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", area2, area1);
                }
            break;
            case 3:
                if(pib2 > pib1){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pib2, pib1);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pib2, pib1);
                }
            break;
            case 4:
                if (pibPerCapita2 > pibPerCapita1){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pibPerCapita2, pibPerCapita1);
                }
            break;
            case 5:
                if(densidadePopulacional2 < densidadePopulacional1){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                }
            break;
            case 6:
                if(superTrunfo2 > superTrunfo1) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)", superTrunfo1, superTrunfo2);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)", superTrunfo1, superTrunfo2);
                }
            break;
            default:
                printf("Você não escolheu uma opção válida, tente novamente!");
        }
    }

    return 0;
}