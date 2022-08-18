#include <stdio.h>
#include <stdlib.h>

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
        if (i != menor)
        {
            aux = Vet[i];
            Vet[i] = Vet[menor];
            Vet[menor] = aux;
        }
    }
}
int main()
{
    int n = 9;
    int Vetor[9] = {3, 6, 5, 1, 2, 8, 7, 9, 4};

    selecao(Vetor, n);

    printf("{");

    for (int i = 0; i < n; i++)
    {
        if (Vetor[i] != Vetor[8])
        {
            printf("%d, ", Vetor[i]);
        }
        else
            printf("%d", Vetor[i]);
    }
    printf("}");
    printf("\n");

    return 0;
}