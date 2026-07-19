#include <stdio.h>

int main() {
    // DEFINIÇÃO DA CARTA 1
    char estado, cod_carta[4], cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;
    float densidade_demografica, pib_percapta;
    // DADOS DA CARTA 1
    printf("\n##### - DADOS CARTA 1 - #####\n");
    printf("Estado (Apenas uma Letra): ");
    scanf(" %c", &estado); //Aqui o código do estado é dado com apenas uma letra
    printf("Código da Carta: ");
    scanf("%s", cod_carta);
    printf("O nome da cidade: ");//No nome da Cidade nao pode ter letras com espaço
    scanf("%s", cidade);
    printf("População: ");//Não pode ter ponto (não é float)
    scanf("%d", &populacao);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Area da cidade: ");
    scanf("%f", &area);
    printf("PIB Cidade: ");
    scanf("%f", &pib);

    // IMPRESSÕES CARTA 1
    printf("\n##### - CARTA 1 - #####\n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n",cod_carta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Número de Pontos Turísticos:: %d\n",pontos_turisticos);
    printf("A area da cidade: %.4f km²\n",area);
    printf("PIB: %.2f\n ",pib);
    
    // DEFINIÇÃO DA CARTA 1
    char estado2, cod_carta2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade_demografica2, pib_percapta2;
    
    
    // DADOS DA CARTA 2
    printf("\n##### - DADOS CARTA 2 - #####\n");
    printf("Estado (Apenas uma Letra): ");
    scanf(" %c", &estado2); 
    printf("Código da Carta: ");
    scanf("%s", cod_carta2);
    printf("O nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("PIB Cidade: ");
    scanf("%f", &pib2);
    
    // IMPRESSÕES CARTA 2
    printf("\n##### - CARTA 2 - #####\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",cod_carta2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Número de Pontos Turísticos:: %d\n",pontos_turisticos2);
    printf("A area da cidade: %.4f km²\n",area2);
    printf("PIB: %.2f\n ",pib2);

    return 0;
}
