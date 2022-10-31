#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ListaSequencial.h"

int main()
{
   Lista *li;
   li = cria_lista();
   
   struct aluno nathan;
   printf("Digite a matricula do aluno\n");
   scanf("%d", &nathan.matricula);

   printf("Digite o nome do aluno\n");
   scanf("%s", nathan.nome);

   printf("Digite a nota 1 do aluno\n");
   scanf("%f", &nathan.n1);

   printf("Digite a nota 2 do aluno\n");
   scanf("%f", &nathan.n2);

   printf("Digite a nota 3 do aluno\n");
   scanf("%f", &nathan.n3);

   tamanho_lista(li);

   libera_lista(li);
   

   return 0;  
}