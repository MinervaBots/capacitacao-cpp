/**
 * Diferente dos arrays e vetores, a tuple é uma estrutura que pode conter diversos tipos de dados,
 * eu posso ter uma tuple com um int, um float, uma string, etc.
 * 
 * A tupla também é um objeto da standard library, ela foi introduzida no C++11 e melhorada no C++23!!!
 * 
 * Uma observação é que o índice deve ser sempre constante e uma tupla é imutável!
 * 
 * A tupla não é necessariamente contígua!
 */

 #include <tuple>

std::tuple<int, float, std::string> tupla(1, 3.14, "MinervaBots");

// Para acessar um item, temos que usar o método .get e não um índice
auto item = std::get<0>(tupla); // Isso retorna o índice 0 (1)