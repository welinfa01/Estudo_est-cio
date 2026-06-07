#include <stdio.h>
int main() {
    int x = 5;
    float y = 5.2;
    char c = 'A';
    /*
    Todo o caracter tem um numero ASCII vinculado. Esse numero pode ser observado no site: https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html
    */
    printf("x == y: %d\n", x <= y);
    printf("x != y: %d\n", x > y);
    printf("O valor na tabela ASCII de '%c' é: %d\n", c,c);
    // interessante destacar que esses numeros ASCII é Case sensetive o valor de 'a' é diferente de 'A'.
    return 0;
}
