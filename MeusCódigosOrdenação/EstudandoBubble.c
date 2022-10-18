#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// o algoritmo compara pares de elementos adjacentes, e o troca de lugar, até o ordenar.
int main()
{
    clock_t t;
    int n = 10;
    int Vet[10] = {3, 5, 8, 1, 9, 2, 4, 7, 0, 6};
    t = clock();
    int i, continua, aux;
    int fim = n;
    int contagem = 0;

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
                contagem ++;
            }
        }
        fim--;
    } while (continua != 0);
    printf("Foi efetuado %d trocas\n", contagem);
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);

    for (i = 0; i < 10; i++)
    {
        printf("%d, ", Vet[i]);
    }
    return 0;
}