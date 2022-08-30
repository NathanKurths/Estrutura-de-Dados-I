#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

void funcImprimir(int vetor[]);
void funcMergeSort(int vetor[], int inicio, int fim);

void funcImprimir(int vetor[])
{
    int i;
    printf("{");
    for (int i = 0; i < tamanho; i++)
    {

        if (vetor[i] != tamanho)
        {
            printf("%d, ", vetor[i]);
        }
        else
        {
            printf("%d}", vetor[i]);
        }
    }
}

void funcMergeSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio, i, j, k, aux[tamanho];
        meio = (inicio + fim) / 2;
        funcMergeSort(vetor, inicio, meio);
        funcMergeSort(vetor, meio + 1, fim);
        // faz o merge ordenando os elementos
        i = inicio;
        j = meio + 1;
        k = inicio;

        while (i <= meio && j <= fim)
        {
            if (vetor[i] < vetor[j])
            {
                aux[k] = vetor[i];
                i++;
            }
            else
            {
                aux[k] = vetor[j];
                j++;
            }
            k++;
        }
        while (i <= meio)
        {
            aux[k] = vetor[i];
            i++;
            k++;
        }

        while (j <= fim)
        {
            aux[k] = vetor[j];
            j++;
            k++;
        }

        for (i = inicio; i <= fim; i++)
        {
            vetor[i] = aux[i];
        }
    }
}

int main()
{
    int vetor[tamanho] = {5, 7, 9, 1, 3, 10, 2, 4, 8, 6};
    printf("Vetor nao ordenado:\n");
    funcImprimir(vetor);
    funcMergeSort(vetor, 0, tamanho - 1);
    printf("\nVetor ordenado:\n");
    funcImprimir(vetor);

    return 0;
}