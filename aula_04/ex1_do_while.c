#include <stdio.h>

int main()
{
    int n;
    int contadorPar=0;
    do{
        printf("Insira numero:");
        scanf("%d", &n);

        if(n>=0 && n%2 == 0) // se n for divisivel por 2
        {
            contadorPar++; // soma +1
            printf("Numero inserido é par\n");
        }
    }
    while(n>=0);

    printf("Foram inseridos %d nr pares", contadorPar);
}