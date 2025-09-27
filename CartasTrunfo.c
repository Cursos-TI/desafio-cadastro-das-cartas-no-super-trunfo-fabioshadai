#include <stdio.h>

// Função para obter valor do atributo
float valorAtributo(char tipo, int pop, float area, float dens, float pibcap, int tur) {
    switch (tipo) {
        case 'P': case 'p': return pop;
        case 'A': case 'a': return area;
        case 'D': case 'd': return dens;
        case 'I': case 'i': return pibcap;
        case 'T': case 't': return tur;
        default: return -1;
    }
}

// Função para imprimir nome do atributo
void nomeAtributo(char tipo) {
    switch (tipo) {
        case 'P': case 'p': printf("População"); break;
        case 'A': case 'a': printf("Área"); break;
        case 'D': case 'd': printf("Densidade Demográfica"); break;
        case 'I': case 'i': printf("PIB per capita"); break;
        case 'T': case 't': printf("Número de Turistas"); break;
        default: printf("Atributo inválido"); break;
    }
}

int main () {

    // Variáveis da carta 1
    int populacao1 = 7200;
    int turistas1 = 1000;
    float area1 = 1000000;
    char cidade1[] = "Biguacu";
    float pib1 = 230000.0;
    float densidade1, pibcapita1;

    // Variáveis da carta 2
    int populacao2 = 5200;
    int turistas2 = 500;
    float area2 = 900000;
    char cidade2[] = "Florianopolis";
    float pib2 = 221000.0;
    float densidade2, pibcapita2;

    // Calculando atributos derivados
    densidade1 = (float)populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibcapita2 = pib2 / populacao2;

    char tipoComparacao1, tipoComparacao2;

    printf("Bem-Vindo ao jogo de cartas!\n");
    printf("Você deve escolher dois tipos de comparação diferentes entre as cartas.\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("D. Densidade Demográfica\n");
    printf("I. PIB per capita\n");
    printf("T. Número de Turistas\n");

    // Leitura do primeiro atributo
    printf("Escolha a primeira comparação: ");
    scanf(" %c", &tipoComparacao1);

    // Leitura do segundo atributo, garantindo que seja diferente do primeiro
    do {
        printf("Escolha a segunda comparação (diferente da primeira): ");
        scanf(" %c", &tipoComparacao2);
        if (tipoComparacao2 == tipoComparacao1) {
            printf("As comparações não podem ser iguais. Tente novamente.\n");
        }
    } while (tipoComparacao2 == tipoComparacao1);

    // Obter valores dos atributos para cada carta
    float valor1_c1 = valorAtributo(tipoComparacao1, populacao1, area1, densidade1, pibcapita1, turistas1);
    float valor1_c2 = valorAtributo(tipoComparacao1, populacao2, area2, densidade2, pibcapita2, turistas2);
    float valor2_c1 = valorAtributo(tipoComparacao2, populacao1, area1, densidade1, pibcapita1, turistas1);
    float valor2_c2 = valorAtributo(tipoComparacao2, populacao2, area2, densidade2, pibcapita2, turistas2);

    printf("\nComparação dos atributos:\n");

    // Comparação do primeiro atributo
    nomeAtributo(tipoComparacao1);
    printf(": %s = %.2f | %s = %.2f\n", cidade1, valor1_c1, cidade2, valor1_c2);
    printf("Resultado: ");
    if (tipoComparacao1 == 'D' || tipoComparacao1 == 'd') {
        if (valor1_c1 < valor1_c2)
            printf("%s venceu!\n", cidade1);
        else if (valor1_c2 < valor1_c1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    } else {
        if (valor1_c1 > valor1_c2)
            printf("%s venceu!\n", cidade1);
        else if (valor1_c2 > valor1_c1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }

    // Comparação do segundo atributo
    nomeAtributo(tipoComparacao2);
    printf(": %s = %.2f | %s = %.2f\n", cidade1, valor2_c1, cidade2, valor2_c2);
    printf("Resultado: ");
    if (tipoComparacao2 == 'D' || tipoComparacao2 == 'd') {
        if (valor2_c1 < valor2_c2)
            printf("%s venceu!\n", cidade1);
        else if (valor2_c2 < valor2_c1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    } else {
        if (valor2_c1 > valor2_c2)
            printf("%s venceu!\n", cidade1);
        else if (valor2_c2 > valor2_c1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }

    // Soma dos atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    printf("Resultado final: ");
    if (soma1 > soma2)
        printf("%s venceu a rodada!\n", cidade1);
    else if (soma2 > soma1)
        printf("%s venceu a rodada!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}