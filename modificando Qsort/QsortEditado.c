#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//o quick sort padrão me retornou 0.000019 segundos a últimos digitos 40.
// o quick sort random me retorna de dois últimos digitos 32 a 62, piorou um pouco.


int dividir(int vetor[], int esquerda, int direita)
{
    int aux; // troca de posição
    int cont = esquerda;
    for (int i = esquerda + 1; i <= direita; i++)
    {
        if (vetor[i] < vetor[esquerda])
        {
            cont++;
            aux = vetor[i];
            vetor[i] = vetor[cont];
            vetor[cont] = aux;
        }
    }
    aux = vetor[esquerda];
    vetor[esquerda] = vetor[cont];
    vetor[cont] = aux;

    return cont;
}


int sortear(int vetor[], int esquerda, int direita)
{

    int pivo = rand() % (direita - esquerda + 1) + esquerda;
 

    int aux;
    aux = vetor[direita];
    vetor[direita] = vetor[pivo];
    vetor[pivo] = aux;
 

    return dividir(vetor, esquerda, direita);
}

void quick(int vetor[], int esquerda, int direita)
{
    int pos;
    if (esquerda < direita)
    {
        pos = sortear(vetor, esquerda, direita);
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

    double time_spent = 0.0;

    clock_t begin = clock();

    sleep(3);

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds \n", time_spent);

    return 0;
}