#include <stdio.h>

int main() {

    /*VARIAVEIS - Estado 1*/

    char estado;
    char codigo_carta[3];
    char cidade[20];
    int habitantes;
    float area;
    float pib;
    int turistico;
    float habitantes;
    float percap;

    /*VARIAVEIS - Estado 2*/

    char estado2;
    char codigo_carta2[3];
    char cidade2[20];
    int habitantes2;
    float area2;
    float pib2;
    int turistico2;

    /*ENTRADA E LEITURA*/
    /*CARTA 1*/

    printf("---[Cadastrando | Carta 1]\n");

    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&estado); 

    printf("Código da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta);

    printf("Nome da Cidade:\n");
    scanf(" %s", &cidade);

    printf("O número de Habitantes:\n");
    scanf("%d", &habitantes);

    printf("A área da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area);

    printf("O PIB da cidade:\n");
    scanf("%f",&pib);

    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &turistico);

    /*CARTA 2*/

    printf("---[Cadastrando | Carta 2]\n");

    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&estado2);

    printf("Código da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta2);

    printf("Nome da Cidade:\n");
    scanf(" %s", &cidade2);

    printf("O número de Habitantes:\n");
    scanf("%d", &habitantes2);

    printf("A área da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area2);

    printf("O PIB da cidade:\n");
    scanf("%f",&pib2);

    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &turistico2);

    /*SAIDA DE DADOS - USUARIO*/
    /*CARTA 1 - Primeira impressão*/

    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", habitantes);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);

    /*CARTA 2 - Segunda impressão*/

    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", habitantes2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);

    return 0;

}