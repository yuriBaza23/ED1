#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[3] = { 1, 2, 3 };
    int v2[3] = { 4, 5, 6 };
    int *p1;
    int *p2;

    p1 = v1;
    p2 = v2;

    int **m[2];
    m[0] = &v1[0];
    m[1] = &v2[0];

    int *pm;
    pm = &m;

    printf("%u\n", *p1);
    printf("%u\n", *(p1 + 1));
    printf("%u\n", *(p1 + 2));
    printf("%u\n", *p2);
    printf("%u\n", *(p2 + 1));
    printf("%u\n", *(p2 + 2));

    return 0;
}

