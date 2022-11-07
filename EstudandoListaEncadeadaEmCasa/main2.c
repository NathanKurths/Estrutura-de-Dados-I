#include "ListaDinEnc.h"
#include <stdio.h>

int main()
{
   struct aluno primeiro;
   primeiro.matricula = 3;
   struct aluno segundo;
   segundo.matricula = 5;
   struct aluno terceiro;
   terceiro.matricula = 10;
   struct aluno quarto;
   quarto.matricula = 9;
   Lista *li;
   li = cria_lista();
   int x = insere_lista_inicio(li, primeiro);
    insere_lista_inicio(li, segundo);
    insere_lista_inicio(li, terceiro);
    insere_lista_inicio(li, quarto);
  print_lista(li);


}