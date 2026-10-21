#include <stdio.h>


int main()
{
    int idade;
    printf("Insira idade da pessoa:");
    scanf("%d", &idade);

    if(idade>=18 && idade<67)// se idade compreendida entre o intervalo idades
    {
        // A pessoa com X anos pode doar sangue
        printf("A pessoa com %d anos pode doar sangue", idade);
    }
    else // senão
    {
        printf("WARNING!!!");
        printf("A pessoa não tem idade para doar sangue");
    }
    return 0;
}