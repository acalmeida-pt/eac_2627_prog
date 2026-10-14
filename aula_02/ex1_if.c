#include<stdio.h>

int main()
{
    // variavel para receber numeros inteiros
    int nrIntroduzido;
    // pedir ao user para introduzir um valor
    printf("Introduza um valor:");
    // ler valor e colocar na variável
    scanf("%d", &nrIntroduzido);

    // instrução decisão
    // se nrIntroduzido for divisivel por 3
    if(nrIntroduzido%3 == 0)  // ( == -> comparação) | ( = -> atribuição)
    {
        // soma +1 ao valor inicial
        nrIntroduzido++;
        // nrIntroduzido +=1;
        // nrIntroduzido = nrIntroduzido+1;
    }

    // apresentar valor final da variavel nrIntroduzido
    printf("Valor final: %d", nrIntroduzido);
    
    return 0;
}