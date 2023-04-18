/*

Cofo.h
Nome:Eduarda Silva do Nascimento Macedo
Matricula:2021079131

*/
#ifndef COFO_H
#define COFO_H

/*Definição Local*/

typedef struct cofo Cofo;

Cofo *cofCreate(int maxItens);

int cofInsert(Cofo *c ,int item);

int cofRemove(Cofo *c,int item);

int cofQuery(Cofo *c,int key);

int cofDestroy(Cofo *c);

#endif 
