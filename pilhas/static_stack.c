#include "static_stack.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct _static_stack
{
    int *data;
    long capacity;
    long top;
} StaticStack;

StaticStack *StatickStack_creat(long capacity)
{
    StaticStack *S =(StaticStack *)calloc(1, sizeof(StatickStack));
    S->capacity = capacity;
    S->top = -1;
    S->data = (int*)calloc(S->capacity, sizeof(int));

    return S;
}

void StaticStack_destroy(StaticStack **s_stack)
{
    StaticStack *S = *s_stack;
    free(S->data);
    free(S);
    s_stack = NULL;
}

bool StaticStack_isEmpty(const StaticStack *S)
{
    return S->top == -1;

}

bool StaticStack_isFull(const StaticStack *S)
{
    return S->top == S->capacity-1;
}

void StaticStack_push(StaticStack *S, long value)
{
   //verificar cheio
   //printar erro
   S->top++;
   S->data[S->top] = value; 
}

int StaticStack_pop(StaticStack *S)
{
    //verificar vazio
    //print msg erro

    int aux = S->data[S->top];
    S->top--;
    
    return aux;
}