#include <malloc.h>
#include "list.h"
#include "node.c"
//atividade desenvolvida por : Matheus Nascimento, João carlos e Christian Menezes

//inicializando uma lista encadeada simples
void initialize(LIST* l){
    l->qt = 0;
    l->first = NULL;
}
//inicializando uma lista duplamente encadeada
void initializeEN(LIST_EN* l){
    l->qt = 0;
    l->first = NULL;
    l->last = NULL;
}
//funcao de insercao
void insertfirst(LIST* l, int n){
    NODE* a;

    a = createnode();

    a->info = n;

    a->next = l->first;

    l->first = a;

    l->qt++;
}
void insertfirstEN(LIST_EN* l, int n){
    NODE_C* new;
    new = createnode_C();
    new->info = n;
    new->next = l->first;
    new->prev = l->last;
    l->first = new;
    l->qt++;
}

int deletefirst(LIST* l){

    NODE* temp;
    int i;

    if(l->first == NULL){
        printf("\n\nERRO: LISTA VAZIA\n\n");
        return 0;
    }

    temp = l->first;
    i = temp->info;

    l->first = temp->next;

    l->qt--;

    freenode(temp);

    return i;

}

int onTheList(LIST *l, NODE *n){
  LIST *l2;
  l2 = l;
  if(l == NULL || n == NULL || l->first == NULL) return 0;
  if(l->first->info == n->info) return 1;
  l2->first = l2->first->next;
  return onTheList(l2, n);
}

void insertafter(LIST* l, NODE* p, int x){
    if(p == NULL || !onthelist(l,p)){
        printf("parametro *NODE* invalido!");
        exit(-1);
    }
    NODE* q;
    q = createnode();
    q->info = x;
    q->next = p->next;
    p->next = q;

    l->qt++;
}

int deleteafter(LIST* l, NODE* p){
    NODE* q;
    int aux;
    if((p==NULL)||(p->next==NULL) || !onthelist(l,p)){
        printf("Erro: impossivel remover");
        exit(1);
    }
    q = p->next;
    aux = q->info;
    p->next = q->next;

    l->qt--;
    freenode(q);

    return aux;
}

void insertlast(LIST *l, NODE *p, int x)
{
    NODE *current = p;


    if (onthelist(l, p))
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        
        current->info = x;
        insertafter(l, current, x);
    }
}

int deletelast(LIST *l, NODE *p)
{
    NODE *current;

    // se só houver um item na lista, remove
    if (p->next == NULL)
    {
        if (onthelist(l, p))
        {
            deleteafter(l, p);
            exit(0);
        }
    }

    current = p;

    while (current->next != NULL)
    {
        current = current->next;
    }

    deleteafter(l, current);

    return 1;
}

NODE* lastNode(LIST* l, NODE* n){
  if(l == NULL || n == NULL){
    return NULL;
  }
  if(n->next == NULL){
    return n;
  }else{
    return lastNode(l, n->next);
  }
}
void insereNaListaCircular(LIST*l,int n){
    NODE* a;

    a = createnode();
    a->info = n;

    if(l == NULL){
        a->next = a;
    }else{
        a->next = l->first;
        l->qt = a;
    }
    l = a;
}

