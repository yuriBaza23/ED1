## Tipos primitivos

### Organização na memória

Ocupam uma sequência de bytes que são definidos a partir do tipo de dado.
 
~~~c
int a = 4;
double b = 2.5;
float c = 6.8;
char d = 'y';
~~~
 
Com base no código acima, a máquina aloca em uma espaço escolhido por ela na memória e insere o valor de entrada.
 
Variável | Tipo   | Espaço ocupado | Valor
-------- | ------ | -------------- | ------
a        | int    | 4 bytes        | 4
b        | double | 8 bytes        | 2.5
c        | float  | 4 bytes        | 6.8
d        | char   | 1 byte         | y
 
O endereço de memória de cada variável é definida como o **primeiro** byte ocupado pela variável e os demais bytes podem ser definidos *a partir* desse primeiro byte.

### Características

Na linguagem C as variáveis possuem:
- Tipo, pois C é uma linguagem fortemente tipada
- Nome
- Valor
- Endereço na memória, que é o o primeiro byte ocupado

Para adiquirir o endereço da memória  basta colocar o "& - e comercial" antes da variável.