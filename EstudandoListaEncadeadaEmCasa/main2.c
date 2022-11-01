#include "ListaDinEnc.h"
#include <stdio.h>

int main()
{
   struct aluno primeiro;
   Lista *li;
   li = cria_lista();
   int x = insere_lista_inicio(li, primeiro);
   printf("%d\n", x);

}