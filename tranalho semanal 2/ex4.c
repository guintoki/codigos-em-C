#include<stdio.h>
#include<string.h>
#define MAX 9999
int calculaDezenas(int x)
{
    int centenas = 0, dezenas = 0, milhares = 0, unidades = 0;
    if(x>9999 || x<0)
    {
        printf("\Valor incorreto, digite novamente.");
    }
    else if(x>999)
    {
        milhares = x /1000;
        centenas = (x%1000)/100;
        dezenas = (x%100) /10;
        unidades = (x%1000)%10;
        printf("\nMilhares: %i", milhares);
        printf("\nCentenas: %i", centenas);
        printf("\nDezenas: %i", dezenas);
        printf("\nUnidades: %i", unidades);
    }
    else if(x>99)
    {
        centenas = x / 100;
        dezenas = (x%100)/10;
        unidades = (x%100)%10;
        printf("\nMilhares: %i", milhares);
        printf("\nCentenas: %i", centenas);
        printf("\nDezenas: %i", dezenas);
        printf("\nUnidades: %i", unidades);
    }
    else if(x>9)
    {
        dezenas = x/10;
        unidades = x%10;
        printf("\nMilhares: %i", milhares);
        printf("\nCentenas: %i", centenas);
        printf("\nDezenas: %i", dezenas);
        printf("\nUnidades: %i", unidades);
    }
    else if(x>1)
    {
        unidades = x;
        printf("\nMilhares: %i", milhares);
        printf("\nCentenas: %i", centenas);
        printf("\nDezenas: %i", dezenas);
        printf("\nUnidades: %i", unidades);
    }
}
main()
{
    int valor;
    printf("\nDigite um valor inteiro: ");
    scanf("%i", &valor);
    calculaDezenas(valor);
}

