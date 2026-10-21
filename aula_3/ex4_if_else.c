#include<stdio.h>

int main()
{
    float teste1, teste2;

    printf("Introduza nota teste 1:");
    scanf("%f", &teste1);

    if(teste1>=8.5)
    {
        printf("Introduza nota teste 2:");
        scanf("%f", &teste2);

        if(teste2>=9)
        {
            // calcular nota final
            float notafinal = (teste1+teste2)/2;
            if (notafinal >=10)
            {
                printf("Aprovado!\n");
                if(notafinal>=17)
                {
                    printf("Defesa oral!");
                }
            }   
            else
            {
                printf("Reprovou!");
            }
        }
        else
        {
            printf("Reprovou!");
        }
    }
    else
    {
        printf("Reprovou!");
    }

}