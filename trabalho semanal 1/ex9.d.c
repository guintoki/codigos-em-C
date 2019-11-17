#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprimeD(char *a, float *b, int *c)
{
    char x;
    float y;
    int z;
    printf("\nDigite um valor caractere: ");
    scanf("%c", &x);
    printf("\nDigite um valor real: ");
    scanf("%f", &y);
    printf("\nDigite um valor inteiro: ");
    scanf("%i", &z);
    *a = x;
    *b = y;
    *c = z;
}
main()
{
    char a;
    float b;
    int c;
    imprimeD(&a, &b , &c);
    printf("\Caractere %c float %.2f int %i", a, b ,c);
}
