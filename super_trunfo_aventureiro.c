#include <stdio.h>

int main() {
    // Variáveis dos dados da Carta 1
    char estado[3], codigo[30], cidade[40];
    unsigned long int populacao, turistico;
    float pib, area;

    // Variáveis dos dados da Carta 2
    char estado2[3], codigo2[30], cidade2[40];
    unsigned long int populacao2, turistico2;
    float pib2, area2;

    // Solicita dados para carta 1
    printf(">>> Dados da Carta nº 1 <<<\n");
    printf("Insira a sigla do Estado (ex: SP): ");
    scanf("%s", estado);

    printf("Insira o código da carta (apenas numeros): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade);

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

    // >>>>>>> var de calculos <<<<<<
    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;

    // >>>>>>>> Dados para comparação <<<<<<
    int opcao;
    printf("\n>>> Dados de Comparação <<<\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    // >>>>>>> COMPARAÇÃO <<<<<<<
    float v1 = 0, v2 = 0;
    char Atributo[50];
    int vencedor = 0; // 1 = carta1, 2 = carta2, 0 = empate

    switch (opcao) {
        case 1:
            v1 = populacao;
            v2 = populacao2;
            sprintf(Atributo, "População");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0);
            break;
        case 2:
            v1 = area;
            v2 = area2;
            sprintf(Atributo, "Área");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0);
            break;
        case 3:
            v1 = pib;
            v2 = pib2;
            sprintf(Atributo, "PIB");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0);
            break;
        case 4:
            v1 = turistico;
            v2 = turistico2;
            sprintf(Atributo, "Pontos turísticos");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0);
            break;
        case 5:
            v1 = densidade1;
            v2 = densidade2;
            sprintf(Atributo, "Densidade demográfica");
            // Para densidade, o menor vence
            vencedor = (v1 < v2) ? 1 : (v2 < v1 ? 2 : 0);
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // >>>>>>>> EXIBICAO DO RESULTADO <<<<<<<<
    printf("\n>>> RESULTADO <<<Z\n");
    printf("Atributo comparado: %s\n\n", Atributo);

    printf("Carta 1 - %s (%s): %.2f\n", cidade, estado, v1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, v2);

    if (vencedor == 1)
        printf("\nResultado: Carta 1 (%s - %s) venceu!\n", cidade, estado);
    else if (vencedor == 2)
        printf("\nResultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    else
        printf("\nResultado: Empate!\n");

    return 0;
}
