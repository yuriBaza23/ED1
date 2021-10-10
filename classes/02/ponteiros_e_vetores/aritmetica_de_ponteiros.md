## Aritmética de Ponteiros

### O que é
A aritmética de ponteiros diz que a soma de um endereço de memória não tem operações comuns em relação a aritmética de inteiros, por exemplo.
  
Se um endereço de memória é dado como *14587* e será soma do com o número *2*, se o tipo desse ponteiro for **int**, então o resultado será *1595*.
  
Isso se deve ao fato de que se o tipo de um ponteiro for int, os próximos dois elementos resultarão em um total de 8 bytes, levando em conideração que o tamanho de um tipo inteiro é de 4 bytes.