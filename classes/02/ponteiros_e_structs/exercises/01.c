#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[12];
    float preco;
} Produto;

int main() {
    Produto prod = { 1, "Teclado", 98.5 };
    Produto *p = &prod;

    int *pi = &prod.codigo;
    float *pf = &prod.preco;
    char *pc = &(prod.descricao);

    prod.codigo = 3;
    p->codigo = 2; // *(p.codigo)

    strcpy(prod.descricao, "Óculos");
    strcpy(p->descricao, "Caderno"); // *(p.descricao)

    prod.preco = 350.6;
    p->preco = 21.5; // *(p.preco)

    return 0;
}

