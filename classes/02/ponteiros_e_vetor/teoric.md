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