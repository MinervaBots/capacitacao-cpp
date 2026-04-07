/**
 * O set também é uma estrutura de árvore, a sua principal diferença para o map
 * é que ela não armazena chave-valor, ela armazena apenas os valores
 * 
 * Aqui a organização dos dados é feita por hierarquia:
 * - Cada nó terá um valor
 * - Cada nó apontará para 3 lugares (filhos [2] e pai)
 * - Cada nó tem um bit de controle para balanceamento para equilíbrio (cores)
 * 
 * O tamanho em memória é parecido com o map, só tira o valor da chave
 * 
 * A sua vantagem é que ele não permite valores duplicados e sua busca é O(log n)
 * Atenção: No set o valor é constante!
 */

#include <set>

std::set<int> set = {1, 2, 3, 4, 5}; // Isso cria um set com os itens de 1 a 5

/**
 * A ideia do unordered_set é a mesma do unordered_map, ele é uma estrutura de tabela hash,
 * só que agora para o set
 */

#include <unordered_set>

std::unordered_set<int> unorderedSet = {1, 2, 3, 4, 5}; // Isso cria um unordered_set com os itens de 1 a 5

