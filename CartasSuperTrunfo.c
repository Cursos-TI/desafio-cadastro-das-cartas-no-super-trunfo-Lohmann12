#include <stdio.h>

int main() {
    printf("Desafio do jogo Super Trunfo Iniciante\n");

    char estado1[2];
    char estado2[2];

    char codEstado1[5];
    char codEstado2[5];

    char nome1[100];
    char nome2[100];

    int populacao1;
    int populacao2;

    float area1;
    float area2;

    float pib1;
    float pib2;

    printf("Escolha uma letra para seu 1° estado (A-H) \n");
    scanf("%1s", estado1);
    printf("Escolha um código para sua 1° carta (01-04) \n");
    scanf("%4s", codEstado1);
    printf("Qual o nome do seu 1° estado?\n");
    scanf("%99s", nome1);
    printf("Qual a população do seu 1° estado?\n");
    scanf("%d", &populacao1);
    printf("Qual o tamanho do seu 1° estado? (Em km²)\n");
    scanf("%f", &area1);
    printf("Qual o PIB do seu 1° estado?\n");
    scanf("%f", &pib1);

    printf("Escolha uma letra para seu 2° estado (A-H) \n");
    scanf("%1s", estado2);
    printf("Escolha um código para sua 2° carta (01-04) \n");
    scanf("%4s", codEstado2);
    printf("Qual o nome do seu 2° estado?\n");
    scanf("%99s", nome2);
    printf("Qual a população do seu 2° estado?\n");
    scanf("%d", &populacao2);
    printf("Qual o tamanho do seu 2° estado? (Em km²)\n");
    scanf("%f", &area2);
    printf("Qual o PIB do seu 2° estado?\n");
    scanf("%f", &pib2);

    printf("1° carta: %s%s - %s - População: %d - Área: %.2f km² - PIB: R$%.2f\n", estado1, codEstado1, nome1, populacao1, area1, pib1);
    printf("2° carta: %s%s - %s - População: %d - Área: %.2f km² - PIB: R$%.2f\n", estado2, codEstado2, nome2, populacao2, area2, pib2);

    retun = 0;
}