#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void inserirNumero(char* listaTudo[], int i)
{
    char a;
    do
    {
        fflush(stdin);
        printf("\nDigite um numero: ");
        listaTudo[i] = (char*) malloc(50);
        gets(listaTudo[i]);
        printf("\nDeseja inserir mais um numero? ");
        scanf("%c", &a);
    }
    while(a=='s');
}
char imprimeLista(char* listaTudo[25], int i)
{
    fflush(stdin);
    int x;
    for(x=0; x<i; x++)
    {
        printf("\nNumeros: %s", listaTudo[x]);
    }
}
void organizar (char* listaTudo[], char* listaTim[],char* listaOi[], char* listaEmbratel[], char* listaDesconhecida[], int i)
{
    int x;
    int contaTim = 0, contaOi = 0, contaEm =0, contaDes= 0;
    for(x=0; x<i; x++)
    {
        if(listaTudo[x][0] == '0'&&listaTudo[x][1] == '4'&& listaTudo[x][2] == '1')
        {
            listaTim[contaTim] = listaTudo[x];
            contaTim++;
        }
        else if(listaTudo[x][0] == '0'&&listaTudo[x][1] == '3'&& listaTudo[x][2] == '1')
        {
            listaOi[contaOi] = listaTudo[x];
            contaOi++;
        }
        else if(listaTudo[x][0] == '0'&&listaTudo[x][1] == '2'&& listaTudo[x][2] == '1')
        {
            listaEmbratel[contaEm] = listaTudo[x];
            contaEm++;
        }
        else
        {
            listaDesconhecida[contaDes] = listaTudo[x];
            contaDes++;
        }
    }
}
main()
{
    int i, x;
    char opcao;
    char *listaTim [25];
    char *listaOi [25];
    char *listaEmbratel [25];
    char *listaDesconhecida [25];
    char *listaTudo [25];
    do
    {
        printf("\n1. Inserir");
        printf("\n2. Imprimir lista total");
        printf("\n3. Organizar listas");
        printf("\n3. Imprimir todas as listas");
        printf("\n0. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%i", &opcao);
        switch(opcao)
        {
        case 1: //inserir
        {
            inserirNumero(listaTudo, i);
            fflush(stdin);
        }
        break;
        case 2: // imprimir lista principal
        {
            ///imprimeLista(listaTudo, i);
            for(x=0; x<10; x++)
            {
                printf("\nNumeros: %s", listaTudo[x]);
            }
            fflush(stdin);
        }
        break;
        case 3: // Organizar
        {
            organizar(listaTudo, listaTim,listaOi, listaEmbratel, listaDesconhecida, i);
            fflush(stdin);
        }
        break;
        case 4: // Imprimir todas listas
        {
            ///imprimeTodas(listaTudo, i, listaTim,listaOi, listaEmbratel, listaDesconhecida);
            fflush(stdin);
        }
        break;
        }
    }
    while(opcao != 0);
}

