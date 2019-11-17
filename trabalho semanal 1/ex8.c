#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float chamar(int a, int b, float c, float d, char nome[50])
{

}
void imprimir()
{
    printf("\nOPA");
}
main()
{
    imprimir();///A


    float x;
    x = devolver();///B


    float salario;
    printf("%c", calcular(&salario));
    printf("&f", salario);///C

    int a, b;
    float c, d;
    char nome[50];
    int valor = chamar(a, &b, &c, d, nome);
    printf("%s", nome);///D


    char nome[30];
    int valor;
    gets(nome);
    valor = consultar(nome);///E
}


