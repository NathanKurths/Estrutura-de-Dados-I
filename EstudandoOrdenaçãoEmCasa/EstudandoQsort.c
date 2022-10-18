#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int dividir(int vetor[], int esquerda, int direita)
{
    int aux; 
    int cont = esquerda;
    int contagem = 0;
    for (int i = esquerda + 1; i <= direita; i++)
    {
        if (vetor[i] < vetor[esquerda])
        {
            cont++;
            aux = vetor[i];
            vetor[i] = vetor[cont];
            vetor[cont] = aux;
            contagem ++;
        }
    }
    printf("Foi efetuado %d trocas\n", contagem);
    aux = vetor[esquerda];
    vetor[esquerda] = vetor[cont];
    vetor[cont] = aux;

    return cont;
}

void quick(int vetor[], int esquerda, int direita)
{
    int pos;
    if (esquerda < direita)
    {
        pos = dividir(vetor, esquerda, direita);
        quick(vetor, esquerda, pos - 1);
        quick(vetor, pos + 1, direita);
    }
}

int main()
{
    int vetor[] = {3, 5, 8, 1, 9, 2, 4, 7, 0, 6};
    int n = 10;

    quick(vetor, 0, n);

    printf("\n\n\n");

    for (int i = 0; i < n; i++)

        printf("%d - ", vetor[i]);

    printf("\n\n\n");
    return 0;
}