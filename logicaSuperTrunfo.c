#include <stdio.h>

int main() {
    // Variáveis para Cidade 1
    char codigo1[20];
    char nome1[50];
    int populacao1;
    float area1, pib1;

    // Variáveis para Cidade 2
    char codigo2[20];
    char nome2[50];
    int populacao2;
    float area2, pib2;

    // Cadastro das Cartas (Cidade 1)
    printf("Digite o codigo da cidade 1:\n ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1:\n ");
    scanf("%s", nome1);
    while (getchar) != '\n');
     
    printf("Digite a populacao da cidade 1:\n ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1:\n ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1:\n ");
    scanf("%f", &pib1);

    // Cadastro das Cartas (Cidade 2)
    printf("\nDigite o codigo da cidade 2:\n ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2:\n ");
    scanf("%s", nome2);

    printf("Digite a populacao da cidade 2:\n ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2:\n ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:\n ");
    scanf("%f", &pib2);

    // Comparação das Cartas
    printf("\n--- Comparacao ---\n");

    if (populacao1 > populacao2) {
        printf("Populacao: %s venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Populacao: %s venceu!\n", nome2);
    } else {
        printf("Populacao: Empate!\n");
    }

    if (area1 > area2) {
        printf("Area: %s venceu!\n", nome1);
    } else if (area2 > area1) {
        printf("Area: %s venceu!\n", nome2);
    } else {
        printf("Area: Empate!\n");
    }

    if (pib1 > pib2) {
        printf("PIB: %s venceu!\n", nome1);
    } else if (pib2 > pib1) {
        printf("PIB: %s venceu!\n", nome2);
    } else {
        printf("PIB: Empate!\n");
    }

    return 0;
}
