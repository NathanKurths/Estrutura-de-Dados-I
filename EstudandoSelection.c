#include <stdio.h>
#include <stdlib.h>

// o algoritmo comparada um elemento do vetor com todos os outros, um por um.

void selecao(int Vet[], int n)
{
    int menor, aux;
    for (int i = 0; i < n - 1; i++)
    {
        menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Vet[menor] > Vet[j])
                menor = j;
        }
        if (Vet[i] != Vet[menor])
        {
            aux = Vet[i];
            Vet[i] = Vet[menor];
            Vet[menor] = aux;
        }
    }
}
int main()
{
    int n = 2;
    int Vetor[2] = {9, 3};

    selecao(Vetor, n);

    printf("|");
    for (int i = 0; i < n; i++)
    {
        printf(" %d |", Vetor[i]);
    }

    return 0;
}