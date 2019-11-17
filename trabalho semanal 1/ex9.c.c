#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int imprimeC (char parametro, char par2[50], float x, float y, int a, int b, int c)
{
    int resultadoM;
    resultadoM = a *b *c;
    return resultadoM;
}
main()
{
    char parametro = 'A';
    char par2[50] = "SEgura";
    float z =22;
    float y =24;
    int a = 1;
    int b = 22;
    int c = 2;
    int x;
    int resultado;

    resultado = imprimeC(parametro, par2, z, y, a,b,c);
    printf("\n %i", resultado);///C
}
