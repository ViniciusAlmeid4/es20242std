#include <stdio.h>

int main () {
    int num;
    printf("Digite um numero com 3 digitos e inteiro: ");
    scanf("%d",&num);
    if (num>99 && num<1000)
    {
        if((num/100)%2==0){
            printf("\n%d e divisivel por 2!!",(num/100));
        } else {
            printf("\n%d nao e divisivel por 2!!",(num/100));
        }
    }
    else
    {
        printf("\nO sistema so aceita numeros com 3 digitos!!\n");
    }
    return 0;
}