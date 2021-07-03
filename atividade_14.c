#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#define MAX 10

int pos = 0;

typedef struct CADASTRO{
    char nome[30];
    char sexo[9];
    char telefone[20];
}cadastro;

void Listar(cadastro *c);
void Consultar(cadastro *c);
void Inserir(cadastro *c);
void Inicializar(cadastro *c);

int main(){

        int opc;
        cadastro novo[MAX];
        Inicializar(novo);

        while(1){ 
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"); 
        printf("\n1 - Inserir");
        printf("\n"); 
        printf("2 - Listar Funcionarios"); 
        printf("\n"); 
        printf("3 - Consultar"); 
        printf("\n");
        printf("4 - Sair"); 
        printf("\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"); 
        scanf("%d",&opc);
        switch(opc) { 
            case 1:
            Inserir(novo);
            break;
            case 2:
            Listar(novo);
            break;
            case 3:
            Consultar(novo);
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("Opção inválida!\n");
            break;
        }
    }
    return 0;
}
//LISTANDO OS REGISTROS DO VETOR DE STRUCTS
void Listar(cadastro *c){
    int x;
    for(x=0;x<MAX;x++){
        printf("[Nome:     [%s]]\n",c[x].nome);
        printf("[Sexo:     [%s]]\n",c[x].sexo);
        printf("[Telefone: [%s]]\n",c[x].telefone);
    }
}
//INSERINDO UM REGISTRO NO VETOR DE STRUCTS
void Inserir(cadastro *c){
    if(pos == MAX){
        printf("O vetor está cheio!");
    }else{
    printf("Digite o nome:\n");
    scanf("%s%*c", c[pos].nome);
    printf("Digite o sexo:\n");
    scanf("%s%*c", c[pos].sexo);
    printf("Digite o telefone:\n");
    scanf("%s%*c", c[pos].telefone);
    pos++;
    }
    printf("Dados inseridos com sucesso!\n");
}
//CONSULTANDO UM NOME NO VETOR DE STRUCTS
void Consultar(cadastro *c){
    int posicao,i;
    char nome[30];
    printf(" \n Digite um nome: ");
    scanf("%s%*c", nome);
 
for(i=0; i<10; i++) {
    if(strcmp(nome, c[i].nome)== 0) {
        printf("\n Registro encontrado! ");
        posicao = i;
    } else {
        posicao = -1;
    }
}
 
if(posicao = -1) {
    printf(" \n Registro não encontrado! ");
} else {
    printf(" \n O Telefone é: %s ", c[i].telefone);
    
}
}
//INICIANDO O VETOR DE STRUCTS
void Inicializar(cadastro *c){
    int x;
    for(x=0;x<MAX;x++){
        strcpy(c[x].nome, "NULL");
        strcpy(c[x].sexo, "NULL");
        strcpy(c[x].telefone, "NULL");

    }
    printf("Sistema inicializado!\n");
}