/**
 * O extern é um recurso que diz para o compilador que a variável ou função existe, mas está definida em outro lugar
 * 
 * É útil para usar variáveis que são declaradas na main, já que a main não pode ser incluída em outros arquivos
 * 
 * Também é usada para em C++ ter uma função puramente em C (essencial para o ESP-IDF, já que o framework é em C)
 */

// main.cpp
extern int variavelGlobal = 42; // agora eu posso usar essa variável em outros arquivos

extern "C" void main(void) {
    // código da main
}