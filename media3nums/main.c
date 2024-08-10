#include <stdio.h>

int main() {
    float r, n1, n2, n3;

    printf("Digite 3 valores em sequencia: \n");

    scanf("%f", &n1);    
    scanf("%f", &n2);   
    scanf("%f", &n3);

    r = (n1 + n2 + n3)/3;

    printf("A media entre os valores: %.2f", r);

    return 0;
}