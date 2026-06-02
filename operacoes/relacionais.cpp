/**
 * Operadores Relacionais fazem comparações e retornam booleano
 * 
 * Muito cuidado com a ordem e com o parênteses aqui!
 */

int a = 10, b = 20;

/**
 * Operação de igualdade (==)
 * Verdadeiro se os operandos forem iguais
 */
bool igual = (a == b); // false
bool igual2 = (a == 10); // true

/**
 * Operação de desigualdade (!=)
 * Verdadeiro se os operandos forem diferentes
 */
bool diferente = (a != b); // true
bool diferente2 = (a != 10); // false

/**
 * Operação de maior que (>) e menor que (<)
 * Verdadeiro se o operando da esquerda for maior ou menor que o da direita
 */
bool maior = (a > b); // false
bool menor = (a < b); // true

/**
 * Operação de maior ou igual (>=) e menor ou igual (<=)
 * Verdadeiro se o operando da esquerda for maior ou igual ou menor ou igual que o da direita
 */
bool maiorOuIgual = (a >= b); // false
bool menorOuIgual = (a <= b); // true

/**
 * Operação Spaceship (<=>)
 * 
 * Disponível apenas a partir do C++20!!!
 * 
 * Retorna um objeto de ordenação do tipo std::strong_ordering, std::weak_ordering ou std::partial_ordering 
 * que depende do tipo dos operandos!
 */
#include <compare> // Necessário para usar o operador <=> e os tipos de comparação

int a = 10, b = 20; // inteiros retornam std::strong_ordering

auto spaceship = (a <=> b); // Retorna algo menor que 0
if (spaceship < 0) { /* Verdadeiro! */ }

auto spaceship2 = (a <=> 10); // Retorna algo igual a 0
if (spaceship2 == 0) { /* Verdadeiro! */ }

auto spaceship3 = (b <=> a); // Retorna algo maior que 0
if (spaceship3 > 0) { /* Verdadeiro! */ }

/// É possível fazer com double/float também!
#include <limits>

double x = 3.14, y = 2.71; // doubles retornam std::partial_ordering
double z = std::numeric_limits<double>::quiet_NaN(); // NaN é um valor especial que representa "Not a Number"

auto spaceship4 = (x <=> y); // Retorna algo maior que 0
if (spaceship4 > 0) { /* Verdadeiro! */ }

auto spaceship5 = (x <=> 3.14); // Retorna algo igual a 0
if (spaceship5 == 0) { /* Verdadeiro! */ }

auto spaceship6 = (y <=> x); // Retorna algo menor que 0
if (spaceship6 < 0) { /* Verdadeiro! */ }

auto spaceship7 = (x <=> z); // Retorna std::partial_ordering::unordered
if (spaceship7 == std::partial_ordering::unordered) { /* Verdadeiro! */ }
if (spaceship7 < 0) { /* Falso! */ }
if (spaceship7 > 0) { /* Falso! */ }
if (spaceship7 == 0) { /* Falso! */ }


