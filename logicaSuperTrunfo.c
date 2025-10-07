#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int opcao, opcao1, opcao2, regras;
    int escolhajogador, escolhapc;

    printf("* Super Trunfo *\n");
    printf("Menu Pricipal\n");
	printf("1. Iniciar Jogo\n");
	printf("2. Ver Regras\n");
	printf("3. Sair\n");
	printf("Escolha Uma Opcao: ");
	scanf("%d", &opcao);

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    switch (opcao){

        case 1:
    
    printf("1.Carta = Recife-Pe(A01)\n");
    printf("2.Carta = Olinda-Pe(A02)\n");
    printf("3.Carta = Camaragibe-Pe(A03)\n");
    printf("4.Carta = Limoeiro-Pe(A04)\n");
    printf("Escolha Uma Carta: ");
    scanf("%d", &opcao2);

    switch (opcao2){

        case 1: 
        printf("vc escolheu Recife\n");
        break;

        case 2:
        printf("vc escolheu Olinda\n");
        break;

        case 3:
        printf("vc escolheu Camaragibe\n");
        break;

        case 4:
        printf("vc escolheu Limoeiro\n");
        break;

        default:
		printf("opcao invalida\n");
		break;
    }

    
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

    printf("* Qual caracteristica vc deseja comparar ?? *\n");
	printf("1. População\n");
	printf("2. Área\n");
	printf("3. Pib\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capta\n");
    printf("7. Super poder\n");
    printf("Escolha Uma Opcao: ");
	scanf("%d", &opcao1);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    switch (opcao1){
        case 1:
        if (populacao > populacao2) {
        pontos1++;
        printf("A primeira carta tem a maior população. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior população. \n");
    }    
    break;

    case 2:
    if (area > area2) {
        pontos1++;
        printf("A primeira carta tem a maior área. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior área. \n");
    }
    break;

    case 3:
    if (pib > pib2) {
        pontos1++;
        printf("A primeira carta tem o maior pib. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem o maior pib. \n");
    }
    break;

    case 4:
    if (npt > npt2) {
        pontos1++;
        printf("A primeira carta tem mais pontos turísticos. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem mais pontos turísticos. \n");
    }
    break;

    case 5:
    if (npt > npt2) {
        pontos1++;
        printf("A primeira carta tem mais pontos turísticos. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem mais pontos turísticos. \n");
    }
    break;

    case 6:
    if (densidade_populacional < densidade_populacional2) {
        pontos1++;
        printf("A primeira carta tem a menor densidade populacional. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem a maior densidade populacional. \n");
    }
    break;

    case 7:
    if (superpoder > superpoder2) {
        pontos1++;
        printf("A primeira carta tem o maior super poder. \n");
    } else { 
        pontos2++;
        printf("A segunda carta tem o maior super poder. \n");
    }
    break;

    default:
		printf("opcao invalida\n");
		break;
}
      
    case 2:
		printf("Explicaçao das Regras !!\n");
		printf("Vc deve escolher uma carta\n");
		printf("Depois vc deve escolher uma das caracteristicas da carta escolhida\n");
        printf("Agora aguarde que a máquina compare a caracteristicas escolhida\n");
        printf("A mesma te dará o resultado\n");
		break;

        case 3:
		printf("saindo do jogo\n");
		break;

        default:
		printf("opcao invalida\n");
		break;
}


    return 0;

}
