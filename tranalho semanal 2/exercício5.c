#include <stdio.h>
#include <string.h>
void imprimir(char array[6][40])
{
  int i;
  for(i = 0; i < 6; i++)
  {
    printf("\nNome %i: %s", i, array[i]);
  }
  printf("\n");
}

char *devolvePalavra(char frase[40])
{
  int i, j;
  char palavra[40];
  i = strlen(frase);
  while(frase[i] != ' ')
  {
    i--;
  }
  j = 0;
  while(frase[i] != '\0')
  {
    palavra[j++] = frase[i++];
  }
  palavra[j] = '\0';
  ///printf("\nSobrenome: %s", palavra);
  return(palavra);
}

void inserirEmOrdem(char palavra[40],
                    char lista[6][40],
                    int indice)
{
  int i, j, inseriu = 0;
  for(i = 0; i < indice && !inseriu; i++)
  {
    printf("\nSobrenome: %s ", devolvePalavra(lista[i]));
    if(strcmp(palavra, lista[i]) <= 0)
    {
      inseriu = 1;
      for(j = indice; j >= i; j--)
      {
        strcpy(lista[j], lista[j-1]);
      }
    }
  }
  strcpy(lista[i], palavra);
}

void ordenar(char array1[6][40], char array2[6][40])
{
  int i;
  for(i = 0; i < 6; i++)
  {
    printf("\nInserindo %s", array1[i]);
    inserirEmOrdem(array1[i], array2, i);
  }
}

main()
{
  char array1[6][40] = {"Alexandre Garcia Aguado",
                        "Andre Luis Belini de Oliveira",
                        "Carlos Roberto Paviotti",
                        "Edivaldo Serafim",
                        "Karlan Ricomini Alves",
                        "Marcio Jose Chaves"};


  char array2[6][40];

  imprimir(array1);

  ordenar(array1, array2);

  imprimir(array2);
}
