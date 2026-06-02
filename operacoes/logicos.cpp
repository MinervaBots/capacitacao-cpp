/**
 * Operadores Lógicos retornam valor booleano
 */

/**
 * Operação de AND lógico (&&)
 * Verdadeiro se ambos os operandos forem verdadeiros
 */
bool andResult = true && true; // true
bool andResult2 = false && true; // false
bool and = false && false; // false

/**
 * Operação de OR lógico (||)
 * Verdadeiro se pelo menos um dos operandos for verdadeiro
 */
bool orResult = true || true; // true || true -> true
bool orResult2 = false || true; // false || true -> true
bool orResult3 = false || false; // false || false -> false

/**
 * Operação de NOT lógico (!)
 * Inverte o valor lógico do operando
 */
bool notResult = !true; // false
bool notResult2 = !false; // true

/// Atenção: && tem precedência sobre ||

/// O C++ faz uma otimização chamada curto-circuito para os operadores lógicos
// O segundo operando não é calculado, resultado é sempre false
bool curtoCircuito = false && (1 / 0 == 0);
// O segundo operando não é calculado, resultado é sempre true
bool curtoCircuito2 = true || (1 / 0 == 0);