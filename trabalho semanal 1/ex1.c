#include<stdio.h>
#define MAX 10
main()
{
    int array[MAX];///A
    float arrayTri[MAX][MAX][MAX];///B
    char arrayString[MAX][MAX];///C
    struct registro///D
  {
    char nome[MAX];
    float salario;
    char arrayStrings[MAX];
    double maisUm;
    int seila;
  };

  struct registro registrado[MAX][MAX];///E
}
