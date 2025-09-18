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
    int pontos1, pontos2;

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



    // Exibir o resultado da comparação de cartas + comparar as cartas

    printf("\nComparacao de Cartas:\n\n");
    printf("\nSuper poder carta 1: %f", superPoder1);
    printf("\nSuper poder carta 2: %f", superPoder2);

    // Super Poder
    if (superPoder1 > superPoder2)
        printf("\nSuper Poder: Carta 1 venceu!\n");
    else
        printf("\nSuper Poder: Carta 2 venceu!\n");

    return 0;
}