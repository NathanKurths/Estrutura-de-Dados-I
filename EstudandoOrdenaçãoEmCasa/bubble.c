#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//calcular tempo de execução, a quantidade de trocas de posição, quantidade de comparações, quantidade de
//vezes que passou pelo vetor.

int main()
{

int vetor = {7,3,0,1,3,8,2,9};
bubble(vetor,8);
return 0;
}

void swap(int *a, int *b)
{
int aux = *a;
*a = *b;
*b = aux;
}

void bubble(int vetor[], int size)
{
for(int i=0; i<size - 1; i++)
  {
    for(int j=0; j<size - 1;j++)
    {
    if(vector[j]>vector[j+1])
      {
        swap(&vector[j], &vector[j+1]);
      }
    }
  }
}


void prinVector(const int *vector)
{

}





