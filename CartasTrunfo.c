#include <stdio.h>

int main() {
    int populacao;
    int turistas;
    float area;
    double pib;
    char estado[30];
    char cidade[30];
    char sigla[5];
    float densidade;
    float capita;



    printf("JOGO SUPERTRUNFO\n");
    printf("\n");
        // Informações das primeiras cartas
    printf("Digite o valor da população:\n");
    scanf("%d", &populacao);
    printf("População: %d.%03d\n", populacao / 1000, populacao % 1000);
    
    printf("Digite a quantidade de turistas:\n");
    scanf("%d", &turistas);
    printf("Turistas: %d.%03d\n", turistas / 1000, turistas % 1000);

    printf("Digite o valor da area (em km²):\n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);

    printf("Qual o valor do PIB:\n");
    scanf("%lf", &pib);
    printf("PIB: R$ %.2f\n", pib);

    printf("Digite o seu Estado:\n");
    scanf(" %[^\n]s", estado);
    printf("Estado: %s\n", estado);

    printf("Digite a sua Cidade:\n");
    scanf(" %[^\n]s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a SIGLA da sua carta:\n");
    scanf("%s", &sigla);
    printf("Carta: %s\n", sigla);
    printf("\n");

    // Calcular a Densidade Populacional
        densidade = (float)populacao / area;
        printf("Densidade Populacional: %.2f\n", densidade);

         //Calcular o PIB per Capita
        capita = (float)pib / populacao;
        printf("PIB per capita: %.2f\n", capita);
    
        // Informações da segunda carta
    
        printf("\n");
    printf("JOGO SUPERTRUNFO - SEGUNDA CARTA:\n");
    
        printf("\n");

    printf("Digite o valor da população:\n");
    scanf("%d", &populacao);
    printf("População: %d.%03d\n", populacao / 1000, populacao % 1000);
    
    printf("Digite a quantidade de turistas:\n");
    scanf("%d", &turistas);
    printf("Turistas: %d.%03d\n", turistas / 1000, turistas % 1000);

    printf("Digite o valor da area (em km²):\n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);

    printf("Qual o valor do PIB:\n");
    scanf("%lf", &pib);
    printf("PIB: R$ %.2f\n", pib);

    printf("Digite o seu Estado:\n");
    scanf(" %[^\n]s", estado);
    printf("Estado: %s\n", estado);

    printf("Digite a sua Cidade:\n");
    scanf(" %[^\n]s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a SIGLA da sua carta:\n");
    scanf("%s", &sigla);
    printf("Carta: %s\n", sigla);

        // Calcular a Densidade Populacional
        densidade = (float)populacao / area;
        printf("Densidade Populacional: %.2f\n", densidade);

        //Calcular o PIB per Capita
        capita = (float)pib / populacao;
        printf("PIB per capita: %.2f\n", capita);

            return 0;
        }