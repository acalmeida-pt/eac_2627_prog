#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int idade, idadeMaisVelho=0;
    char nome[15], nomeMaisVelho[15];

    //char paragem[] = "STOP";
    while(strcmp(nome, "STOP")!=0)
    {
        printf("Insira nome aluno:");
        scanf("%s", &nome);
        if(strcmp(nome, "STOP")!=0)
            break;

        printf("Insira idade:");
        scanf("%d", &idade);

        if(idade> idadeMaisVelho)
        {
            idadeMaisVelho = idade;
            strcpy(nomeMaisVelho, nome);
        }
    }

    printf("Aluno mais velho %s com %d anos",nomeMaisVelho, idadeMaisVelho);
    return 0;
}