/**
 * Operações Bitwise manipulam os bits dos operandos
 * 
 * Esses operadores são usados principalmente para operações de baixo nível, 
 * como manipulação de hardware, criptografia e otimização de desempenho.
 * 
 * Lembre-se de que os operadores bitwise operam em nível de bit, então eles são aplicados a cada bit individualmente.
 * 
 * Atenção: Esses operadores podem ser confusos e causar bugs difíceis de detectar, então use-os com cuidado!
 * 
 * No C++, os operadores bitwise são:
 * - AND bit a bit (&)
 * - OR bit a bit (|)
 * - XOR bit a bit (^)
 * - NOT bit a bit (~)
 * - Deslocamento à esquerda (<<)
 * - Deslocamento à direita (>>)
 * - Operadores de atribuição bitwise (&=, |=, ^=, <<=, >>=)
 */

#include <cstdint>
uint8_t a = 0b00001100; // 12
uint8_t b = 0b00001010; // 10

/**
 * Operação AND bit a bit (&)
 * Compara bit por bit. Retorna 1 apenas se AMBOS os bits forem 1.
 * Muito usado para "mascarar" ou testar se um bit específico está ligado.
 */
uint8_t bitwiseAnd = a & b;
// a: 00001100
// b: 00001010
// -----------
// &: 00001000 (Em decimal: 8)

/**
 * Operação OR bit a bit (|)
 * Retorna 1 se PELO MENOS UM dos bits for 1.
 * Muito usado para "setar" (ligar) bits específicos em registradores.
 */
uint8_t bitwiseOr = a | b;
// a: 00001100
// b: 00001010
// -----------
// |: 00001110 (Em decimal: 14)

uint8_t registrador_i2c = 0b01000000;
uint8_t MASCARA_LIGAR_CLOCK = 0b00000001;
registrador_i2c = registrador_i2c | MASCARA_LIGAR_CLOCK;
// Resultado: 0b01000001 (O bit do clock ligou, e o resto continuou intacto!)

/**
 * Operação XOR (OR Exclusivo) bit a bit (^)
 * Retorna 1 apenas se os bits forem DIFERENTES. 
 * Se forem iguais (0 e 0, ou 1 e 1), retorna 0.
 * Usado para alternar (inverter) o estado de um bit (toggle)
 */
uint8_t bitwiseXor = a ^ b;
// a: 00001100
// b: 00001010
// -----------
// ^: 00000110 (Em decimal: 6)

/// Alternando o estado de um LED para ele piscar pelo registrador do GPIO
uint32_t nivel_saida = 0b00000000;
uint32_t MASCARA_LED = 0b00000010; // LED no bit 1

nivel_saida ^= MASCARA_LED; // 0b00000010 (LED LIGOU)
nivel_saida ^= MASCARA_LED; // 0b00000000 (LED DESLIGOU)
nivel_saida ^= MASCARA_LED; // 0b00000010 (LED LIGOU)
// É exatamente isso que a função gpio_set_level() faz no mais baixo nível!

/**
 * Operação NOT bit a bit (~) - Complemento de 1
 * É um operador unário! Ele inverte todos os bits da variável.
 * Onde tem 0 vira 1, onde tem 1 vira 0.
 */
uint8_t bitwiseNot = ~a;
// a: 00001100
// -----------
// ~: 11110011 (Em decimal: 243)

/// Vamos desativar algo no registrador com NOT e AND
uint8_t registrador_periferico = 0b11111111; // Tudo ligado
uint8_t MASCARA_DESATIVAR = 0b00000100; // Queremos desativar o bit 2

registrador_periferico = registrador_periferico & ~(MASCARA_DESATIVAR);
// Resultado: 0b11110111 (O bit 3 virou 0, os outros continuaram 1)

/**
 * Operação Shift Left - Deslocamento para a Esquerda (<<)
 * Empurra todos os bits para a esquerda. Os espaços à direita viram zeros.
 * Efeito matemático prático: Multiplica o número por 2 a cada casa deslocada.
 */
uint8_t shiftLeft = a << 1;
// a:  00001100 (12)
// <<: 00011000 (24)

/// Potências de base 2!
uint8_t potencia2_0 = 1 << 6; // 2^6 = 64 (0b01000000)

/// O ESP32 usa uma máscara de 64 bits (ULL) para configurar os GPIOs
uint64_t pinos_saida_mask = (1ULL << GPIO_NUM_2) | (1ULL << GPIO_NUM_4) | (1ULL << GPIO_NUM_5);
// Agora o ESP vai ligar apenas os GPIOs 2, 4 e 5, e deixar o resto desligado

/**
 * Operação Shift Right - Deslocamento para a Direita (>>)
 * Empurra todos os bits para a direita. O que cai para fora da variável é descartado.
 * Efeito matemático prático: Divide o número por 2 a cada casa deslocada.
 */
uint8_t shiftRight = a >> 1;
// a:  00001100 (12)
// >>: 00000110 (6)

/// Dividindo por 2!
uint8_t divisao2_0 = 64 >> 1; // 64 / 2 = 32
uint8_t divisao2_1 = 64 >> 2; // 64 / 4 = 16

/**
 * Operadores de atribuição bitwise (&=, |=, ^=, <<=, >>=)
 * Eles funcionam exatamente como os operadores de atribuição comuns, só que manipulando os bits.
 */

/// Atribuição OR (|=)
uint8_t config_motor = 0b00000001; // Motor já está com o bit 0 ligado
uint8_t MASCARA_VELOCIDADE_MAXIMA = 0b00001000; // Queremos ligar o bit 3

config_motor |= MASCARA_LIGAR_TURBO; // Mesma coisa que config_motor = config_motor | MASCARA_VELOCIDADE_MAXIMA;
// config_motor agora é: 0b00001001

/// Atribuição AND (&=)
uint8_t status_sensores = 0b11111111; // Todos os sensores estão ativos (tudo 1)
uint8_t MASCARA_DESLIGAR_SENSOR2 = 0b00000100; // O sensor 2 está no bit 2

status_sensores &= ~MASCARA_DESLIGAR_SENSOR2;
// status_sensores agora é: 0b11111011

/// Atribuição XOR (^=)
uint8_t estado_led = 0b00000000; // LED começa apagado
uint8_t MASCARA_PISCAR = 0b00000001; // O LED está no bit 0

estado_led ^= MASCARA_PISCAR; // 0b00000001
estado_led ^= MASCARA_PISCAR; // 0b00000000

/// Atribuição Shift Left (<<=)
uint8_t valor_multiplicar = 0b00000011; // Em decimal: 3

valor_multiplicar <<= 2; 
// valor_multiplicar agora é: 0b00001100 (Em decimal: 12)

/// Atribuição Shift Right (>>=)
uint8_t brilho_tela = 0b10000000; // Em decimal: 128 (Bits altos setados)

brilho_tela >>= 4; 
// brilho_tela agora é: 0b00001000 (Em decimal: 8)

/**
 * Coisas para se atentar:
 * - A diferença entre os operadores lógicos e os bit a bit.
 * - Shift tem comportamentos que podem quebrar o programa.
 * - Precedência de operadores pode te enganar.
 */

/// Lógico vs Bit a Bit
int x = 1; // Em binário: 00000001
int y = 2; // Em binário: 00000010
bool logico = (x && y);   // Resultado é TRUE (ambos são valores diferentes de zero)
int bitwise = (x & y);    // Resultado é 0 (00000001 & 00000010 = 00000000)

/// Comportamento Indefinido nos Shifts (SINISTRO) - Undefined Behavior (UB)
int c = 10;
// int erroAbsurdo = c << -1;  // O compilador vai querer te matar né
// int erroAbsurdo2 = c >> 35; // Se o int tem 32 bits, como desloca 35?

/// Cuidado com os sinais!
int8_t negativo = -128; // 10000000 em binário
int8_t shiftSinal = negativo >> 1; // O resultado costuma ser 11000000 (-64), mantendo o sinal.

/// Precedência de maluco (Sempre use parênteses!)
// Os operadores relacionais (==) têm prioridade MAIOR que os bitwise (&, |, ^).
bool armadilha = a & b == 0b00001010; // Faz a & (b == 0b00001010)
bool funciona = (a & b) == 0b00001000; // Avalia o bitwise primeiro. Correto!