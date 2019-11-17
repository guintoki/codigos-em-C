#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
  char frase[20];
  int i;
  printf("\nDigite a frase: ");
  gets(frase);

  printf("\nEndereco da frase: %p", frase);

  printf("\nConteudo de frase: ");
  for(i = 0; i < 20; i++)
  {
    printf("%c", *(frase+i));
  }
  printf("\n");
  for(i = 0; i < strlen(frase); i++)
  {
    printf("\nednereco: %p\t caractere: %c", (frase+i),*(frase+i));
  }
}
