#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A entrada será feita pela leitura de um arquivo e a saída será feita por arquivo
// OBS: O arquivo se encontra no diretório arquives dessa mesma pasta, intitulado como arquive.in

int main() {
    int a, b, c;
    
    // Note a diferença desse arquivo para o arquivo "file_file.c"
    // Basicamente as operações de scanf e printf são redirecionadas para o arquivo.
    freopen("classes/01/arquives/arquive.in", "r", stdin);
    freopen("classes/01/arquives/arquive2.out", "w", stdout);

    printf("Aplicação para resolver expressões de 2º grau\n");

    scanf("%d %d %d", &a, &b, &c);

    float delta = pow(b, 2) - (4*a*c);

    if(delta < 0) {
        printf("\nA equação não possui raízes reais\n");
        return 0;
    }

    float xOne = (-b + sqrt(delta))/2*a;
    float xTwo = (-b - sqrt(delta))/2*a;

    printf("{%.2f, %.2f}\n", xOne, xTwo);

    return 0;
}