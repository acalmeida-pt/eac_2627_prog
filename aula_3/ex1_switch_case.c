#include<stdio.h>

int main()
{
    int numero;

    printf("Introduza numero de 1 a 7:");
    scanf("%d", &numero);

    switch(numero)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Invalido!!!");
            break;
    }
}