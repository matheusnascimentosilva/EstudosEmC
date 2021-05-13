#ifndef LIST_H
#define LIST_H

#include "node.h"

struct list_c{
    int qt;
    NODE* first;
};
struct list_en{
    int qt;
    NODE_C* first;
    NODE_C* last;
};


typedef struct list_c LIST;
typedef struct list_en LIST_EN;

void initialize(LIST*);

void insertfirst(LIST*, int);

int deletefirst(LIST*);

void insertafter(LIST*, NODE*, int);

int deleteafter(LIST*, NODE*);

void insertlast(LIST*, NODE*, int);

int deletelast(LIST*, NODE*);
//-------------------------IMPLEMENTAÇÕES NOVAS------------------------
void insereNaListaCircular(LIST*, int);

void insereDuplamenteEncadeada(LIST_EN*,int);

void initializeEN(LIST_EN*);

void insertfirstEN(LIST_EN*, int);

int deletefirstEN(LIST_EN*);

void insertafterEN(LIST_EN*, NODE*, int);

int deleteafterEN(LIST_EN*, NODE*);

void insertlastEN(LIST_EN*, NODE*, int);

int deletelastEN(LIST_EN*, NODE*);

#endif