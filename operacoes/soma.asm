// Código em Assembly de soma em Xtensa (ESP32)

l32r a2, endereco_de_a      // Carrega o endereço (ponteiro) da variável 'a' no registrador a2
l32i a3, a2, 0              // Carrega o valor contido nesse endereço para o registrador a3

l32r a4, endereco_de_b      // Carrega o endereço da variável 'b' no registrador a4
l32i a5, a4, 0              // Carrega o valor contido nesse endereço para o registrador a5

add  a6, a3, a5             // Soma a3 com a5 e guarda o resultado em a6 (a6 = a3 + a5)

l32r a7, endereco_de_c      // Carrega o endereço da variável 'c' no registrador a7
s32i a6, a7, 0              // Armazena o valor de a6 (resultado da soma) no endereço de 'c'

/*
Em C++:

int a = 5;
int b = 10;
int c = a + b;
*/

