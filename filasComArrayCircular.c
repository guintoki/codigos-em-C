#include <stdio.h>

#define MAX 3

struct fila
{
  int inicio, fim, quantidade;
  int itens[MAX];
};

typedef struct fila Fila;

void inicializar(Fila *umaFila)
{
  (*umaFila).inicio = 0;
  (*umaFila).fim = -1;
  umaFila->quantidade = 0;
}

int inserir(Fila *umaFila, int valor)
{
  int deuCerto = 0;
  if(umaFila->quantidade < MAX)
  {
    deuCerto = 1;
    if(umaFila->fim == MAX-1) ///jah chegou no final
    {
      umaFila->fim = 0;
    }
    else
    {
      umaFila->fim++;
    }

    umaFila->itens[umaFila->fim] = valor;
    umaFila->quantidade++;
  }
  return(deuCerto);
}

int remover(Fila *umaFila, int *umValor)
{
  int deuCerto = 0;
  if(umaFila->quantidade > 0)
  {
    deuCerto = 1;
    *umValor = umaFila->itens[umaFila->inicio];
    umaFila->quantidade--;
    if(umaFila->inicio == MAX-1)
    {
      umaFila->inicio = 0;
    }
    else
    {
      umaFila->inicio++;
    }
  }
  return(deuCerto);
}


main()
{
  Fila umaFila;  ///variável do tipo Fila
  inicializar(&umaFila);
  int valores[5] = {10, 20, 30, 40, 50};
  int i;
  for(i = 0; i < 5; i++)
  {
    int deuCerto = inserir(&umaFila, valores[i]);
    if(deuCerto)
    {
      printf("\nValor %i inserido com sucesso", valores[i]);
    }
    else
    {
      puts("\nERRO! Overflow da fila.");
    }
  }

  for(i = 0; i < 7; i++)
  {
    int umValor;
    int deuCerto = remover(&umaFila, &umValor);
    if(deuCerto)
    {
      printf("\nValor %i removido com sucesso", umValor);
    }
    else
    {
      puts("\nERRO! Underflow da fila.");
    }
  }
}
