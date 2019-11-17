#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#define MAX 2
char inserirIngredientes(char* ingrediente[])
{
    int i;
    for(i=0; i<MAX; i++)
    {
        fflush(stdin);
        printf("\nDigite um ingrediente: ");
        ingrediente[i] = (char*) malloc(MAX);
        gets(ingrediente[i]);
        strupr(ingrediente[i]);
    }
}
char imprimeLista(char* ingrediente[])
{
    fflush(stdin);
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("\nIngrediente: %s", ingrediente[i]);
    }
}
char substituir (char* ingrediente[])
{
    int i;
    printf("\nDigite o index do elemento que deseja inserir: ");
    scanf("%i", &i);
    fflush(stdin);
    printf("\nDigite o nome do ingrediente que deseja inserir: ");
    scanf("%s", ingrediente[i]);
    strupr(ingrediente[i]);
}
char excluir (char* ingrediente[])
{
    int i;
    char aux[30];
    fflush(stdin);
    printf("\nDigite o nome do elemento que deseja excluir: ");
    scanf("%s", aux);
    for(i=0; i<MAX; i++)
    {
        if(strcmp(aux, ingrediente[i])==0)
        {
            ingrediente[i] = '\0';
            printf("\nElemento Removido!!!");
        }
    }
}
main()
{
    char* ingrediente[30];
    int opcao;
    do
    {
        printf("\n1. Inserir");
        printf("\n2. Imprimir");
        printf("\n3. Substituir");
        printf("\n4. Excluir");
        printf("\n0. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%i", &opcao);
        switch(opcao)
        {
        case 1: //inserir
        {
            inserirIngredientes(ingrediente);
            fflush(stdin);
        }
        break;
        case 2: // imprimir
        {
            imprimeLista(ingrediente);
            fflush(stdin);
        }
        break;
        case 3: // Substituir
        {
            substituir(ingrediente);
            fflush(stdin);
        }
        break;
        case 4: // Excluir
        {
            excluir(ingrediente);
            fflush(stdin);
        }
        break;
        }
    }
    while(opcao != 0);
}


