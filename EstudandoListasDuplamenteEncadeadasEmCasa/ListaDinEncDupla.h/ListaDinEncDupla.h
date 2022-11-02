#include <stdio.h>

struct aluno{
    int matricula;
    char nome[30];
    float nota;
}; typedef struct elemento *Lista;

Lista *criar_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista_inicio(Lista *li, struct aluno al);
int insere_lista_final(Lista *li, struct aluno al);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int remove_lista(Lista *li, int mat);
int busca_lista_pos(Lista *li, int pos, struct aluno *al);
int busca_lista_mat(Lista *li, int mat, struct aluno *al);
