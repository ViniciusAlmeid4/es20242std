#include <stdio.h>

int main () {

    int a, b, s;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);

    s = a + b;

    printf("O valor da soma de %d + %d: %d", a, b, s);

    return 0;
}