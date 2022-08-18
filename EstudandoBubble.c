#include <stdio.h>
#include <stdlib.h>

// o algoritmo compara pares de elementos adjacentes, e o troca de lugar, até o ordenar.
int main()
{
    int n = 4;
    int Vet[4] = {4, 3, 2, 1};
    int i, continua, aux;
    int fim = n;

    do
    {
        continua = 0;
        for (i = 0; i < fim - 1; i++)
        {
            if (Vet[i] > Vet[i + 1])
            {
                aux = Vet[i];
                Vet[i] = Vet[i + 1];
                Vet[i + 1] = aux;
                continua = i;
            }
        }
        fim--;
    } while (continua != 0);

    for (i = 0; i < 4; i++)
    {
        printf("%d, ", Vet[i]);
    }
    return 0;
}