#include<stdio.h>

int main()
{
    int somatorio = 0;
    // somatorio 1 a 1000
    for(int i= 1; i<=1000; i++)
    {
        somatorio = somatorio+i;
    }
    printf("Somatorio de [1; 1000]: %d", somatorio);

    return 0;
}