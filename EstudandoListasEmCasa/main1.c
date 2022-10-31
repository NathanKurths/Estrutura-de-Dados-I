#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ListaSequencial.h"

int main()
{
   struct aluno nathan;
   nathan.matricula = 321;
   nathan.nome[30] = "nathan";
   nathan.n1 = 3;
   nathan.n2 = 4;
   nathan.n2 = 5;

   Lista *li;
   li = cria_lista();
   tamanho_lista(li);
   libera_lista(li);
   
}