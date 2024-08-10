#include <stdio.h>

int main() {
    float v, max, min; // n[5]

    // printf("Digite 5 valores em sequencia: \n");

    // scanf("%f", &n[0]);
    // scanf("%f", &n[1]);
    // scanf("%f", &n[2]);
    // scanf("%f", &n[3]);
    // scanf("%f", &n[4]);

    // max = n[0];

    // min = n[0];

    // for (size_t i = 1; i < 5; i++)
    // {
    //     if(n[i] > max){
    //         max = n[i];
    //     }
    //     if(n[i] < min){
    //         min = n[i];
    //     }
    // }

    printf("Digite um valor: \n");

    scanf("%f", &v);

    max = v;

    min = v;

    printf("Digite um valor: \n");

    scanf("%f", &v);

    if (v > max)
    {
        max = v;
    }
    
    if (v < min)
    {
        min = v;
    }
    
    printf("Digite um valor: \n");

    scanf("%f", &v);

    if (v > max)
    {
        max = v;
    }
    
    if (v < min)
    {
        min = v;
    }

    printf("Digite um valor: \n");

    scanf("%f", &v);

    if (v > max)
    {
        max = v;
    }
    
    if (v < min)
    {
        min = v;
    }

    printf("Digite um valor: \n");

    scanf("%f", &v);

    if (v > max)
    {
        max = v;
    }
    
    if (v < min)
    {
        min = v;
    }
    
    printf("max: %f \\ min: %f",max, min);

    return 0;
}