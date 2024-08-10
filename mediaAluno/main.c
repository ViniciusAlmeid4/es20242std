#include <stdio.h>

int main () {

    float n1, n2, n3, n4, result;
    char choice;

    printf("Escolha o tipo de media \n A - Aritmetica \n P - Ponderada \n H - Harmonica \n ---------- // ---------- \n");
    scanf("%c", &choice);

    printf("\n\nDigite o valor de n1: ");
    scanf("%f",&n1);

    printf("\nDigite o valor de n2: ");
    scanf("%f",&n2);

    printf("\nDigite o valor de n3: ");
    scanf("%f",&n3);

    printf("\nDigite o valor de n4: ");
    scanf("%f",&n4);

    if (choice == 'A')
    {
        result = (n1 + n2 + n3 + n4)/4;
    }

    if (choice == 'P')
    {
        result = (2*n1 + 3*n2 + 5*n3 + 10*n4)/20;
    }

    if (choice == 'H')
    {
        result = 4/(1/n1 + 1/n2 + 1/n3 + 1/n4);
    }

    printf("\nchar = %c // O valor da media e: %.2f", choice, result);

    return 0;
}