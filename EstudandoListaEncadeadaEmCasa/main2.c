#include "ListaDinEnc.h"
#include <stdio.h>

int main()
{
   struct aluno primeiro;
   struct aluno segundo;
   struct aluno terceiro;
   struct aluno quarto;
   Lista *li;
   li = cria_lista();
   insere_lista_inicio(li, primeiro);
    insere_lista_inicio(li, segundo);
    insere_lista_inicio(li, terceiro);
    insere_lista_inicio(li, quarto);
   int b = tamanho_lista(li);

   printf("%d, %d\n", b);

}