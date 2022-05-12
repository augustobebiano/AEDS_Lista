#include "lista.h"

int main(){
    Lista *l = malloc(sizeof(Lista));
    FLVazia(l);
    Arquivo(l);
    printf("\nLista completa:\n\n");
    PrintL(l);
    RemoveReplica(l);
    printf("\nLista sem replicas:\n\n");
    PrintL(l);
    return 0;
}