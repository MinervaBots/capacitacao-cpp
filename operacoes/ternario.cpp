/**
 * Operador Ternário (?:)
 * 
 * É uma forma compacta de escrever uma expressão condicional
 */

int a = 10, b = 20;
/**
 * Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso
 * A condição é avaliada primeiro. Se for verdadeira, o resultado é o valor_se_verdadeiro; caso contrário, é o valor_se_falso.
 */
int maximo = (a > b) ? a : b; // maximo será 20, pois a > b é falso
int minimo = (a < b) ? a : b; // minimo será 10, pois a < b é verdadeiro

