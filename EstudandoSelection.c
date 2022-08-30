#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// o algoritmo comparada um elemento do vetor com todos os outros, um por um.

void selecao(int Vet[], int n)
{
    int menor, aux;
    int contagem = 0;
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
            contagem ++;
        }
    }
    printf("O numero de trocas foi %d\n", contagem);
}
int main()
{
    clock_t t;
    int n = 10;
    int Vetor[10] = {3, 5, 8, 1, 9, 2, 4, 7, 0, 6};
    t = clock();

    selecao(Vetor, n);
    t = clock() - t;
    printf("It took me %d clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);

    printf("|");
    for (int i = 0; i < n; i++)
    {
        printf(" %d |", Vetor[i]);
    }

    return 0;
}