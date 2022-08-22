#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *V[] = {7, 4, 5, 9};
    int *vetor, p1, p2, tamanho, inicio, meio, fim;
    int i = 0;
    int j = 0;
    int k = 0;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;

    vetor = (int)malloc(tamanho * sizeof(int));
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
    for (i = 0; i < tamanho; i++)
    {
        printf("%d, ", V[i]);
    }
    free(vetor);
    return 0;
}