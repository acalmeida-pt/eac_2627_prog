#include <stdio.h>


int main()
{
    int idade;
    printf("Insira idade da pessoa:");
    scanf("%d", &idade);

    if(idade>=18 && idade<67)
    {
        // A pessoa com X anos pode doar sangue
        printf("A pessoa com %d anos pode doar sangue", idade);
    }

    return 0;
}