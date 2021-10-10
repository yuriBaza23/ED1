#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[4] = { 1, 2, 3, 4 };
    int i = 30;

    int *x = &i;
    int *p;
    int *w = &v[2];
    p = v;

    // Usando aritmética de ponteiros
    printf("%d\n", *(p + 0)); // 1
    printf("%d\n", *(p + 1)); // 2
    printf("%d\n", *(p + 2)); // 3
    printf("%d\n", *(p + 3)); // 4

    printf("p: %u\n", p);
    printf("v: %u\n", v);
    printf("&v[0]: %u\n", &v[0]);
    printf("v + 1: %u\n", v + 1);
    printf("*(v + 2): %u\n", *(v + 2));
    printf("w: %u\n", w);
    printf("*w: %u\n", *w);
    printf("w[1]: %u\n", w[1]);
    printf("x: %u\n", x);
    printf("&x: %u\n", &x);
    printf("*x: %u\n", *x);
    printf("x[0]: %u\n", x[0]);
    printf("p + 3: %u\n", p + 3);
    printf("&p[3]: %u\n", &p[3]);
    printf("*(p + 3): %u\n", *(p + 3));
    printf("p[3]: %u\n", p[3]);

    return 0;
}

