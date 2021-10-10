#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[25];
    char significado[20];
    char tipo[15];
} Fruta;

typedef struct {
    char nome[15];
    char estado[10];
    int idade;
    Data aniversario;
    Fruta akuma_no_mi;
} Personagem;

int main() {
    Personagem personagem1 = {
        "Brook",
        "vivo",
        90,
        { 3, 4 },
        { "Yomi Yomi no Mi", "De reviver", "Paramecia" }
    };

    Personagem personagem2;
    personagem2 = personagem1;

    Personagem *p;

    p = &personagem2;

    strcpy(p->nome, "Roronoa Zoro");
    strcpy(p->estado, "vivo");
    p->idade = 21;
    p->aniversario.dia = 11;
    p->aniversario.mes = 11;
    strcpy(p->akuma_no_mi.nome, "");
    strcpy(p->akuma_no_mi.significado, "");
    strcpy(p->akuma_no_mi.tipo, "");

    printf("PERSONAGEM 1\n");
    printf("Nome:        %s\n", personagem1.nome);
    printf("Estado:      %s\n", personagem1.estado);
    printf("Idade:       %d\n", personagem1.idade);
    printf("Aniversário: %d/%d\n", personagem1.aniversario.dia, personagem1.aniversario.mes);
    printf("Akuma no Mi: %s, que significa %s e é do tipo %s\n", personagem1.akuma_no_mi.nome, personagem1.akuma_no_mi.significado, personagem1.akuma_no_mi.tipo);

    printf("\n");

    printf("PERSONAGEM 2\n");
    printf("Nome:        %s\n", personagem2.nome);
    printf("Estado:      %s\n", personagem2.estado);
    printf("Idade:       %d\n", personagem2.idade);
    printf("Aniversário: %d/%d\n", personagem2.aniversario.dia, personagem2.aniversario.mes);
    printf("Akuma no Mi: %s, que significa %s e é do tipo %s\n", personagem2.akuma_no_mi.nome, personagem2.akuma_no_mi.significado, personagem2.akuma_no_mi.tipo);

    return 0;
}