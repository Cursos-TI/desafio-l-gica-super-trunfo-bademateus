#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // ======= DECLARAÇÃO DAS VARIÁVEIS ======
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
  char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
     // ======= ENTRADA DE DADOS - CIDADE 1 =======
     printf("Digite o nome da Cidade 1: ");
      fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população da Cidade 1: ");
    scanf("%d", &populacao1);

     printf("Digite a área da Cidade 1 (em km²): ");
    scanf("%f", &area1);

   printf("Digite o PIB da Cidade 1 (em bilhões): ");
    scanf("%f", &pib1);
    getchar();
    
     // ======= ENTRADA DE DADOS - CIDADE 2 =======

    printf("\nDigite o nome da Cidade 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

        printf("Digite a população da Cidade 2: ");
    scanf("%d", &populacao2);

       printf("Digite a área da Cidade 2 (em km²): ");
    scanf("%f", &area2);

   printf("Digite o PIB da Cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

      printf("\n=== COMPARAÇÃO DE ATRIBUTOS ===\n");

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Comparar População
    if (populacao1 > populacao2)
        printf("População: %s vence!\n", nomeCidade1);
    else if (populacao2 > populacao1)
        printf("População: %s vence!\n", nomeCidade2);
    else
        printf("População: Empate!\n");

    // Comparar Área
     if (area1 > area2)
        printf("Área: %s vence!\n", nomeCidade1);
    else if (area2 > area1)
        printf("Área: %s vence!\n", nomeCidade2);
    else
        printf("Área: Empate!\n");

// Comparar PIB
 if (pib1 > pib2)
        printf("PIB: %s vence!\n", nomeCidade1);
    else if (pib2 > pib1)
        printf("PIB: %s vence!\n", nomeCidade2);
    else
        printf("PIB: Empate!\n");
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
