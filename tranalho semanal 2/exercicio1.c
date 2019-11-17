#include <stdio.h>

main()
{
  char nome[100] = {"Salve o Corinthians, o Campeao dos Campeoes"};
  char secreta[100], voltou[100];
  int i, codigo = -1;

  for(i = 0; i < strlen(nome); i++)
  {
    printf("%c", nome[i]+codigo);
    secreta[i] = nome[i]+codigo;
  }
  secreta[i] = '\0';
  printf("\n%s", secreta);

  for(i = 0; i < strlen(nome); i++)
  {
    voltou[i] = secreta[i] - codigo;
  }
  voltou[i] = '\0';
  printf("\n%s", voltou);
}
