#include "lista.h"

int main(){
    Lista *l = malloc(sizeof(Lista));
    Lista *c = malloc(sizeof(Lista));
    FLVazia(l);
    FLVazia(c);
    Arquivo(l, "dna.txt");
    printf("Cadeia de DNA completa:\n");
    PrintL(l);
    Arquivo(c, "cadeia.txt");
    printf("Segmento de DNA:\n");
    PrintL(c);
    MaiorCadeia(l, c);
    return 0;
}