#include <stdio.h>
#include <time.h>

char *devolveSenha(char senha[])
{
  int maximo = rand()%9 + 12, quantos = 0;
  int quantosNumericos = 0, quantosMaiusculos = 0, quantosEspeciais = 0;
  printf("\nQuantidade maxima de caracteres:%i", maximo);
  while(quantos < maximo || quantosNumericos  < 2 || quantosMaiusculos < 2 || quantosEspeciais < 1)
  {
    int qualRegra = rand()%4+1;
    switch(qualRegra)
    {
      case 1: ///qualquer caractere
      {
        senha[quantos++] = 97+(rand()%25);
        break;
      }
      case 2: ///caractere numerico
      {
        senha[quantos++] = 48+(rand()%10);
        quantosNumericos++;
        break;
      }
      case 3: ///caractere em maiusculo
      {
        senha[quantos++] = 65+(rand()%25);
        quantosMaiusculos++;
        break;
      }
      case 4: ///caractere especial
      {
        char especiais[6] = {"()_!#"};
        senha[quantos++] = especiais[rand()%5];
        quantosEspeciais++;
        break;
      }
    }
  }
  return(senha);
}

main()
{
  srand(time(NULL));
  char senha[21];
  //devolveSenha(senha);
  printf("\nSenha devolvida: %s", devolveSenha(senha));
}
