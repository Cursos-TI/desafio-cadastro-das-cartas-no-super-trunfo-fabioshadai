#include <stdio.h>

int main() {
    // Variáveis da carta 1
        int populacao1, turistas1;
        float area1;
        double pib1;
        char estado1[30], cidade1[30], sigla1[5];
        float densidade1, capita1, superPoder1;

    // Variáveis da carta 2
        int populacao2, turistas2;
        float area2;
        double pib2;
        char estado2[30], cidade2[30], sigla2[5];
        float densidade2, capita2, superPoder2;

    // ---- Entrada da carta 1 ----
        printf("CARTA 1:\n");
        printf("Digite o valor da população:\n");
        scanf("%d", &populacao1);
        printf("População: %d.%03d\n", populacao1 / 1000, populacao1 % 1000);

        printf("Digite a quantidade de turistas:\n");
        scanf("%d", &turistas1);
        printf("Turistas: %d.%03d\n", turistas1 / 1000, turistas1 % 1000);

        printf("Digite o valor da área (em km²):\n");
        scanf("%f", &area1);
        printf("Área: %.2f km²\n", area1);

        printf("Digite o valor do PIB:\n");
        scanf("%lf", &pib1);
        printf("PIB: R$ %.2f\n", pib1);

        printf("Digite o Estado:\n");
        scanf(" %[^\n]s", estado1);
        printf("Estado: %s\n", estado1);

        printf("Digite a Cidade:\n");
        scanf(" %[^\n]s", cidade1);
        printf("Cidade: %s\n", cidade1);

         printf("Digite a SIGLA da carta:\n");
         scanf("%s", sigla1);
        printf("Carta: %s\n", sigla1);

        densidade1 = (float)populacao1 / area1;
         capita1 = pib1 / populacao1;
        superPoder1 = populacao1 + area1 + pib1 + turistas1 + capita1 + (1 / densidade1);

        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per capita: %.2f\n", capita1);
        printf("Super Poder: %.2f\n\n", superPoder1);


    // ---- Entrada da carta 2 ----
        printf("\nCARTA 2:\n");
        printf("Digite o valor da população:\n");
        scanf("%d", &populacao2);
        printf("População: %d.%03d\n", populacao2 / 1000, populacao2 % 1000);

        printf("Digite a quantidade de turistas:\n");
        scanf("%d", &turistas2);
        printf("Turistas: %d.%03d\n", turistas2 / 1000, turistas2 % 1000);

        printf("Digite o valor da área (em km²):\n");
        scanf("%f", &area2);
        printf("Área: %.2f km²\n", area2);

        printf("Digite o valor do PIB:\n");
        scanf("%lf", &pib2);
        printf("PIB: R$ %.2f\n", pib2);

        printf("Digite o Estado:\n");
        scanf(" %[^\n]s", estado2);
        printf("Estado: %s\n", estado2);

        printf("Digite a Cidade:\n");
        scanf(" %[^\n]s", cidade2);
        printf("Cidade: %s\n", cidade2);

        printf("Digite a SIGLA da carta:\n");
        scanf("%s", sigla2);
        printf("Carta: %s\n", sigla2);

        densidade2 = (float)populacao2 / area2;
        capita2 = pib2 / populacao2;
        superPoder2 = populacao2 + area2 + pib2 + turistas2 + capita2 + (1 / densidade2);

        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per capita: %.2f\n", capita2);
        printf("Super Poder: %.2f\n\n", superPoder2);


    // ---- Comparações ----
        int pontos1 = 0, pontos2 = 0;

        populacao1 > populacao2 ? pontos1++ : (populacao2 > populacao1 ? pontos2++ : 0);
        turistas1 > turistas2 ? pontos1++ : (turistas2 > turistas1 ? pontos2++ : 0);
        area1 > area2 ? pontos1++ : (area2 > area1 ? pontos2++ : 0);  // MAIOR área vence
        pib1 > pib2 ? pontos1++ : (pib2 > pib1 ? pontos2++ : 0);
        densidade1 < densidade2 ? pontos1++ : (densidade2 < densidade1 ? pontos2++ : 0); // MENOR densidade vence
        capita1 > capita2 ? pontos1++ : (capita2 > capita1 ? pontos2++ : 0);
        superPoder1 > superPoder2 ? pontos1++ : (superPoder2 > superPoder1 ? pontos2++ : 0);

    // ---- Resultado ----
        printf("\n--- RESULTADO FINAL ---\n");
        pontos1 > pontos2 ? printf("A carta vencedora é: %s\n", sigla1) : 0;
        pontos2 > pontos1 ? printf("A carta vencedora é: %s\n", sigla2) : 0;
    
            return 0;
}
