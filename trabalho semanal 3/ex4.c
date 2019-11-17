#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
struct alunos
{
    char nome1[50];
    char nome2[50];
    char nome3[50];
    char finalNome[50];
};
typedef struct lista Lista;
struct lista
{
    int qtd;
    struct alunos dados[MAX];
};
Lista* cria_lista()
{
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL)
            li->qtd = 0;
    return li;
}
void libera_lista (Lista* li)
{
    free(li);
}
int tamanho_lista(Lista* li)
{
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}
int lista_cheia(Lista* li)
{
    if(li == NULL)
        return-1;
    return(li->qtd == MAX);
}
int insere_lista_final(Lista* li, struct alunos al)
{
    if(li==NULL)
        return 0;
    if(lista_cheia(li))
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}
main()
{
    Lista *li;
    int x = tamanho_lista(li);
}
