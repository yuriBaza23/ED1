#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    int **v[4];
    int *p;
    p = v;

    v[0] = &a;
    v[1] = &b;
    v[2] = &c;
    v[3] = &d;

    printf("%d\n", **(v + 0));
    printf("%d\n", **(v + 1));
    printf("%d\n", **(v + 2));
    printf("%d\n", **(v + 3));

    return 0;
}

