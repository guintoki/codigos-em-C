#include <stdio.h>
#define MAX 40
main()
{
    char palavra1[MAX];
    char palavra2[MAX];
    int i, conta1 = 0, conta2 =0;
    printf("\nDigite uma frase: ");
    gets(palavra1);
    printf("\nDigite outra frase: ");
    gets(palavra2);
    for(i = 0; i <MAX; i++)
    {
        if(palavra1[i] == '\0')
        {
            conta1 = i;
            i = MAX;

        }
    }
    for(i = 0; i <MAX; i++)
    {
        if(palavra2[i] == '\0')
        {
            conta2 = i;
            i = MAX;

        }
    }
    for(i = 0; i <MAX; i++)
    {
        if(palavra1[i]!=palavra2[i])
        {
            printf("\nAs palavras Nao sao iguais");
            i = MAX;
        }
        else if(palavra1[i]== palavra2[i] && palavra1[i]== '\0' && palavra2[i]== '\0')
        {
            printf("\nAs palavras sao iguais");
            i = MAX;
        }
    }
    printf("\nTamanho da frase 1: %i", conta1);
    printf("\nTamanho da frase 2: %i", conta2);
}


