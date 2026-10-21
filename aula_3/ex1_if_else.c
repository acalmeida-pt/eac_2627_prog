#include<stdio.h>

int main()
{
    int numero;

    printf("Insira numero:");
    scanf("%d", &numero);

    if(numero%2 == 0) // se o numero for divisivel por 2
    {
        printf("Par");
    }
    else // senão
    {
        printf("Impar");
    }
}