#include "desafio.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct _double_node {
  int val;
  struct _double_node *next; // proximo elemento
  struct _double_node *prev; // anterior
} DoubleNode, Node;

typedef struct _double_linked_list {
  Node *begin; //
  Node *end;
  size_t size;
} DoubleLinkedList, List;

Node *Node_create(int val){
  Node *node = (Node*) calloc(1, sizeof(Node));
  node->next = NULL;
  node->prev = NULL;
  node->val = val;
  return node; //
}

List *List_create(){
  List *list = (List*) calloc(1, sizeof(List));
  list->begin = NULL;
  list->end = NULL;
  list->size = 0;
  return list;

}

bool List_is_empty(const DoubleLinkedList *list){
  return list->size == 0; //
}

void List_Destroy(DoubleLinkedList **list){
  List *l = *list;

  Node *p = l->begin;
  Node *aux = NULL;

  while(p != NULL){
    aux  = p;
    p = p->next;
    free(aux);
  }
  free(l);
  *list = NULL;
}

void List_add_first(DoubleLinkedList *list, int val){
  Node *p = Node_create(val);
  if(List_is_empty(list)){
    list->end = p;
  } else {
    p->next = list->begin;
    list->begin->prev = p;
  }
  list->begin = p;
  list->size++;
}

  void List_add_last(DoubleLinkedList *list, int val){
    Node *novo = Node_create(val);
    novo->prev = list->end;

    if(List_is_empty(list)){
      list->begin = novo;
    }else{
      list->end->next = novo;
    }

    list->end = novo;
    list->size++;

  }

  void List_print(const DoubleLinkedList *list){
    Node *p = list->begin;

    while(p!=NULL){
      printf("%d - /t", p->val);
      p= p->next;
    }
    printf("Tamanho da lista = %d\n", list->size);

  }


  //DESAFIO
  
  void List_two_merge(const DoubleLinkedList *list1, const DoubleLinkedList *list2)
    {

    Node *aux = list1->begin;
    while (list1 != NULL) {
        list1 = list1->end;
    }
    list1->end = list2;

    }
  