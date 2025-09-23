#include <stdio.h>


int main() {
    printf("Desafio do jogo Super Trunfo Mestre.\n\n");


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

        int escolhaCarta;
        int opcao1;
        int opcao2;
        int resultadoFinal;
        int atributo1;
        int atributo2;
        int atributo3;
        int atributo4;
        int somaAtributos1;
        int somaAtributos2;


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
                printf("Você não escolheu uma opção válida, tente novamente.");
            break;
        }

        printf("Escolha um dos atributos para comparar:\n \
            1 - População\n \
            2 - Área\n \
            3 - PIB\n \
            4 - PIB per Capita\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao1);
        if (opcao1 == 1){
        printf("Escolha uma segunda opção para comparar:\n \
            2 - Área\n \
            3 - PIB\n \
            4 - PIB per Capita\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 2){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            3 - PIB\n \
            4 - PIB per Capita\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 3){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            2 - Área\n \
            4 - PIB per Capita\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 4){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            2 - Área\n \
            3 - PIB\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 4){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            2 - Área\n \
            3 - PIB\n \
            5 - Densidade Populacional\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 5){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            2 - Área\n \
            3 - PIB\n \
            4 - PIB per Capita\n \
            6 - Super Trunfo\n");
        scanf("%d", &opcao2);
        } else if (opcao1 == 6){
        printf("Escolha uma segunda opção para comparar:\n \
            1 - População\n \
            2 - Área\n \
            3 - PIB\n \
            4 - PIB per Capita\n \
            5 - Densidade Populacional\n");
        scanf("%d", &opcao2);
        } else {
            printf("Você não escolheu uma opção válida, tente novamente!\n");
        }  
        if(escolhaCarta == 1){
        switch (opcao1) {
            case 1: 
            int atributo1 = populacao1;
            int atributo2 = populacao2;
                if(populacao1 > populacao2){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)\n", populacao1, populacao2);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)\n", populacao1, populacao2);
                }
            break;
            case 2:
            atributo1 = area1;
            atributo2 = area2;
                if(area1 > area2){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", area1, area2);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", area1, area2);
                }
            break;
            case 3:
            atributo1 = pib1;
            atributo2 = pib2;
                if(pib1 > pib2){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pib1, pib2);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pib1, pib2);
                }
            break;
            case 4:
            atributo1 = pibPerCapita1;
            atributo2 = pibPerCapita2;
                if (pibPerCapita1 > pibPerCapita2){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pibPerCapita1, pibPerCapita2);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pibPerCapita1, pibPerCapita2);
                }
            break;
            case 5:
            atributo1 = densidadePopulacional1;
            atributo2 = densidadePopulacional2;
                if((1 / densidadePopulacional1) < (1 / densidadePopulacional2)){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)\n", densidadePopulacional1, densidadePopulacional2);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)\n", densidadePopulacional1, densidadePopulacional2);
                }
            break;
            case 6:
            atributo1 = superTrunfo1;
            atributo2 = superTrunfo2;
                if(superTrunfo1 > superTrunfo2) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)\n", superTrunfo1, superTrunfo2);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)\n", superTrunfo1, superTrunfo2);
                }
            break;
        }
        switch (opcao2) {
            case 1: 
            atributo3 = populacao1;
            atributo4 = populacao2;
                if(populacao1 > populacao2){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)\n", populacao1, populacao2);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)\n", populacao1, populacao2);
                }
            break;
            case 2:
            atributo3 = area1;
            atributo4 = area2;
                if(area1 > area2){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", area1, area2);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", area1, area2);
                }
            break;
            case 3:
            atributo3 = pib1;
            atributo4 = pib2;
                if(pib1 > pib2){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pib1, pib2);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pib1, pib2);
                }
            break;
            case 4:
            atributo3 = pibPerCapita1;
            atributo4 = pibPerCapita2;
                if (pibPerCapita1 > pibPerCapita2){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pibPerCapita1, pibPerCapita2);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pibPerCapita1, pibPerCapita2);
                }
            break;
            case 5:
            atributo3 = densidadePopulacional1;
            atributo4 = densidadePopulacional2;
                if((1 / densidadePopulacional1) < (1 / densidadePopulacional2)){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)\n", densidadePopulacional1, densidadePopulacional2);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)\n", densidadePopulacional1, densidadePopulacional2);
                }
            break;
            case 6:
            atributo3 = superTrunfo1;
            atributo4 = superTrunfo2;
                if(superTrunfo1 > superTrunfo2) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)\n", superTrunfo1, superTrunfo2);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)\n", superTrunfo1, superTrunfo2);
                }
            break;
        } 
        } else if (escolhaCarta == 2){
        switch (opcao1) {
            case 1: 
            int atributo1 = populacao2;
            int atributo2 = populacao1;
                if(populacao2 > populacao1){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)\n", populacao2, populacao1);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)\n", populacao2, populacao1);
                }
            break;
            case 2:
            atributo1 = area2;
            atributo2 = area1;
                if(area2 > area1){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", area2, area1);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", area2, area1);
                }
            break;
            case 3:
            atributo1 = pib2;
            atributo2 = pib1;
                if(pib2 > pib1){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pib2, pib1);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pib2, pib1);
                }
            break;
            case 4:
            atributo1 = pibPerCapita2;
            atributo2 = pibPerCapita1;
                if (pibPerCapita2 > pibPerCapita1){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pibPerCapita2, pibPerCapita1);
                }
            break;
            case 5:
            atributo1 = densidadePopulacional2;
            atributo2 = densidadePopulacional1;
                if((1 / densidadePopulacional2) < (1 / densidadePopulacional1)){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                }
            break;
            case 6:
            atributo1 = superTrunfo2;
            atributo2 = superTrunfo1;
                if(superTrunfo2 > superTrunfo1) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)\n", superTrunfo2, superTrunfo1);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)\n", superTrunfo2, superTrunfo1);
                }
            break;
        }
        switch (opcao2) {
            case 1: 
            atributo3 = populacao2;
            atributo4 = populacao1;
                if(populacao2 > populacao1){
                    printf("Você venceu, a população da sua carta é maior que a do seu oponente! (%lu > %lu)\n", populacao2, populacao1);
                } else { 
                    printf("Você perdeu, a população da carta do seu oponente é maior! (%lu < %lu)\n", populacao2, populacao1);
                }
            break;
            case 2:
            atributo3 = area2;
            atributo4 = area1;
                if(area2 > area1){
                    printf("Você venceu, a área da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", area2, area1);
                } else {
                    printf("Você perdeu, a área da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", area2, area1);
                }
            break;
            case 3:
            atributo3 = pib2;
            atributo4 = pib1;
                if(pib2 > pib1){
                    printf("Você venceu, o PIB da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pib2, pib1);
                } else {
                    printf("Você perdeu, o PIB da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pib2, pib1);
                }
            break;
            case 4:
            atributo3 = pibPerCapita2;
            atributo4 = pibPerCapita1;
                if (pibPerCapita2 > pibPerCapita1){
                    printf("Você venceu, o PIB per Capita da sua carta é maior que a do seu oponente! (%.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
                } else {
                    printf("Você perdeu, o PIB per Capita da carta do seu oponente é maior que a sua! (%.2f < %.2f)\n", pibPerCapita2, pibPerCapita1);
                }
            break;
            case 5:
            atributo3 = densidadePopulacional2;
            atributo4 = densidadePopulacional1;
                if((1 / densidadePopulacional2) < (1 / densidadePopulacional1)){
                    printf("Você venceu, a densidade populacional da sua carta é menor que a do seu oponente! (%.2f < %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                } else {
                    printf("Você perdeu, a densidade populacional da carta do seu oponente é menor que a sua! (%.2f > %.2f)\n", densidadePopulacional2, densidadePopulacional1);
                }
            break;
            case 6:
            atributo3 = superTrunfo2;
            atributo4 = superTrunfo1;
                if(superTrunfo2 > superTrunfo1) {
                    printf("Você venceu, sua carta tem o melhor Super Trunfo! (%.2f > %.2f)\n", superTrunfo2, superTrunfo1);
                } else {
                    printf("Você perdeu, seu oponente tem o melhor Super Trunfo! (%.2f < %.2f)\n", superTrunfo2, superTrunfo1);
                }
            break;
        } 
        }
        somaAtributos1 = atributo1 + atributo3;
        somaAtributos2 = atributo2 + atributo4;
        if (somaAtributos1 > somaAtributos2){
            printf("O vencedor, com %d pontos, é você!\n", somaAtributos1);
        } else if (somaAtributos1 < somaAtributos2) {
            printf("O vencedor, com %d pontos, é seu oponente!\n", somaAtributos2);
        } else if (somaAtributos1 == somaAtributos2) {
            printf("Houve um empate! Suas cartas: %d e as do seu oponente: %d\n", somaAtributos1, somaAtributos2);
        } 
    return 0;
}