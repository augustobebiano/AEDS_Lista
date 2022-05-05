#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 5

typedef struct Lista{
	string vet[MAXTAM];
	int primeiro;
	int ultimo;
}Lista;

void FLVazia(Lista *p);
void EncheLista(Lista *p);
void InsertL(Lista *p, Item d);
void RemoveReplica(Lista *p);

#endif