#include<stdio.h>
#define MAX 10
main()
{
    float array[MAX], maior, menor;
    int i, indiceMaior, indiceMenor;
    for(i=0; i<MAX; i++)
    {
        printf("Digite o %i numero: ", i);
        scanf("%f", &array[i]);
    }
    maior = array[0];
    menor = array[0];
    for(i=0; i<MAX; i++)
    {
        if(array[i] < menor)
        {
            menor = array[i];
            indiceMenor = i;
        }
        else if(array[i]> maior)
        {
            maior = array[i];
            indiceMaior = i;
        }
    }
    printf("\nMaior valor: %.2f    na posicao: %i", maior, indiceMaior);
    printf("\nMenor valor: %.2f    na posicao: %i", menor, indiceMenor);
}
