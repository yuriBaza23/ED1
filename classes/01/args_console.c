#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A entrada será feita por argumentos passados na execução da aplicação e a saída será feita pelo console

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

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