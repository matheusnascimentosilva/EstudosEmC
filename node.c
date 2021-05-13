NODE* createnode(){
    NODE* p;
    p = (NODE*) malloc(sizeof(NODE));
    p->next = NULL;
    p->info = 100;

    return p;
}
NODE_C* createnode_C(){
    NODE_C* p;
    p = (NODE_C*) malloc(sizeof(NODE_C));
    p->next = NULL;
    p->prev = NULL;
    p->info = 100;

    return p;
}

void freenode(NODE* p){
    free(p);
}
void freenode_C(NODE_C* p){
    free(p);
}