## Ponteiros

### O que é
 
O ponteiro é como uma varíavel. A diferença é que ao invez de aramzenar um valor inteiro ou de qualquer outro tipo, ele armazena o _endereço_ em que a variável que armazena o valor está.

Um ponteiro é definido pelo **<tipo que aponta>** *nome = &_variavel que tem o valor_.
  
Observe o código:
~~~c
int qtde = 3;
int *p = &qtde;
~~~
 
Expressão | Valor | Tipo
--------- | ----- | -----
qtde      | 3     | int
&qtde     | #098  | int *
p         | #098  | int *
*p        | 3     | int
&p        | #789  | int **
 
Observe que o ponteiro armazena uma memória e que ao colocar _*p_, é recuperado o valor armazenado pela variável que ele aponta.