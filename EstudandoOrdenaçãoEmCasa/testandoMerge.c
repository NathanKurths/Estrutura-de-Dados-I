#include <stdio.h>
#include <stdlib.h>

void merge(int *V, int inicio, int meio, int fim)
{
    int *vetor, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;

    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor != NULL)
    {
        for (i = 0; i < tamanho; i++)
        {
            if (!fim1 && !fim2)
            {
                if (V[p1] < V[p2])
                    vetor[i] = V[p1++];
                else
                    vetor[i] = V[p2++];
                if (p1 > meio)
                    fim1 = 1;
                if (p2 > fim)
                    fim2 = 1;
            }
            else
            {
                if (!fim1)
                    vetor[i] = V[p1++];
                else
                    vetor[i] = V[p2++];
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++)

            V[k] = vetor[j];
    }
    free(vetor);
}


int main()
{

    return 0;
}