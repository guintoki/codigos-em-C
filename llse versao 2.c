#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

struct coisa
{
  int codigo;
  char nome[30];
};

typedef struct coisa Coisa;

Coisa getCoisa()
{
  Coisa umaCoisa;
  fflush(stdin);
  printf("\nDigite um codigo: ");
  scanf("%i", &umaCoisa.codigo);
  fflush(stdin);
  printf("\nDigite um nome..: ");
  gets(umaCoisa.nome);
  return(umaCoisa);
}

void setCoisa(Coisa *umaCoisa, Coisa novaCoisa)
{
  (*umaCoisa).codigo = novaCoisa.codigo;
   strcpy((*umaCoisa).nome, novaCoisa.nome);
}

void imprimeCoisa(Coisa umaCoisa)
{
  printf("\n\nCodigo: %i", umaCoisa.codigo);
  printf("\nNome..: %s", umaCoisa.nome);
}

int comparaCoisa(Coisa umaCoisa, Coisa outraCoisa)
{
  if((umaCoisa.codigo == outraCoisa.codigo) &&
     (strcmp(umaCoisa.nome, outraCoisa.nome) == 0))
      return 1;
  else
    return 0;
}

int ehMaiorACoisa(Coisa umaCoisa, Coisa outraCoisa)
{
  if((umaCoisa.codigo > outraCoisa.codigo) &&
     (strcmp(umaCoisa.nome, outraCoisa.nome) == 1))
      return 1;
  else
    return 0;
}

typedef struct no No;

struct no
{
  Coisa umaCoisa;
  No *prox;
};

void inicializa(No **inicio, No **fim)
{
  *inicio = *fim = NULL;
}

No *getNo(Coisa umaCoisa)
{
  No *novo = (No *) malloc(sizeof(No));
  if(novo == NULL)
  {
    printf("\nErro FATAL de alocacao!");
  }
  else
  {
    novo->umaCoisa = umaCoisa;
    novo->prox = NULL;
  }
  return(novo);
}

void inserirNoInicio(No **inicio, No **fim, No *novo)
{
  if(*inicio == NULL) ///estah vazia
  {
    *inicio = *fim = novo;
  }
  else
  {
    novo->prox = *inicio;
    *inicio = novo;
  }
}

void inserirNoFinal(No **inicio, No **fim, No *novo)
{
 if(*fim == NULL) ///estah vazia
  {
    *inicio = *fim = novo;
  }
  else
  {
    (*fim)->prox = novo;
    *fim = novo;
  }
}

void imprime(No *inicio)
{
  while(inicio != NULL)
  {
    imprimeCoisa(inicio->umaCoisa);
    inicio = inicio->prox;
  }
}

int removeDoInicio(No **inicio, No **fim, Coisa *umaCoisa)
{
  No *aux;
  int oQueRetorna = 1;
  if (*inicio == NULL) /// lista vazia
  {
    oQueRetorna = 0; ///falso
  }
  else
  {
    *umaCoisa = (*inicio)->umaCoisa;
    aux = *inicio;
    *inicio = (*inicio)->prox;
    if(*inicio == NULL) ///removeu o último: lista vazia
    {
      *fim = NULL;
    }
    free(aux);
  }
  return(oQueRetorna);
}

main()
{
  int i;
  No *inicio, *fim;
  inicializa(&inicio, &fim);
  No *novo;

  for(i = 0; i < 2; i++)
  {
    novo = getNo(getCoisa());
    inserirNoInicio(&inicio, &fim, novo);
  }

  for(i = 0; i < 2; i++)
  {
    novo = getNo(getCoisa());
    inserirNoFinal(&inicio, &fim, novo);
  }

  imprime(inicio);getch();

  Coisa umaCoisa;
  int deuCerto = removeDoInicio(&inicio, &fim, &umaCoisa);
  if(deuCerto)
  {
    printf("\n\nCoisa removida da lista: ");
    imprimeCoisa(umaCoisa);
  }
  else
  {
    printf("\nNao deu certo. Lista Vazia.");
  }

  printf("\nImpressao da lista: ");
  imprime(inicio);getch();

}
