#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 80
main()
{
    char frase[MAX], invertida[MAX];
    int i, x=0;
    printf("Digite uma frase: ");
    gets(frase);
    for(i=strlen(frase)-1; i>=0;i--)
    {
        invertida[x] = frase[i];
        x++;
    }
    invertida[x] = '\0';
    printf("\nFrase original: %s", frase);
    printf("\nFrase invertida: %s", invertida);
}


