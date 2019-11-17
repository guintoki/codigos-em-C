#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct aluno
{
    char nome[80];
    char endereco[80];
    int idade;
    char estadoCivil;
};

main()
{
    int i, solteiros=  0, casados= 0, divorciados=  0;
    float mediaS = 0, mediaC = 0, mediaD = 0;
    struct aluno alunos[MAX];
    for(i=0; i<MAX; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome do aluno: ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("\nDigite o endereco do aluno: ");
        gets(alunos[i].endereco);
        fflush(stdin);
        printf("\nDigite a idade do aluno: ");
        scanf("%i", &alunos[i].idade);
        fflush(stdin);
        do
        {
            printf("\nDigite o estado civil do aluno \nS- Solteiro \nC- Casado\nD- Divorciado ");
            scanf("%c", &alunos[i].estadoCivil);
            fflush(stdin);
            if(alunos[i].estadoCivil != 'C' && alunos[i].estadoCivil != 'D' && alunos[i].estadoCivil != 'S')
            {
                printf("\Invalido!!!!");
            }
            else if(alunos[i].estadoCivil == 'C')
            {
                casados++;
                mediaC += alunos[i].idade;
            }
            else if(alunos[i].estadoCivil == 'S')
            {
                solteiros++;
                mediaS += alunos[i].idade;
            }
            else if(alunos[i].estadoCivil == 'D')
            {
                divorciados++;
                mediaD += alunos[i].idade;
            }
        }
        while(alunos[i].estadoCivil != 'C' && alunos[i].estadoCivil != 'D' && alunos[i].estadoCivil != 'S');
    }
    mediaC = mediaC / casados;
    mediaS = mediaS / solteiros;
    mediaD = mediaD / divorciados;
    printf("\nAlunos casados: %i \nMedia de idade de alunos casados: %.1f", casados, mediaC);
    printf("\nAlunos solteiros: %i \nMedia de idade de alunos solteiros: %.1f", solteiros, mediaS);
    printf("\nAlunos divorciados: %i \nMedia de idade de alunos divorciados: %.1f", divorciados, mediaD);
}

