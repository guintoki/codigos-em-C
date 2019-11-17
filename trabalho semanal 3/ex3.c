#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
char pegaFrase(char frase[50], char embaralhada[50], char volta[50])
{
    int x;
       printf("\nDigite uma frase: ");
    gets(frase);
     for(x=0; x<50; x++)
     {
         embaralhada[x] = '\0';
         volta[x] = '\0';
     }
}
char embaralhar(char frase[50], char embaralhada[50])
{
    int tamanho;
    tamanho = strlen(frase);
    int x, y =0;
    char aux1[50], aux2[50];
    for(x=0; x<tamanho; x++)
    {
        embaralhada[y] = frase[x];
        x = x+2;
        y++;
    }
    for(x=1;x<tamanho;x++)
    {
        embaralhada[y] = frase[x];
        x = x+2;
        y++;
    }
    for(x=2;x<tamanho;x++)
    {
        embaralhada[y] = frase[x];
        x = x+2;
        y++;
    }
}
char desembaralha(char embaralhada[50], char volta[50])
{
    int tamanho;
    tamanho = strlen(embaralhada);
    int x, y =0;
    for(x=0; x<tamanho; x++)
    {
        volta[x] = embaralhada[y];
        x = x+2;
        y++;
    }
    for(x=1;x<tamanho;x++)
    {
        volta[x] = embaralhada[y];
        x = x+2;
        y++;
    }
    for(x=2;x<tamanho;x++)
    {
        volta[x] = embaralhada[y];
        x = x+2;
        y++;
    }
}
char imprimir(char embaralhada[50], char volta[50])
{
    int x;
    printf("\nFrase embaralhada: ");
    for(x=0;x<50;x++)
    {
        printf("%c", embaralhada[x]);
    }
    printf("\nFrase desembaralhada: ");
    for(x=0;x<50;x++)
    {
        printf("%c", volta[x]);
    }
}
main()
{
    char frase[50];
    char embaralhada[50];
    char volta[50];
    pegaFrase(frase, embaralhada, volta);
    embaralhar(frase, embaralhada);
    desembaralha(embaralhada, volta);
    imprimir(embaralhada, volta);
}
