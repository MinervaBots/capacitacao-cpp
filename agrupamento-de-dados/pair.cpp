/**
 * O pair é uma estrutura da std que armazena dois valores diferentes, é uma estrutura bem simples
 * 
 * Ele também não é necessariamente contíguo por causa do Padding
 * 
 * O pair tem diversos métodos prontos para trabalhar com 2 itens, como comparação, atribuição, etc.
 */

#include <pair>

std::pair<int, std::string> par(1, "MinervaBots");

// Para acessar os itens, temos os métodos .first e .second
auto item1 = par.first; // Isso retorna o número 1
auto item2 = par.second; // Isso retorna a string "MinervaBots"