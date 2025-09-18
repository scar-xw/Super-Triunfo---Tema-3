#include <stdio.h>
#include <string.h>

int main() {
    printf("\nBEM VINDO(A) AO SUPER TRIUNFO, PREENCHA AS SEGUINTES INFORMACOES:\n");

    // Variáveis para ambas as cartas
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2, escolha;

    // Primeira carta
    printf("Primeira carta:\n");
    printf("Estado (A-H): ");
    fgets(estado1, 50, stdin); estado1[strcspn(estado1, "\n")] = '\0';
    printf("Codigo (ex: A01): ");
    fgets(codigo1, 50, stdin); codigo1[strcspn(codigo1, "\n")] = '\0';
    printf("Cidade: ");
    fgets(cidade1, 50, stdin); cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Populacao: "); scanf("%d", &pop1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turisticos: "); scanf("%d", &pontos1);
    getchar();

    // Segunda carta
    printf("\nSegunda carta:\n");
    printf("Estado (A-H): ");
    fgets(estado2, 50, stdin); estado2[strcspn(estado2, "\n")] = '\0';
    printf("Codigo (ex: A01): ");
    fgets(codigo2, 50, stdin); codigo2[strcspn(codigo2, "\n")] = '\0';
    printf("Cidade: ");
    fgets(cidade2, 50, stdin); cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Populacao: "); scanf("%d", &pop2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turisticos: "); scanf("%d", &pontos2);

    // Calculando a densidade populacional de cada carta
    float densidade1 = pop1 / area1;
    float densidade2 = pop2 / area2;

    // Calculando o PIB per capita de cada carta
    float pibCapita1 = pib1 / pop1;
    float pibCapita2 = pib2 / pop2;

    // Calculando o super poder

    float superPoder1 = pop1 + area1 + pib1 + pibCapita1 - densidade1 + pontos1;
    float superPoder2 = pop2 + area2 + pib2 + pibCapita2 - densidade2 + pontos2;



    // Perguntando ao usuario qual atributo deve ser comparado

    printf("Qual atributo voce deseja usar para a batalha?\n 1 - Populacao\n 2 - Area\n 3 - PIB\n 4 - PIB Per Capita\n 5 - Densidede Populacional\n 6 - Pontos Turisticos\n 7 - Super poder\n "); scanf("%d",&escolha);


    // Exibir o resultado da comparação de cartas + comparar as cartas

    printf("\nComparacao de Cartas:\n\n");

    // População
    if (escolha == 1) {
        printf("Carta 1: %d\n", pop1);
        printf("Carta 2: %d\n", pop2);
        if (pop1 > pop2)
            printf("Populacao: Carta 1 venceu\n");
        else
            printf("Populacao: Carta 2 venceu\n");
    }

    // Área
    if (escolha == 2) {
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);
        if (area1 > area2)
            printf("Area: Carta 1 venceu\n");
        else
            printf("Area: Carta 2 venceu\n");
    }

    // PIB
    if (escolha == 3) {
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        if (pib1 > pib2)
            printf("PIB: Carta 1 venceu \n");
        else
            printf("PIB: Carta 2 venceu \n");
    }

    // PIB per Capita
    if (escolha == 4) {
        printf("Carta 1: %.2f\n", pibCapita1);
        printf("Carta 2: %.2f\n", pibCapita2);
        if (pibCapita1 > pibCapita2)
            printf("PIB per Capita: Carta 1 venceu\n");
        else
            printf("PIB per Capita: Carta 2 venceu \n");
    }


    // Densidade Populacional (menor é melhor)
    if (escolha == 5) {
        printf("Carta 1: %.2f\n", densidade1);
        printf("Carta 2: %.2f\n", densidade2);
        if (densidade1 < densidade2)
            printf("Densidade Populacional: Carta 1 venceu \n");
        else
            printf("Densidade Populacional: Carta 2 venceu \n");
    }


    // Pontos Turísticos
    if (escolha == 6) {
        printf("Carta 1: %d\n", pontos1);
        printf("Carta 2: %d\n", pontos2);
        if (pontos1 > pontos2)
            printf("Pontos Turisticos: Carta 1 venceu\n");
        else
            printf("Pontos Turisticos: Carta 2 venceu \n");
    }

    // Super Poder
    if (escolha == 7) {
        printf("Carta 1: %.2f\n", superPoder1);
        printf("Carta 2: %.2f\n", superPoder2);
        if (superPoder1 > superPoder2)
            printf("Super Poder: Carta 1 venceu \n");
        else
            printf("Super Poder: Carta 2 venceu \n");
    }

    return 0;
}