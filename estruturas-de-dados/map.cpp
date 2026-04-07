/**
 * O map é uma estrutura de árvore (red-black tree) que armazena pares de chave-valor, 
 * onde cada chave é única e mapeada para um valor correspondente. (Dicionário)
 * 
 * A organização dos dados é feita por hierarquia:
 * - Cada nó terá uma chave-valor
 * - Cada nó apontará para 3 lugares (filhos [2] e pai)
 * - Cada nó tem um bit de controle para balanceamento para equilíbrio (cores)
 * 
 * Custa muita memória!
 * [Dados (chave + valor) + Ponteiros x 3 (12 bytes em 32bits) + Metadados (4 bytes)] x Nós
 * 
 * Atenção: No map a chave é constante!
 */

#include <map>

std::map<std::string, int> robosTrofeu = {
    {"Zé Pequeno", 10},
    {"Bigode", 8},
    {"Atena", 4},
    {"Atlas", 5}
};

/**
 * O unordered_map é igual ao map, porém não é armazenado em árvore e sim em uma tabela hash,
 * o que traz uma vantagem de tempo de acesso O(1) para operações de busca, inserção e remoção
 * 
 * Aqui a memória terá:
 * Buckets (arrays de ponteiros)
 * Função hash (para calcular o índice do bucket)
 * Dados (chave-valor)
 * Ponteiros (para lidar com colisões, geralmente usando encadeamento)
 * Metadados (para controle de tamanho, capacidade, etc.)
 * 
 * Ou seja, o custo de memória é alto e geralmente maior que o map padrão, mas sua busca é
 * muito mais rápida computacionalmente, afinal é O(1), enquanto o map é O(log n)
 */

#include <unordered_map>

std::unordered_map<std::string, int> robosTrofeuUnordered = {
    {"Zé Pequeno", 10},
    {"Bigode", 8},
    {"Atena", 4},
    {"Atlas", 5}
};

