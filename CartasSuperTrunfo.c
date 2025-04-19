#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Carta 1
    char codigo1[4] = "A01";
    char nome1[30] = "Ceará";
    int populacao1 = 9187100;        
    float area1 = 148825.60;          // km²
    float pib1 = 156.3;               // bilhões
    int pontos1 = 7;

    // Carta 2
    char codigo2[4] = "B02";
    char nome2[30] = "RioGrandeNorte";
    int populacao2 = 3534165;
    float area2 = 52811.10;
    float pib2 = 72.8;
    int pontos2 = 4;

    // Exibição da Carta 1
    printf("=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
