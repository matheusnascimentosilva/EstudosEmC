#ifndef NODE_H
#define NODE_H

#define NULL 0

struct node{
    int info;
    struct node* next;
};

struct node_comp{
    int info;
    struct node_comp* next;
    struct node_comp* prev;
};
    

typedef struct node NODE;
typedef struct node_comp NODE_C;

NODE* createnode();
NODE_C* createnode_C();

void freenode(NODE*);
void freenode_C(NODE_C*);

#endif //NODE_H