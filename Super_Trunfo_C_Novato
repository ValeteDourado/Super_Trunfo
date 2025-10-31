#include <stdio.h>

int main() {
    // Variáveis dos dados da Carta 1
    char estado, codigo[30], cidade[40];
    unsigned long int populacao, turistico;
    float pib, area;

    // Variáveis dos dados da Carta 2
    char estado2, codigo2[30], cidade2[40];
    unsigned long int populacao2, turistico2;
    float pib2, area2;

    // Solicita dados para carta 1
    printf("Insira a letra do Estado: \n");
    scanf(" %c", &estado);

    printf("Insira o código da carta (apenas numeros): \n");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade);  //o uso desse formato permite colocar o nome de cidades que tenham espaçamentos

    printf("Insira o numero de habitantes: \n");
    scanf("%lu", &populacao);

    printf("Quantos Km² tem a cidade? \n");
    scanf("%f", &area);

    printf("Qual PIB da cidade (em bilhões)? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%lu", &turistico);

    // Solicita dados para carta 2
    printf("\nPrepara-se para inserir os dados da carta 2 \n");

    printf("Insira a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta (apenas numeros): \n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Insira o numero de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Quantos Km² tem a cidade? \n");
    scanf("%f", &area2);

    printf("Qual PIB da cidade (em bilhões)? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%lu", &turistico2);

    // >>>>>>>> var de calculos <<<<<<<<<<<
    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib * 1000000000) / populacao;  // conversão PIB de bilhões para reais
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // >>>>>>>> Exibe os dados <<<<<<<<<
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f R$/hab\n", pibPerCapita1);
    printf("Pontos Turísticos: %lu\n", turistico);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f R$/hab\n", pibPerCapita2);
    printf("Pontos Turísticos: %lu\n", turistico2);

    // >>>>>>> COMPARAÇÃO <<<<<<<<
    // Escolhendo o atributo a comparar;
    // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita
    int atributo = 4;  // <<< aqui será determinado qual atributo o programa irá comparar

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    float v1, v2;
    char Atributo[30];
    int vencedor = 0; // 1 = carta1, 2 = carta2, 0 = empate

    switch (atributo) {
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
            v1 = densidade1;
            v2 = densidade2;
            sprintf(Atributo, "Densidade Populacional");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0); // menor vence
            break;
        case 5:
            v1 = pibPerCapita1;
            v2 = pibPerCapita2;
            sprintf(Atributo, "PIB per capita");
            vencedor = (v1 > v2) ? 1 : (v1 > v2 ? 2 : 0);
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    // >>>>>>>>>>>>>> Exibição do resultado <<<<<<<<<<<<<<<<<<
    printf("Comparando o atributo: %s\n", Atributo);
    printf("Carta 1 - %s (%c): %.2f\n", cidade, estado, v1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, v2);

    if (vencedor == 1)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    else if (vencedor == 2)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
