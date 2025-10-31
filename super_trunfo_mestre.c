#include <stdio.h>

int main() {
    // Variáveis dos dados da Carta 1
    char estado[3], codigo[30], cidade[40];
    unsigned long int populacao, turistico;
    float pib, area;

    // Variáveis dos dados da Carta 2
    char estado2[3], codigo2[30], cidade2[40];
    unsigned long int populacao2, turisCEtico2;
    float pib2, area2;

    // Solicita dados para carta 1
    printf(">>> Dados da Carta nº 1 <<<\n");
    printf("Insira a sigla do Estado (ex: SP): ");
    scanf("%s", estado);

    printf("Insira o código da carta (apenas numeros): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade); // permite espaçamento das palavras

    printf("Insira o numero de habitantes: ");
    scanf("%lu", &populacao);

    printf("Quantos Km² tem a cidade? ");
    scanf("%f", &area);

    printf("Qual PIB da cidade (em bilhões)? ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%lu", &turistico);

    // Solicita os dados para carta 2
    printf("\n>>> Dados da Carta nº 2 <<<\n");
    printf("Insira a sigla do Estado (ex: CE): ");
    scanf("%s", estado2);

    printf("Insira o código da carta (apenas numeros): ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade2); 

    printf("Insira o numero de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Quantos Km² tem a cidade? ");
    scanf("%f", &area2);

    printf("Qual PIB da cidade (em bilhões)? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%lu", &turistico2);

    // >>>>>>> variáveis de cálculo <<<<<<
    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;

    // >>>>>>>> Menu de comparação <<<<<<
    int opcao1, opcao2;
    int entradaValida = 0;

    printf("\n>>> Comparação entre as Cartas <<<\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

    // Escolha 1
    do {
        printf("Escolha o PRIMEIRO atributo: ");
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 5)
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
    } while (opcao1 < 1 || opcao1 > 5);

    // Escolha 2
    do {
        printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("Você já escolheu esse atributo. Escolha outro!\n");
        else if (opcao2 < 1 || opcao2 > 5)
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
    } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5);

    // Função auxiliar de comparação
    float v1_a1 = 0, v2_a1 = 0; // valores do atributo 1
    float v1_a2 = 0, v2_a2 = 0; // valores do atributo 2
    float soma1 = 0, soma2 = 0;
    char atributo1[50], atributo2[50];
    int vencedor1 = 0, vencedor2 = 0;

    // >>>>> primeira comparaçã oentre atributos <<<<<
    switch (opcao1) {
        case 1:
            v1_a1 = populacao;
            v2_a1 = populacao2;
            sprintf(atributo1, "População");
            vencedor1 = (v1_a1 > v2_a1) ? 1 : (v2_a1 > v1_a1 ? 2 : 0);
            break;
        case 2:
            v1_a1 = area;
            v2_a1 = area2;
            sprintf(atributo1, "Área");
            vencedor1 = (v1_a1 > v2_a1) ? 1 : (v2_a1 > v1_a1 ? 2 : 0);
            break;
        case 3:
            v1_a1 = pib;
            v2_a1 = pib2;
            sprintf(atributo1, "PIB");
            vencedor1 = (v1_a1 > v2_a1) ? 1 : (v2_a1 > v1_a1 ? 2 : 0);
            break;
        case 4:
            v1_a1 = turistico;
            v2_a1 = turistico2;
            sprintf(atributo1, "Pontos turísticos");
            vencedor1 = (v1_a1 > v2_a1) ? 1 : (v2_a1 > v1_a1 ? 2 : 0);
            break;
        case 5:
            v1_a1 = densidade1;
            v2_a1 = densidade2;
            sprintf(atributo1, "Densidade demográfica");
            vencedor1 = (v1_a1 < v2_a1) ? 1 : (v2_a1 < v1_a1 ? 2 : 0);
            break;
        default:
            printf("Erro interno: opção inválida na comparação 1.\n");
            return 1;
    }

    // >>>>> segunda comparação entre atributos <<<<<<
    switch (opcao2) {
        case 1:
            v1_a2 = populacao;
            v2_a2 = populacao2;
            sprintf(atributo2, "População");
            vencedor2 = (v1_a2 > v2_a2) ? 1 : (v2_a2 > v1_a2 ? 2 : 0);
            break;
        case 2:
            v1_a2 = area;
            v2_a2 = area2;
            sprintf(atributo2, "Área");
            vencedor2 = (v1_a2 > v2_a2) ? 1 : (v2_a2 > v1_a2 ? 2 : 0);
            break;
        case 3:
            v1_a2 = pib;
            v2_a2 = pib2;
            sprintf(atributo2, "PIB");
            vencedor2 = (v1_a2 > v2_a2) ? 1 : (v2_a2 > v1_a2 ? 2 : 0);
            break;
        case 4:
            v1_a2 = turistico;
            v2_a2 = turistico2;
            sprintf(atributo2, "Pontos turísticos");
            vencedor2 = (v1_a2 > v2_a2) ? 1 : (v2_a2 > v1_a2 ? 2 : 0);
            break;
        case 5:
            v1_a2 = densidade1;
            v2_a2 = densidade2;
            sprintf(atributo2, "Densidade demográfica");
            vencedor2 = (v1_a2 < v2_a2) ? 1 : (v2_a2 < v1_a2 ? 2 : 0);
            break;
        default:
            printf("Erro interno: opção inválida na comparação 2.\n");
            return 1;
    }

    // var das soma dos atributos
    soma1 = v1_a1 + v1_a2;
    soma2 = v2_a1 + v2_a2;

    // Vencedor final:
    int vencedorFinal = (soma1 > soma2) ? 1 : (soma2 > soma1 ? 2 : 0);

    // exibição do resutlado:
    printf("\n>>>>>>>>>>>> RESULTADO FINAL <<<<<<<<<<<<<\n");
    printf("Estados comparados: %s e %s\n", estado, estado2);
    printf("Atributos usados: %s e %s\n\n", atributo1, atributo2);

    printf(">>> %s <<<\n", atributo1);
    printf("Carta 1 (%s): %.2f\n", cidade, v1_a1);
    printf("Carta 2 (%s): %.2f\n\n", cidade2, v2_a1);

    printf(">>> %s <<<\n", atributo2);
    printf("Carta 1 (%s): %.2f\n", cidade, v1_a2);
    printf("Carta 2 (%s): %.2f\n\n", cidade2, v2_a2);

    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade, soma1);
    printf("Carta 2 (%s): %.2f\n", cidade2, soma2);

    if (vencedorFinal == 1)
        printf("\n Resultado Final: Carta 1 (%s - %s) venceu!\n", cidade, estado);
    else if (vencedorFinal == 2)
        printf("\n Resultado Final: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    else
        printf("\n Resultado Final: Empate!\n");

    printf("==================================================\n");

    return 0;
}
