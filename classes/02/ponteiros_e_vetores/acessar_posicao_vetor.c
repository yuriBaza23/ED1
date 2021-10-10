#include <stdio.h>
#include <stdlib.h>

int main() {
    int cards[3] = { 4222, 5700, 4500 };
    int *p = cards;

    // Para acessar o 2 elemento

    printf("cards[1]: %d\n", cards[1]);
    printf("p[1]: %d\n", p[1]);
    printf("*(p + 1): %d\n", *(p+1));
    printf("*(v + 1): %d\n", *(v+1));

    return 0;
}