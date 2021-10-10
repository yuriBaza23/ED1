#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 10;
    int *ponteiro;
    ponteiro = &numero;

    ponteiro = ponteiro + 1;

    // Como o tipo int tem 4 bytes, então o resultado da soma será o endereço de memória + o tamanho de um elemento int
    
    printf("%u\n", &numero); // Endereço de memória de número
    printf("%u\n", ponteiro); // Resultado da soma (Deve ser igual ao print anterior mais 4)

    return 0;
}