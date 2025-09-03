#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Declaração de variáveis da primeira carta.
    char estado1;
    char codigo1[5];
    char nomeDaCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Declaração das variáveis da segunda carta.
    char estado2;
    char codigo2[5];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada e saída de dados da primeira carta.
    printf("Cadastro da primeira Carta:\n");
    printf("Digite a inicial do Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da Carta (ex: A100): ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Entrada e saída da segunda carta.

    printf("Cadastro da segunda carta:\n");

    printf("Digite o a inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(ex: B200): ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeDaCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);






    return 0;



    
}
