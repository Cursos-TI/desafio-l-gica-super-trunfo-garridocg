#include <stdio.h>

int main() {
    char Carta[3];
    char Estado[3]; 
    char Codigo[4]; 
    char Cidade[20]; 
    int Populacao; 
    float Area;  
    float PIB; 
    int Pontosturisticos;

    printf("Carta: \n");
    scanf("%s", Carta);
    
    printf("Digite o nome do estado:\n");
    scanf("%s", Estado); 

    printf("Digite o codigo da carta:\n");
    scanf("%s", Codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", Cidade); 

    printf("População:\n");
    scanf("%d", &Populacao); 

    printf("Digite a Área:\n");
    scanf("%f", &Area); 

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);  
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &Pontosturisticos); 

    printf("Carta: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n",
           Carta, Estado, Codigo, Cidade, Populacao, Area, PIB, Pontosturisticos);
           int

}
