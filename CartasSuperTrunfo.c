#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    // 
    char estado;

    // 
    char codigo[10], cidade[10];
    
    // 
    int populacao, pontosturismo;
    float area, pib;

    // Obtem as informacoes da carta 1
    printf("CARTA 1\n");
    printf("Estado: ");
    scanf("%s", &estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturismo);

    printf("\e[1;1H\e[2J"); // nao sei o que faz, mas limpa a tela

    printf("oi");

        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
