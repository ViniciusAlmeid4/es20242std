#include <stdio.h>

int main () {

    int v;

    printf("Digite um valor para saber se ele e divisivel por 5: \n");

    scanf("%d", &v);

    if (v%5 == 0)
    {
        printf("O numero %d e divisivel por 5!!", v);
    }
    else
    {
        printf("O numero %d nao e divisivel por 5!!", v);
    }

    return 0;
}