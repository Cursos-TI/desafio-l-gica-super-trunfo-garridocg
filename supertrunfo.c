#include <stdio.h>

typedef struct {
    char estado[3];  
    char codigo[10]; 
    char nomeCidade[50]; 
    int populacao; 
    float area; 
    float pib; 
    int numPontosTuristicos; 
} Carta;

float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {

    Carta carta1 = { "SP", "001", "São Paulo", 12300000, 1500.0, 700000, 100 };
    Carta carta2 = { "RJ", "002", "Rio de Janeiro", 6000000, 1200.0, 300000, 70 };

    float densidade1 = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    float densidade2 = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    
    float pibPerCapita1 = calcularPibPerCapita(carta1.pib, carta1.populacao);
    float pibPerCapita2 = calcularPibPerCapita(carta2.pib, carta2.populacao);

    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}