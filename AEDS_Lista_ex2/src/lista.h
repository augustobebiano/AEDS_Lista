#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXTAM 100

typedef struct Item{
	char *nome;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int primeiro;
	int ultimo;
}Lista;

void Arquivo(Lista *l);
void FLVazia(Lista *l);
void InsertL(Lista *l, Item d);
void RemoveL(Lista *l, int n);
void PrintL(Lista *l);
void RemoveReplica(Lista *l);

#endif