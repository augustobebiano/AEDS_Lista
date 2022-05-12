#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXTAM 115

typedef struct Item{
	char *dna;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int primeiro;
	int ultimo;
}Lista;

void Arquivo(Lista *l, char *file);
void FLVazia(Lista *l);
void InsertL(Lista *l, Item d);
void PrintL(Lista *l);
void PrintMaior(Lista *l, int maxcadeia, int pcadeia);
void MaiorCadeia(Lista *l, Lista *c);
#endif