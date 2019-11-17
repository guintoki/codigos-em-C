#include <stdio.h>
#include<stdlib.h>
#define MAX 5



main()
{
    int Sorteadas[MAX], Jogador[MAX],i,acertos;
    char Continua;

    for(i=0; i<MAX; i++)
    {
        Sorteadas[i] = 0;
        acertos[i] = 0;
    }
    for(i = 0 ; i < MAX; i++)
    {
        do
        {
            fflush(stdin);
            printf("\nInforme a quinzena sorteada: ");
            scanf("%i", &Sorteadas[i]);

            int x;
            for(x=0; x<MAX; x++)
            {
                if(Sorteadas[i] ==Sorteadas[x]  Sorteadas < 60 )
                {
                    printf("\nValor digitado invalido ou igual ao anterior.");
                }
                while(Sorteadas[i] == Sorteadas[x]  Sorteadas < 60);
            }
        }
    }


    do
    {
        for(i = 0 ; i < MAX; i++)
        {
            do
            {
                printf("\nDigite as dezenas apostadas pelo jogador:");
                scanf("%i",&Jogador[i]);

                int x;
                for(x=0; x<MAX; x++)
                {
                    if(Jogador[i] ==Jogador[x] || Jogador[i] > 60 || Jogador[i]<0)
                    {
                        printf("\nValor digitado invalido ou igual ao anterior.");
                    }
                    while(Jogador[i] == Jogador[x] || Jogador[i] > 60 || Jogado[i]<0 );
                }
            }

        }
        for(i = 0 ; i < MAX; i++)
        {
            for(x=0; x<MAX; x++)
            {
                if(Jogador[i]==Sorteadas[x])
                {
                    acertos++;
                }
            }
        }
        printf("\nQuantidade de acertos %i", acertos);
        if(acertos ==5)
        {
            printf("\nO jogador ganhou a QUINZENA");
        }







        fflush(stdin);
        printf("\nInsere mais um ? (S/N) ");
        continua = getchar();
        while(toupper(continua)=='S')
        }

}
}
