#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float divididos (float valores[10], int i)
{
    for(i = 0;i<10;i++)
    {
        valores[i] = valores[i] / 2;
        printf("\nSEGURA: %.2f", valores[i]);
    }

}
main()
{
    int i;
    float valores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    valores[i] = divididos(valores, i);
}
