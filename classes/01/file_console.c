#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A entrada será feita pela leitura de um arquivo e a saída será feita pelo console
// OBS: O arquivo se encontra no diretório arquives dessa mesma pasta, intitulado como arquive.in

int main() {
    int a, b, c;
    
    FILE *arquivo_entrada = fopen("classes/01/arquives/arquive.in", "r");
    fscanf(arquivo_entrada, "%d %d %d", &a, &b, &c);
    fclose(arquivo_entrada);

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