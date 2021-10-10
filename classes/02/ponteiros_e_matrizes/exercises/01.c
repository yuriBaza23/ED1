#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][2] = {
        { 1, 2 },
        { 3, 4 },
        { 5, 6 },
        { 7, 8 }
    };
    int *p = (int *) m;
    int *w;
    w = m[3];

    int num_linhas = 4;
    int num_colunas = 2;

    printf("USANDO O M:\n");
    for(int i = 0; i < num_linhas; i++) {
        for(int j = 0; j < num_colunas; j++) {
            printf("Endereço: %u. Número: %d\n", &m[i][j], m[i][j]);
        }
    }

    printf("\nUSANDO O P:\n");
    for(int i = 0; i < num_linhas * num_colunas; i++) {
        printf("Endereço: %u. Número: %d\n", p + i, *(p + i));
    }

    return 0;
}

