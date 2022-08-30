#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//o quick sort padrão me retorna com frequência um tempo maior
// o quick sort random me retorna com frequência a metade do tempo da sua versão padrão


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
    clock_t t;
    int vetor[] = {3, 5, 8, 1, 9, 2, 4, 7, 0, 6};
    int n = 10;
    t = clock();

    quick(vetor, 0, n);

     t = clock() - t;
     printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);

    printf("\n\n\n");

    for (int i = 0; i < n; i++)

        printf("%d - ", vetor[i]);

    printf("\n\n\n");

 

    return 0;
}