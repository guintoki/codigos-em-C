#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<assert.h>
#include<ctype.h>
#define MAX 500
main()
{
    int a, b, c, para, x= 0;
    char opa;
    char nomesCom[MAX][80];
    for(a=0; a<MAX; a++)
    {
        for(b=0; b<80; b++)
        {
            nomesCom[a][b] = '\0';
        }
    }
    char nomePri[MAX][50] = {"Aline", "Breno", "Danilo", "Emili", "Fabricio", "Giovana", "Guilherme", "Hugo"};
    char nomeSeg[MAX][50] = {"Sampaio", "Fernandes", "Macedo", "Augusto", "Aparecido", "Abreu", "Aparecida", "Sousa"};
    char nomeTer[MAX][50] = {"Gomes", "Moreira", "Menezes", "Lima", "Bernardin", "Prates", "Rodrigues", "Oliveira"};
    for(para = 0; para <1; x++)
    {
        a = rand() % 8 ;
        b = rand() % 8 ;
        c = rand() % 8 ;
        fflush(stdin);
        strcat(nomesCom[x], nomePri[a]);
        strcat(nomesCom[x], " ");
        strcat(nomesCom[x], nomeSeg[b]);
        strcat(nomesCom[x], " ");
        strcat(nomesCom[x], nomeTer[c]);
        printf("\n%i %s",x,  nomesCom[x]);
        printf("\nDeseja inserir mais um nome? ");
        scanf("%c", &opa);
        if(opa != 's')
        {
            para = 1;
        }
    }
}
