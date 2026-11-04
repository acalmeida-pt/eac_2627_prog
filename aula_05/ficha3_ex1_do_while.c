#include<stdio.h>

int main()
{
    int n1, n2;
    int limiteMin, limiteMax;

    printf("Introduza limite 1:");
    scanf("%d", &n1);
    printf("Introduza limite 2:");
    scanf("%d", &n2);

    // determinar os limites do intervalo
    if(n1> n2)
    {
        limiteMax = n1;
        limiteMin = n2;
    }
    else
    {
        limiteMax = n2;
        limiteMin = n1;
    }

    int contadorImpares = 0;
    int somatorioImpares = 0;
    // aplicar ciclo DO...WHILE
    int i= limiteMin;
    do
    {
        if(i % 2 !=0) // numero não divisivel por 2, significa que é impar
        {
            contadorImpares++; // incrementa +1
            somatorioImpares= somatorioImpares + i; // soma valor de i 
        }
        i++;
    }
    while(i<= limiteMax);

    printf("No intervalo [%d;%d]: \n", limiteMin, limiteMax);
    printf("-> Existem %d numeros impares\n", contadorImpares);
    printf("-> Somatório de impares = %d\n", somatorioImpares);

    return 0;
}