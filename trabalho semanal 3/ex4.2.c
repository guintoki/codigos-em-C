#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include<string.h>
#define MAX 3

//funções e tipos para manipulação de coisa
struct coisa
{
    char nome1[50];
    char nome2[50];
    char nome3[50];
    char finalNome[50];
};

typedef struct coisa Coisa[MAX];

void imprimeCoisa(Coisa umaCoisa)
{
    int x;
    for(x = 0; x<MAX; x++)
    {
        printf("\nNome..: %s", umaCoisa[x].nome1);
        printf("\nNome..: %s", umaCoisa[x].nome2);
        printf("\nNome..: %s", umaCoisa[x].nome3);
    }

}

Coisa devolveCoisa()
{
    Coisa umaCoisa;
    for(x = 0; x<MAX; x++)
    {
        fflush(stdin);
    printf("\nDigite o nome: ");
    gets(umaCoisa[x].nome1);
    fflush(stdin);
    printf("\nDigite o nome: ");
    gets(umaCoisa[x].nome2);
    fflush(stdin);
    printf("\nDigite o nome: ");
    gets(umaCoisa[x].nome3);
    fflush(stdin);
    }

    return(umaCoisa);
}

int comparaCoisas(Coisa umaCoisa)
{
    int saoIguais = 1;
    if(umaCoisa.nome1 == umaCoisa.nome2 && umaCoisa.nome1 == umaCoisa.nome3)
    {
        saoIguais = 0;
    }
    return(saoIguais);
}

// funções e tipos para manipulação dos nós
struct no
{
    Coisa umaCoisa;
    struct no *prox;
};

typedef struct no No;

void inicializa(No **inicio)
{
    *inicio = NULL;
}

void imprime(No *inicio)
{
    No *aux;
    if(inicio != NULL)
    {
        aux = inicio;
        while(aux != NULL)
        {
            imprimeCoisa(aux->umaCoisa);
            aux = aux->prox;
        }
    }
    else
    {
        printf("\nImpossivel imprimir. Lista vazia.");
    }
}

void insereNoFinal(No **inicio, Coisa umaCoisa)
{
    No *novo, *aux;
    novo = (No *) malloc(sizeof(No));
    if(novo != NULL)
    {
        novo->umaCoisa = umaCoisa;
        novo->prox = NULL;
        if(*inicio == NULL)
        {
            insereNoInicio(&*inicio, umaCoisa);
        }
        else
        {
            aux = *inicio;
            while(aux->prox != NULL)
            {
                aux = aux->prox;
            }
            aux->prox = novo;
        }
    }
    else
    {
        puts("ERRO. Memoria insuficiente.");
    }
}

int pesquisar(No *inicio, Coisa umaCoisa)
{
    int achou = 0;
    No *aux;
    aux = inicio;
    while(aux != NULL && !achou)
    {
        if(comparaCoisas(aux->umaCoisa, umaCoisa))
        {
            achou = 1;
        }
        else
        {
            aux = aux->prox;
        }
    }
    return(achou);
}

main()
{
    No *inicio, *novo;
    Coisa umaCoisa;
    int opcao;
    inicializa(&inicio);
    do
    {
        system("cls");
        printf("\nOperacoes em LLSE");
        printf("\n1. Imprimir");
        printf("\n2. Inserir no final");
        printf("\n3. Pesquisar");
        printf("\n0. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%i", &opcao);
        switch(opcao)
        {
        case 1: //imprimir
        {
            imprime(inicio);
            break;
        }
        case 2: // inserir no final
        {
            umaCoisa = devolveCoisa();
            insereNoFinal(&inicio, umaCoisa);
            break;
        }
        case 3: // pesquisar um noh
        {
            int achou;
            umaCoisa = devolveCoisa();
            achou = pesquisar(inicio, umaCoisa);
            if(achou)
            {
                printf("\nNoh encontrado na lista");
            }
            else
            {
                printf("\nNoh NAO encontrado na lista");
            }
            break;
        }
        while(opcao != 0);
        }

