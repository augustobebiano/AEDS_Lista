#include "lista.h"

void Arquivo(Lista *l){
    FILE *fptr = fopen("nomes.txt","r");
    if(fptr == NULL){
      printf("ERRO!\n");   
      return;
    }
    char linha[20];
    while(fgets(linha, 20, fptr)){
        Item palavra;
        palavra.nome = (char *)malloc(sizeof(linha));
        strcpy(palavra.nome, linha);
        InsertL(l, palavra);
    }
    fclose(fptr);
}

void FLVazia(Lista *l){
    Item palavra;
    palavra.nome = 0;
    for (int cont = 0; cont < MAXTAM; cont++){
        l->vet[cont] = palavra;
    }
	l->primeiro = 0;
	l->ultimo = 0;
}


void InsertL(Lista *l, Item d){
	if (l->ultimo >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->ultimo] = d;
		l->ultimo ++;
	}
}

void RemoveL(Lista *l, int n){
    Item palavra;
    palavra.nome = "";
    if(l->primeiro == l->ultimo)
		printf("LISTA VAZIA!\n");
	else{
        strcpy(l->vet[n].nome, palavra.nome);
    }
}

void PrintL(Lista *l){
    Item palavra;
    palavra.nome = "";
    int cont = 1;
    for(int cont2 = l->primeiro; cont2 < l->ultimo; cont2++){
        if(!strcmp(l->vet[cont2].nome, palavra.nome) == 0){
            printf("%d- ", cont);
            printf("%s", l->vet[cont2].nome);
            cont++;
        }
    }
    printf("\n");
}

void RemoveReplica(Lista *l){
	if(l->primeiro == l->ultimo)
		printf("LISTA VAZIA!\n");
	else{
        for(int cont = l->primeiro; cont < l->ultimo; cont++){
            for (int cont2 = cont+1; cont2 < l->ultimo; cont2++){
                if (!strcmp(l->vet[cont].nome, l->vet[cont2].nome)){
                    RemoveL(l, cont2);
                }
            }
        }
	}
}