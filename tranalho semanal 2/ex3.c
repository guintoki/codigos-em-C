#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX 10

main()
{
    char valor[MAX];
    int i, x;
    for(i=0;i<MAX;i++)
    {
        valor[i] = '\0';
    }
    valor[MAX -3] = ',';
    valor[MAX -2] = '0';
    valor[MAX -4] = '0';
    for(i = MAX -1 ; 0<i; i--)
    {
        if(i==(MAX -3))
        {
            i = MAX -4;
        }
        printf("\nDigite o Valor: ");
        valor[i] = getch();
        for(x=0;x<MAX;x++)
        {
            fflush(stdin);
            printf("%c", valor[x]);
        }

    }

}
