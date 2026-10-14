// biblioteca para permitir interação com utilizador
#include<stdio.h>

//o nosso código começa sempre pela função main
int main()
{
    // valor para teste 1 e teste 2
        // opção 1
    float Teste1 = 12.5, Teste2 = 18.6;

        /* opção 2
        float Teste1;
        float Teste2; 
        */

    // calculo da media dos testes
    float media = (Teste1 + Teste2)/2; 

    // apresentar o resultado da média
    printf("Resultado media: %.1f\n", media);

    return 0;
}

