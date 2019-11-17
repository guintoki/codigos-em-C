#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAXL 8
#define MAXC 10
struct aluno
{
    char respostas[MAXC];
    int acertos;
};
struct aluno alunos[MAXL];
main()
{
    int lin, col;
    char gabarito[MAXC] = {'A', 'C', 'D', 'B', 'A', 'A', 'C', 'D', 'B', 'B'};
    for(lin = 0; lin<MAXL; lin++)
    {
        alunos[lin].acertos = 0;
    }

    for(lin = 0; lin<MAXL; lin++)
    {
        for(col = 0; col<MAXC; col++)
        {
            fflush(stdin);
            printf("\Aluno %i digite a resposta correta para a questao %i: ", lin, col);
            scanf("%c", &alunos[lin].respostas[col]);
            if (alunos[lin].respostas[col] == gabarito[col])
            {
                alunos[lin].acertos++;
            }
        }
    }
    for(lin = 0; lin<MAXL; lin++)
    {
        printf("\nAcertos do aluno %i : %i", lin, alunos[lin].acertos);
        if(alunos[lin].acertos >=6)
        {
            printf("\nAPROVADO!!!");
        }
        else
        {
            printf("\nREPROVADO!!!");
        }
    }
}
