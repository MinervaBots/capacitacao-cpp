/**
 * O list é uma estrutura de dados homogênea e não contígua.
 * Sua função é ser uma lista duplamente ligada, com um nó em cada lado (Doubly Linked List)
 * 
 * Ela é dinâmica e seus dados ficam no HEAP! (em qualquer lugar)
 * 
 * Os elementos são conectados por ponteiros que servem de elos
 * 
 * A vantagem aqui é a inserção e remoção de elementos, em qualquer posição.
 * Por não ser contígua, não tem realocação de memória e essa operação vai ter custo O(1)
 * Não é possível acessar indíces específicos, para acessar um item, é necessário iterar a lista, o que tem custo O(n)
 */

 #include <list>

std::list<int> lista = {1, 2, 3, 4, 5}; // Isso cria uma lista com os itens de 1 a 5

/**
 * O custo de memória é alto! A lista armazena:
 * Os dados (no exemplo acima 4 bytes x 5 itens = 20 bytes)
 * Os ponteiros next (4 bytes (em 32bits) x 5 itens = 20 bytes)
 * Os ponteiros prev (4 bytes (em 32bits) x 5 itens = 20 bytes)
 * Total: 60 bytes (isso é um exemplo, o custo de memória pode variar dependendo do sistema e da implementação da std)
 */

// Para acessar os itens, eu preciso iterar a lista, não tem como acessar diretamente
for (int item : lista) {} // Isso é um for de iteração, ele vai iterar a lista e acessar cada item

// A std tem diversos métodos para facilitar a manipulação da lista, como:
lista.push_back(6) // adiciona o item 6 no final da lista
lista.push_front(0) // adiciona o item 0 no início da lista
lista.pop_back() // remove o último item da lista
lista.pop_front() // remove o primeiro item da lista
lista.insert(posicao, valor) // insere um valor em uma posição específica da lista
lista.erase(posicao) // remove um item em uma posição específica da lista
lista.clear() // limpa a lista, removendo todos os itens
lista.size() // retorna o tamanho da lista
lista.empty() // retorna se a lista está vazia ou não
lista.front() // retorna o primeiro item da lista
lista.back() // retorna o último item da lista

/**
 * A foward_list é uma variação da list, mas com apenas uma ligação (Single Linked List)
 * ou seja, ela tem apenas um ponteiro next, não tem o prev. (aponta apenas para o próximo item)
 * 
 * Em funcionalidade é bem parecida com a list, mas tem um custo de memória menor (apenas subtraindo os ponteiros prev)
 */

#include <forward_list>

std::forward_list<int> forwardLista = {1, 2, 3, 4, 5}; // Isso cria uma forward_list com os itens de 1 a 5

