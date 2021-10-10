#include <stdio.h>
#include <stdlib.h>

int main() {
    // Inicialização de um vetor de 3 elementos com os números 100, 101, 102
    int register_number[3] = { 100, 101, 102 };
    // Declaração de um ponteiro de int chamado pointer_register_number
    int *pointer_register_number; 

    pointer_register_number = register_number;

    // Ambos mostram o endereço de memória
    printf("Endereço de memória do primeiro elemento: %u\n", register_number);
    printf("Endereço de memória do primeiro elemento: %u\n", pointer_register_number);

    printf("Endereço de memória do vetor: %u\n", &register_number);
    printf("Endereço de memória do ponteiro: %u\n", &pointer_register_number);

    printf("Valor do primeiro elemento: %u\n", *register_number);
    printf("Valor do primeiro elemento: %u\n", *pointer_register_number);

    printf("Valor do primeiro elemento: %u\n", register_number[0]);
    printf("Valor do primeiro elemento: %u\n", pointer_register_number[0]);
    return 0;
}