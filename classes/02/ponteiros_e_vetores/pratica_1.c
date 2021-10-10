#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[4] = { 10, 20, 30, 40 };
    int *p = v;

    int i = 200;
    int *pi = &i;

    int *x = &v[2];

    // Verificando p e v
    printf("%p\n", p);
    printf("%p\n\n", v);

    // Verificando pi e i
    printf("%d\n", *pi);
    printf("%d\n\n", i);

    // Verificando x e v[2]
    printf("%d\n", *x);
    printf("%d\n\n", v[2]);

    printf("ACESSANDO O INTEIRO 200\n");
    printf("i: %d\n", i);
    printf("*pi: %d\n", *pi);
    printf("pi[0]: %d\n", pi[0]);
    printf("*(pi + 0): %d\n\n", *(pi + 0));

    printf("ACESSANDO O INTEIRO 10\n");
    printf("v[0]: %d\n", v[0]);
    printf("p[0]: %d\n", p[0]);
    printf("*v: %d\n", *v);
    printf("*p: %d\n", *p);
    printf("*(v + 0): %d\n", *(v + 0));
    printf("*(p + 0): %d\n\n", *(p + 0));

    printf("ACESSANDO O INTEIRO 30\n");
    printf("v[2]: %d\n", v[2]);
    printf("p[2]: %d\n", p[2]);
    printf("*(v + 2): %d\n", *(v + 2));
    printf("*(p + 2): %d\n", *(p + 2));
    printf("*x: %d\n", *x);
    printf("*(x + 0): %d\n\n", *(x + 0));

    printf("ACESSANDO O INTEIRO 40\n");
    printf("v[3]: %d\n", v[3]);
    printf("p[3]: %d\n", p[3]);
    printf("*(v + 3): %d\n", *(v + 3));
    printf("*(p + 3): %d\n", *(p + 3));
    return 0;
}