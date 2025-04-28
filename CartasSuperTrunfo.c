#include <stdio.h>

int main() {
   
    int codigo1, codigo2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;


    printf("Carta 1:\n");
    printf("Digite o código da cidade:\n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", nome1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    

    printf("Carta 2:\n");
    printf("Digite o código da cidade:\n");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", nome2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\nDados da Cidade 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);


    printf("\nDados da Cidade 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
