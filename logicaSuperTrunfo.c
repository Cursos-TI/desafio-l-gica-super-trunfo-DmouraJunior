#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int opcao, opcao1, regras;
    int escolhajogador, escolhapc;

    printf("* Super Trunfo *\n");
    printf("menu pricipal\n");
	printf("1. Iniciar Jogo\n");
	printf("2. Ver Regras\n");
	printf("3. Sair\n");
	printf("4. Escolha Uma Opcao: ");
	scanf("%d", &opcao);

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    char estado;
    char estado2;
    char codigo[20];
    char codigo2[20];
    char cidade[20];
    char cidade2[20];

    //apartir daqui vão sair as comparações

    int populacao;
    int populacao2;

    float area;
    float area2;

    float pib;
    float pib2;

    int npt;
    int npt2;

    float densidade_populacional;
    float pib_per_capta;

    float densidade_populacional2;
    float pib_per_capta2;

    int pontos1 = 0, pontos2 = 0;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //DADOS DA PRIMEIRA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("digite a população geral: \n");
    scanf("%d", &populacao);

    printf("digite a área total: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt);

    densidade_populacional = (float)(populacao + area) / 2;
    pib_per_capta = (pib + area) / 2;
    float superpoder = (float) (populacao + area + pib + npt + pib_per_capta);

    // DADOS DA SEGUNDA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("digite a população geral: \n");
    scanf("%d", &populacao2);

    printf("digite a área total: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt2);

    densidade_populacional2 = (float)(populacao2 + area2) / 2;
    pib_per_capta2 = (pib2 + area2) / 2;
    float superpoder2 = (float) (populacao2 + area2 + pib2 + npt2 + pib_per_capta2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("Pib Per Capta: %.2f\n", pib_per_capta);
    printf("super poder: %.2f\n", superpoder);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("Pib Per Capta: %.2f\n", pib_per_capta2);
    printf("super poder: %.2f\n", superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // } 
    if (populacao > populacao2) {
        pontos1++;
        printf("A primeira carta tem a maior população. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior população. \n");
    }

    if (area > area2) {
        pontos1++;
        printf("A primeira carta tem a maior área. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior área. \n");
    }

    if (pib > pib2) {
        pontos1++;
        printf("A primeira carta tem o maior pib. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem o maior pib. \n");
    }

    if (npt > npt2) {
        pontos1++;
        printf("A primeira carta tem mais pontos turísticos. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem mais pontos turísticos. \n");
    }

    if (densidade_populacional < densidade_populacional2) {
        pontos1++;
        printf("A primeira carta tem a menor densidade populacional. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior densidade populacional. \n");
    }

    if (superpoder > superpoder2) {
        pontos1++;
        printf("A primeira carta tem o maior super poder. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem o maior super poder. \n");
    }
           
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // Resultado final
    if (pontos1 > pontos2) {
        printf("A primeira carta venceu com %d pontos contra %d.\n", pontos1, pontos2);
    } else if (pontos2 > pontos1) {
        printf("A segunda carta venceu com %d pontos contra %d.\n", pontos2, pontos1);
    } else {
        printf("Empate! As duas cartas ficaram com %d pontos.\n", pontos1);
    }

    return 0;
}
