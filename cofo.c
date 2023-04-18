/*

Cofo.c
Nome: Eduarda Silva do Nascimento Macedo
Matricula:2021079131

*/
#ifndef COFO_C
#define COFO_C
#include "cofo.h"

typedef struct_cofo_{
    int numItens;
    int maxItens;
    int *item;
}Cofo;

//Função que Cria o Cofo

Cofo *cofCreate(int maxItens){
    Cofo *c;
    if(maxItens > 0){ // quantidades de elementos a serem armazenados;
        c = (Cofo*)malloc(sizeof(Cofo));
        if( c != NULL){
            c->item = (int*)malloc(sizeof(int)*maxItens);
            if(c->item != NULL){
                c->numItens = 0;
                c->maxItens = maxItens;
                return c;
            }
            free(c)
        }
    }
    return NULL;
}

#endif