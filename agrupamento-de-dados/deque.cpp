/**
 * O deque (Double-Ended Queue) é uma estrutura complexa de dados que tenta ser 
 * uma mistura de vector e list
 * 
 * Ele é uma estrutura de dados dinâmica, ou seja, seus dados ficam no HEAP e 
 * não é contígua
 * 
 * A sua estrutura são vários chunks (blocos), cada chunk é um array de um tamanho 
 * específico e esses chunks estão conectados por ponteiros, igual a list, mas cada chunk 
 * é um array, igual o vector
 * 
 * Ele possui:
 * Um mapa, que é um array de ponteiros para os chunks;
 * Os chunks, que são blocos de memória no Heap (contendo todos os dados);
 * 
 * Ele é vantajoso para inserções nas pontas e para acesso aleatório, fazendo isso em O(1)
 * Ele é desvantajoso para inserções no meio, fazendo isso em O(n) (igual o vector e a list)
 */

#include <deque>

std::deque<int> deque = {1, 2, 3, 4, 5}; // Isso cria um deque com os itens de 1 a 5

// Para acessar os itens, eu posso acessar diretamente por índice, igual o vector
auto item = deque[2]; // Isso retorna o número 3 (o índice começa em 0)

// Seus métodos são bem parecidos com o vector e a list

