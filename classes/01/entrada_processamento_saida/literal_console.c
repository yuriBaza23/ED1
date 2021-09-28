#include <stdio.h>
#include <math.h>

// A entrada será feita por "hard coding" e a saída será feita pelo console

int main() {
    int a = 1;
    int b = 5;
    int c = 4;

    printf("Aplicação para resolver expressões de 2º grau\n");

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