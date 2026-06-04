#include <stdio.h>

int main(){
    // Variáveis
    int idade = 29;
    float altura = 1.75;
    double saldo_bancario = 4000;
    char opcao = 'W';
    char nome[20] = "Welington";
    
    // Impressões
    printf("A idade é: %d \n", idade);
    printf("A Altura é de: %.2f \n", altura);
    printf("O saldo que tem em conta é de: %f \n", saldo_bancario);
    printf("A inicial do nome é: %c \n", opcao );
    printf("Nome: %s", nome);
    return 0;
} 