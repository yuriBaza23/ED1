### Teoria Aula 2

## Funcionamento Básico de Vetores
Antes de vermos a relação de ponteiros, vetores e memória, vamos relembrar qual é o funcionamento básico de vetores (arrays unidimensionais).
 
~~~ c
// Declaração de um vetor
int produto[5];

// Manipulação de um vetor
produto[0] = 5;
produto[1] = 10;
produto[2] = 15;
produto[3] = 20;
produto[4] = 25;
~~~
 
Observe que a declaração de um vetor é dada pelo *tipo* em que aramzena, o *nome* do vetor e a *quantidade* de elementos que ele armazena. Sua manipulação é dada usando *colchetes* para representar uma posição específica do array, onde ele começa em 0 e vai até a quantidade-1.
  
Abaixo, uma imagem sobre a representação do vetor.
![representation](https://github.com/yuriBaza23/ED1/blob/main/images/vetor_a02.png?raw=true)
 
## Organização na Memória
~~~ c
short int v1[3] = { 7, 8, 9 };
int v2[2] = { 5, 6 };
~~~
 
De acordo com o código nós temos:
  
Tipo      | Tamanho 
--------- | --------
short int | 2        
int       | 4       
  
É importante saber que o vetor é representado na memória com o endereço de memória do seu primeiro elemento. Dessa forma, o vetor só possui a necessidade de aramazenar esse dado.
  
Para saber o endereço de memória do restante dos elementos contidos no vetor é usada uma fórmula que relaciona a primeira posição, a posição do elemento que está querendo saber o endereço e o tamanho do tipo de cada elemento.
**posição inicial + (posição * tamanho do elemento)**

Levando em consideração que o vetor v1 é representado pelo endereço **#00** e que estamos mencionando `v1[2]`. De acordo com a fórmula:
#00 + ( 2 * 2) = #00 + 4 = #04.
  
### Envolvendo ponteiros
~~~ c
short int v1[3] = { 7, 8, 9 };
int v2[2] = { 5, 6 };

short int *p1;
int *p2;

p1 = v1;
p2 = v2;
~~~
  
Levando em conta a atribuição `p1 = v1;` e `p2 = v2;`, os ponteiros são equivalentes aos vetores, semanticamente falando.