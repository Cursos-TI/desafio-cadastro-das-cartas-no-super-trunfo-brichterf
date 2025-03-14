#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    //declara a variável estado que é representada por um caractere 
    char estado1, estado2;

    //declara as variáveis codigo e cidade que são representadas por uma string  
    char codigo1[10], codigo2[10], cidade1[10], cidade2[10];
    
    //declara as variáveis populacao e pontosturismo que são valores inteiros 
    int populacao1, populacao2, pontosturismo1, pontosturismo2;

    //declara as variáveis area e pib que são valores decimais
    float area1, area2, pib1, pib2;

    // Obtem as informaçoes da carta 1:
    printf("CARTA 1\n");
    printf("Estado: ");
    scanf("%s", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturismo1);

    // Obtem as informaçoes da carta 2:
    printf("CARTA 1\n");
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturismo2);
    return 0;
}
