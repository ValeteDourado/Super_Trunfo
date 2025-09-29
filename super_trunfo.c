#include <stdio.h>

int main(){
    //Variaveis dos dados
    char estado, codigo[30], cidade[40];
    int populacao, turistico;
    float pib, area;

    //insert de dados via printf

    printf("Insira a letra do Estado: \n");
    scanf(" %c", &estado);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade); //o uso desse formato permite colocar o nome de cidades que tenham espaçamentos

    printf("Insira o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Quantos Km² tem a cidade? \n");
    scanf("%f", &area);

    printf("Qual PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%d", &turistico);

    //printa os dados da carta 1


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d\n", turistico);


    //Solicita os dados para carta2

    printf("Insira a letra do Estado: \n");
    scanf(" %c", &estado);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade); //o uso desse formato permite colocar o nome de cidades que tenham espaçamentos

    printf("Insira o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Quantos Km² tem a cidade? \n");
    scanf("%f", &area);

    printf("Qual PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%d", &turistico);

    //printa os dados dacarta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d\n", turistico);

    return 0;

}


/* printf("%formato1 %formato2", variavel1, variavel2)

%d: imprime um inteiro formato decimal
%i: equivale a %d
%f: imprime um numero de ponto flutuante no formato padrao
%e: imprime um numero de ponto flutuante na notação cientifica
%c: imprime um UNICO caractere
%s: imprime uma cadeia(string) de caracteres

\n é uma quebra de linha no codigo

*/