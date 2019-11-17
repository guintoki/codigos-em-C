#include <stdio.h>
#define MAX 10

main()
{
  struct produto
  {
    char codigo[4];
    char descricao[15];
    int quantidade;
  };
  struct pedido
  {
    int numero;
    int dia, mes, ano;
    struct produto produtos[3];
  };
  struct pedido meusPedidos[4];
}
