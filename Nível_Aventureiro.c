#include <stdio.h>

int main() {
        // DEFINIÇÃO DA CARTA 1
    char estado, cod_carta[4], cidade[50];
    int populacao, pontos_turisticos; 
    float area, pib; 
    float densidade_demografica, pib_percapta;
        // DADOS DA CARTA 1
    printf("Estado: ");
    scanf("%s", &estado);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta); 
    printf("O nome da cidade: ");
    scanf("%s", &cidade); //Aqui eu nao sei como alterar para que possa abrigar cidades com espaços
    printf("População: ");
    scanf("%d", &populacao);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Area da cidade: ");
    scanf("%f", &area);
    printf("PIB Cidade: ");
    scanf("%f", &pib);
        // CALCULOS DA 1 CARTA
    densidade_demografica = populacao/area;
    pib_percapta = pib/populacao;
    
        // DEFINIÇÃO DA CARTA 2
    char estado2, cod_carta2[4], cidade2[50];
    int populacao2, pontos_turisticos2; 
    float area2, pib2; 
    float densidade_demografica2, pib_percapta2;
        // DADOS DA CARTA 2
    printf("Estados: ");
    scanf("%s", &estado2);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta2); 
    printf("Cidade: ");
    scanf("%s", &cidade2); //Aqui eu nao sei como alterar para que possa abrigar cidades com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
        // CALCULOS DA 2 CARTA
    densidade_demografica2 = populacao2/area2;
    pib_percapta2 = pib2/populacao2;


    // IMPRESSÕES CARTA 1
    printf("\n##### - CARTA 1 - #####\n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n",cod_carta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Número de Pontos Turísticos:: %d\n",pontos_turisticos);
    printf("A area da cidade: %.4f\n km²",area);
    printf("PIB: %.2f\n ",pib);
    printf("Densidade Populacional: %.2f\n ",densidade_demografica);
    printf("PIB per Capita: %.2f\n ",pib_percapta);

    // IMPRESSÕES CARTA 2
    printf("\n##### - CARTA 2 - #####\n");
    printf("O estado é: %c\n",estado2);
    printf("O Código da Carta é: %s\n",cod_carta2);
    printf("A cidade é: %s\n",cidade2);
    printf("A população é de: %d\n",populacao2);
    printf("A quantidade de pontos turisticos é de: %d\n",pontos_turisticos2);
    printf("A area da cidade: %.4f\n",area2);
    printf("O PIB é de: %.2f\n",pib2);
    printf("Densidade Populacional: %.2f\n ",densidade_demografica2);
    printf("PIB per Capita: %.2f\n ",pib_percapta2);
    

return 0;
} 

