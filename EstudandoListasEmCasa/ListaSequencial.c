#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }

    return li;
}

void libera_lista(Lista *li)
{
    free(li);
}

int tamanho_lista(Lista *li)
{
    if (li == NULL)

        printf("Error: lista is NULL\n");
    else
        printf("%d\n", li->qtd);
        return li->qtd;
}

int lista_cheia(Lista *li)
{
    if (li == NULL)

        printf("Error: lista is NULL\n");
    else
        return li->qtd == MAX;
}
int lista_vazia(Lista *li)
{
    if (li == NULL)

        printf("Error: lista is NULL\n");
    else
        return li->qtd == 0;
}

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL || lista_cheia(li))
        printf("Error");
    else
        for (int i = li->qtd - 1; i >= 0; i--)
        {
            li->dados[i + 1] = li->dados[i];
        }
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL || lista_cheia(li))
        printf("Error");
    else
        li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int insere_lista_ordenada(Lista *li, struct aluno al)
{
    int i, k = 0;
    if (li == NULL || lista_cheia(li))
        printf("Error");
    else
    {
        i++;
    }
    for (k = li->qtd - 1; k >= i; k--)
    {
        li->dados[k + 1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd++;
    return 1;
}

int remove_lista_final(Lista *li){
    if(li == NULL || li->qtd == 0)
    printf("Error");
    else
    li->qtd--;
    return 1;
}

int remove_lista_inicio(Lista *li){
    if(li == NULL || li->qtd == 0)
    printf("Error");
    else
    for(int k=0; k<li->qtd-1; k++){
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;
}

int remove_lista(Lista *li, int mat){
    int i,k = 0;
    if(li == NULL || li->qtd == 0)
    printf("Error");
    else
    while(i<li->qtd && li->dados[i].matricula != mat){
        i++;
    }
    if(i == li->qtd);
    printf("Elemento não encontrado.");
    for(k=i; k<li->qtd; k++){
        li->dados[k] = li->dados[k+1];
     }
    li->qtd --;
    return 1;
}

int busca_lista_pos(Lista *li, int pos, struct aluno *al){
    if (li == NULL || pos<= 0 || pos >li->qtd)
    printf("Error");
    else
    *al = li->dados[pos-1];
    return 1;
}
int busca_lista_mat(Lista *li, int mat, struct aluno *al){
    int i = 0;
    if (li == NULL)
    printf("Error");
    else
    while(i<li->qtd && li->dados[i].matricula != mat){
        i++;
    }
    if(i==li->qtd)
    printf("Elemento não encontrado.");
    else
    *al = li->dados[i];
    return 1;
}
