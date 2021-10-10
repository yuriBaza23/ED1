### Teoria Aula 2

## Declaração de Uma Struct 
Vamos relembrar o funcionamento de matrizes (arrays bidimensionais)
~~~ c
struct Aluno {
    unsigned int ra;
    char nome[12];
    float notas[3];
};

struct Aluno a1 = { 100, "Davi", { 6.5, 7.0, 6.1 } };
~~~
  
Uma matriz é armazena na memória como um vetor contínuo com uma divisão lógica a cada X elementos que são definidos pelo segundo colchete da declaração e cada elemento dessa divisão pode ser visto como vetores que possuem cada um, esses X elementos.
  
Logo, a lógica de colchetes de uma matriz é definida pela **endereço inicial + ((linha * qtd de colunas) + coluna)**.
  
Dessa forma, para acessar `m[2][1]`, temos que se #00 é o endereço inicial, #00 + ((2 * 2) + 1) = #00 + (4 + 1) = #00 + 5 = #00 + (5 * 2 pq é short int) = #10. Logo o colchetes será aplicado no endereço 10 do vetor contínuo aramazenado na memória, que resulta em 60.
 
Quando fazemos o casting de uma matriz, podemos utilizar a lógica de ponteiros e vetores nela.
~~~ c
short int m[3][2] = {
    { 10, 20 },
    { 30, 40 },
    { 50, 60 }
};

short int *p1 = (short int*) m;
// Resulta em 60
printf("%d", p1[5]);
// Também resulta em 60
printf("%d", *(p1 + 5));
~~~

### Uso do Typedef
O Typedef define um sinônimo para um tipo e omite determinadas palavras ao utilizá-lo. Observe:
~~~ c
typedef struct {
    unsigned int ra;
    char nome[12];
    float notas[3];
} Aluno;

Aluno a1;
a1.ra = 100;
strcpy(a1.nome, "Davi");
a1.notas[0] = 6.5; 
~~~
  
### Usando Ponteiros