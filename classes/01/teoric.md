### Teoria Aula 1
## Modelo de entrada, processamento e saída

Toda aplicação é composta de uma **Entrada**, de um **Processamento** e de uma **Saída**. As entradas são interações com o usuário onde ele informa os dados necessários para obter um resultado, que chamos de saída. Esses dados são tratados para que sejam devolvidos os valores esperados, esse tratamento chamamos de processamento.
  
Há uma maneira simples de implementar o modelo de *Entrada, processamento e saída*.
- Passo 1: Pensamos na saída nos perguntando qual é o resultado que eu espero. **O que eu quero?**
- Passo 2: Pensamos na entrada nos perguntando o que é necessário para atingir a saída. **O que eu tenho/preciso?**
- Passo 3: Penamos, por fim, no processamento nos perguntando como podemos atingir esse resultado. **Como eu faço?**

### Formas de entrada

Podemos obter dados das seguintes maneiras:
- Console: Utilisando a função *scanf* onde o usuário informa os dados necessários.
- Literal: Utlizando *atribuição direta* na variável, onde nós mesmos determinamos os dados necessários.
- Argumentos na execução: Utlizando _char *argv[]_ e passando os dados na própria execução da aplicação.
- Arquivos com dados adicionados: Utlizamos _fopen_ com operação de leitura e o _fscanf_ para obter os dados do arquivo informado.
- Arquivos com redirecionamento: Utilizamos o _freopen_ para redirecionar os dados de entrada.

### Formas de saída

Podemos mostrar o resultado esperado das seguintes maneiras:
- Console: Utilizando a função *printf* onde escrevemos o resultado no próprio console.
- Arquivo: Escrevemos o resultado em um arquivo utilizando o _fprintf_ depois de abrir o arquivo com a operação de escrita.