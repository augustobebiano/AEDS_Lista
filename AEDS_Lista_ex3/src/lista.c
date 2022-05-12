#include "lista.h"

void Arquivo(Lista *l, char *file){
    FILE *fptr = fopen(file,"r");
    if(fptr == NULL){
      printf("ERRO!\n");   
      return;
    }
    char triade[4];
    while(fgets(triade, 4, fptr)){
        Item cadeia;
        cadeia.dna = (char *)malloc(sizeof(triade));
        strcpy(cadeia.dna, triade);
        InsertL(l, cadeia);
    }
    fclose(fptr);
}

void FLVazia(Lista *l){
    Item cadeia;
    cadeia.dna = 0;
    for (int cont = 0; cont < MAXTAM; cont++){
        l->vet[cont] = cadeia;
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

void PrintL(Lista *l){
    for(int cont2 = l->primeiro; cont2 < l->ultimo; cont2++){
        printf("%s ", l->vet[cont2].dna);
    }
    printf("\n");
}

void PrintMaior(Lista *l, int maxcadeia, int pcadeia){
    int cont = 0;
    int cont2 = pcadeia;
    if(maxcadeia == 0){
        printf("\nNENHUMA SEQUENCIA ENCONTRADA\n");
    }else{
        printf("\nMaior sequencia encontrada:\n");
        while(cont < maxcadeia){
            printf("%s ", l->vet[cont2].dna);
            cont++;
            cont2++;
        }
        printf("\n");
    }
    
}

void MaiorCadeia(Lista *l, Lista *c){
    int cont = c->primeiro, cont2 = l->primeiro, cont3 = c->primeiro;
    int pcadeia = l->primeiro, pvalor = l->primeiro;
    int maxcadeia = 0, maxvalor = 0, seq = 0;
    while(cont < c->ultimo){
        cont2 = l->primeiro;
        cont3 = cont;
        while(cont2 < l->ultimo && cont3 < c->ultimo){
            if(!strcmp(c->vet[cont].dna, l->vet[cont2].dna) && seq == 0){
                pvalor = cont2;
                seq = 1;
                cont3++;
                maxvalor++;
            }else{
                if(!strcmp(c->vet[cont3].dna, l->vet[cont2].dna) && seq == 1){
                    cont3++;
                    maxvalor++;
                }else{
                    seq = 0;
                    cont3 = cont;
                    pvalor = 0;
                    maxvalor = 0;
                }
            }
            if(maxvalor > maxcadeia){
                maxcadeia = maxvalor;
                pcadeia = pvalor;
            }
            cont2++;
        }
        cont++;
    }
    PrintMaior(l, maxcadeia, pcadeia);
}