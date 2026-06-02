/**
 * Operadores aritméticos são usados para realizar operações matemáticas básicas em um programa
 * No C++ eles funcionam exatamente como na matemática.
 */

int a = 10;
int b = 30;

/**
 * Operação de adição (+)
 */
int soma = a + b;

/**
 * Operação de subtração (-)
 */
int subtracao = a - b;

/**
 * Operação de multiplicação (*)
 */
int multiplicacao = a * b;

/**
 * Operação de divisão (/)
 */
int divisao = b / a;

/// Operação de módulo (%) - Resto da divisão
int modulo = b % a;


/**
 * Coisas para se atentar:
 * - Existe precedência entre os operadores
 * - É possível quebrar o hardware com operações aritméticas
 */

/// Atenção na precedência (multiplicação e divisão vem primeiro que adição e subtração)
int algo = a + b * 2;
int algo2 = (a + b) * 2;

/// Divisão por zero (SINISTRO) - Causa Hard Fault
int erroAbsurdo = a / 0; // Travar o chip
int erroAbsurdo2 = a % 0; // Mesma coisa

/// Divisão por inteiros dá inteiro!
int divisaoInteira = 5 / 2; // Resultado é 2, não 2.5
float divisaoFloat = 5 / 2; // Resultado é 2.0!!!!!!!!!!!!!!!
float divisaoFloat2 = 5.0 / 2; // Aqui é true, vai dar 2.5

/// Overflow e Underflow
uint8_t overflow = 255 + 1; // Resultado é 0 (overflow)
uint8_t underflow = 0 - 1; // Resultado é 255 (underflow)


/**
 * Operadores unários aritméticos
 * 
 * A ordem importa!
 */

/// Incremento (++)
int c = 5;
int incremento = ++c; // c é incrementado antes de ser usado, resultado é 6
int d = 5;
int incremento2 = d++; // d é usado antes de ser incrementado, resultado é 5, depois d vira 6

/// Decremento (--)
int e = 5;
int decremento = --e; // e é decrementado antes de ser usado, resultado é 4
int f = 5;
int decremento2 = f--; // f é usado antes de ser decrementado, resultado é 5, depois f vira 4