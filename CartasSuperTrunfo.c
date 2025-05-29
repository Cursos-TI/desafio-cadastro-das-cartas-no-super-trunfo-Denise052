#include <stdio.h>

int main() {
   
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 :  \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1:  \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1:  \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²):  \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 :  \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1:  \n");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da segunda carta
    printf("Digite o estado da carta 2 (A-H):  \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 :  \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2:  \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2:  \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²):  \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 :  \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2:  \n");
    scanf("%d", &pontosTuristicos2);

    // Dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // Dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
