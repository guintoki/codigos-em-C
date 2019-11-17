#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
main()
{
    char frase[MAX];
    int i, x=0;
    printf("Digite uma frase: ");
    gets(frase);
    int tam = strlen(frase);
    char metade1[tam/2];
    char metade2[tam/2];
    for(i=0; i<tam/2;i++)
    {
        metade1[i] = frase[i];
    }
    metade1[i] = '\0';
    for(i=tam/2; i<tam;i++)
    {
        metade2[x] = frase[i];
        x++;
    }
    metade2[x] = '\0';
    printf("\nFrase original: %s", frase);
    printf("\nPrimeira metade: %s", metade1);
    printf("\nSegunda metade: %s", metade2);
}

