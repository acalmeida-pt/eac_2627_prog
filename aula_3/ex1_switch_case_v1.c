#include<stdio.h>

int main()
{
    int numero;

    printf("Introduza numero de 1 a 7:");
    scanf("%d", &numero);

    if(numero == 1)
        printf("Domingo");
    else if(numero ==2)
        printf("Segunda");
    else if(numero==3)
        printf("Terça");
    else if(numero==4)
        printf("Quarta");
    else if(numero==5)  
        printf("Quinta");  
    else if(numero==6)
        printf("Sexta");
    else if(numero==7)
        printf("Sabado");
    else{
        printf("Invalido!!!");
    }

}