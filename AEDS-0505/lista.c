#include "lista.h"

void FLVazia(Lista *p){
	p->primeiro = "vazio";
	p->ultimo = "vazio";
}


void InsertL(Lista*p, Item d){
	if (p->ultimo >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		p->vet[p->ultimo] = d;
		p->ultimo ++;
	}
}

void EncheLista(Lista *p){
    
}

void RemoveReplica(Lista *p){
	if(p->primeiro == p->ultimo)
		printf("LISTA VAZIA!\n");
	else{
        for(int cont=0, cont<MAXTAM, cont++){
            for(int cont2=1, cont2<MAXTAM, cont2++){
                if(p->vet[cont1]!="vazio" && p->vet[cont2]!="vazio"){
                    if(p->vet[cont1] == p->vet[cont2]){
                        p->vet[cont2] = "vazio";
                    }
                }
            }
        }
	}
}

void PrintLista(Lista *p){
    for(int cont=0, cont<MAXTAM, cont++){
        printf("%s ", p->vet[cont]);
    }
}