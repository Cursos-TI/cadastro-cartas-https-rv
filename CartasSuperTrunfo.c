#include <stdio.h>

int main() {

    /*VARIAVEIS - Estado 1*/
    // o projeto padrão fala de população, porem a variavel adicionada foi habitantes

    char estado;
    char codigo_carta[3];
    char cidade[20];
    int habitantes;
    float area;
    float pib;
    int turistico;
    float densidade;
    float percap;
    float superpoder; // faz parte da ultima parte da disciplina, mestre

    /*VARIAVEIS - Estado 2*/

    char estado2;
    char codigo_carta2[3];
    char cidade2[20];
    int habitantes2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float percap2;
    float superpoder2;


    /*ENTRADA E LEITURA*/
    /*CARTA 1*/

    printf("*** SUPER TRUNFO ***\n");

    printf("---[Cadastrando | Primeira carta]\n");

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

    // calculo de densidade e percapta

    densidade = habitantes/area;
    percap = pib/habitantes;

    // calculo de poder

    superpoder = (float) habitantes + area + pib + (float)turistico + percap + (1.0/densidade);



    /*CARTA 2*/

    printf("---[Cadastrando | Segunda carta]\n");

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

    // calculo de densidade e percapta da segunda carta

    densidade2 = habitantes2/area2;
    percap2 = pib2/habitantes2;

    
    // calculo de poder da segunda carta

    superpoder = (float) habitantes2 + area2 + pib2 + (float)turistico2 + percap2 + (1.0/densidade2);


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
    printf("A densidade é de: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$%.2f\n", percap);
    printf("Superpoder: %.2\n", superpoder);


    /*CARTA 2 - Segunda impressão*/

    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", habitantes2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("A densidade é de: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$%.2f\n", percap2);
    printf("Superpoder: %.2\n", superpoder2);

    //Comparação para Resultados
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", habitantes > habitantes2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib, pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistico> turistico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percap > percap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superpoder2);


    return 0;

}