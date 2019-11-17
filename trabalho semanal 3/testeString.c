#include <stdio.h>

void imprime(char *nomes[])
{
  int i;
  for(i = 0; i < 4; i++)
  {
    puts(*(nomes+i));
  }
}

int main(int argc, char *argv[])
{
  char *nomes[] = {"aaa", "bbb", "ccc", "ddd"};
  imprime(nomes);
}
