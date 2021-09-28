#include <stdio.h>
#include <math.h>

// A entrada e a saída serão feitos pelo console

int main() {
    int a, b, c;

    printf("Aplicação para resolver expressões de 2º grau\n\n");
    printf("Informe o a, b e c nessa ordem\n");
    scanf("%d %d %d", &a, &b, &c);

    float delta = pow(b, 2) - (4*a*c);

    if(delta < 0) {
        printf("\nA equação não possui raízes reais\n");
        return 0;
    }

    float xOne = (-b + sqrt(delta))/2*a;
    float xTwo = (-b - sqrt(delta))/2*a;

    printf("\nO resultado da expressão é {%.2f, %.2f}\n", xOne, xTwo);

    return 0;
}