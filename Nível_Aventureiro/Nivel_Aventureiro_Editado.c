#include <stdio.h>
//As principais edições feitas, foram as alteraçções dos tipos de dados.
int main() {
    // DEFINIÇÃO DA CARTA 1
    /*Modificadores - https://www.telecom.uff.br/~marcos/protocolos/UFMG/aulas/c320.html*/
    char estado, cod_carta[4], cidade[50];
    int populacao;
    unsigned short int pontos_turisticos;
    double area, pib;

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
    scanf("%hu", &pontos_turisticos);
    printf("Area da cidade: ");
    scanf("%lf", &area);
    printf("PIB Cidade: ");
    scanf("%lf", &pib);

    // DEFINIÇÃO DA CARTA 2
    char estado2, cod_carta2[4], cidade2[50];
    int populacao2;
    unsigned short int pontos_turisticos2;
    double area2, pib2;

    // DADOS DA CARTA 2
    printf("\n##### - DADOS CARTA 2 - #####\n");
    printf("Estado (Apenas uma Letra): ");
    scanf(" %c", &estado2); //Aqui o código do estado é dado com apenas uma letra
    printf("Código da Carta: ");
    scanf("%s", cod_carta2);
    printf("O nome da cidade: ");//No nome da Cidade nao pode ter letras com espaço
    scanf("%s", cidade2);
    printf("População: ");//Não pode ter ponto (não é float)
    scanf("%d", &populacao2);
    printf("Pontos Turisticos: ");
    scanf("%hu", &pontos_turisticos2);
    printf("Area da cidade: ");
    scanf("%lf", &area2);
    printf("PIB Cidade: ");
    scanf("%lf", &pib2);

    // IMPRESSÕES

    // IMPRESSÕES CARTA 1
    printf("\n##### - CARTA 1 - #####\n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n",cod_carta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Número de Pontos Turísticos:: %d\n",pontos_turisticos);
    printf("A area da cidade: %.4f km²\n",area);
    printf("PIB: %.2f\n ",pib);

    //CALCULOS CARTAS 1
    //DENSIDADE POPULACIONAL => Populacao Total/Area em Km(Quadrado)
    float densidade_populacional;
    densidade_populacional = populacao/area;
    //PIB PER CAPITA => PIB Total/População Total
    float pib_percapita;
    pib_percapita = pib/populacao;
    // IMPRESSÕES CALCULOS
    printf("\n##### - CALCULOS CARTA 1 - #####\n");
    printf("A Densidade Populacional é: %.4f hab/km² \n",densidade_populacional);
    printf("O PIB Percapita da cidade é: %.4f \n ",pib_percapita);

    // IMPRESSÕES CARTA 2
    printf("\n##### - CARTA 2 - #####\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",cod_carta2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Número de Pontos Turísticos:: %d\n",pontos_turisticos2);
    printf("A area da cidade: %.4f km²\n",area2);
    printf("PIB: %.2f\n ",pib2);

    //CALCULOS CARTAS 2
    //DENSIDADE POPULACIONAL => Populacao Total/Area em Km(Quadrado)
    float densidade_populacional2;
    densidade_populacional2 = populacao2/area2;
    //PIB PER CAPITA => PIB Total/População Total
    float pib_percapita2;
    pib_percapita2 = pib2/populacao2;
    // IMPRESSÕES CALCULOS
    printf("\n##### - CALCULOS CARTA 1 - #####\n");
    printf("A Densidade Populacional é: %.4f hab/km² \n",densidade_populacional2);
    printf("O PIB Percapita da cidade é: %.4f \n ",pib_percapita2);

    return 0;
}
