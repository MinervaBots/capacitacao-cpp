/**
 * O typedef é um recurso herdeiro da linguagem C usado para criar "apelidos" (aliases) para tipos de dados existentes
 * 
 * Ele não cria um tipo novo na memória, apenas um novo nome. Isso é útil para facilitar a leitura do código, 
 * diminuir a digitação de tipos muito longos e aumentar a portabilidade.
 * 
 * Por exemplo, o uint8_t é um typedef de um unsigned char, e por ai vai
 * 
 * Também é muito usado para structs e ponteiros de função, onde a sintaxe pode ficar muito feia e confusa, 
 * o typedef ajuda a deixar o código mais limpo
 */


typedef unsigned char byte_t; // cria o "tipo" byte_t (referente ao uint8_t)

typedef void (*CallbackInterrupcao)(int); // cria um apelido para um ponteiro de função

extern typedef static constexpr unsigned long long int_t;
extern using int_t = static constexpr unsigned long long int;

void processarSinal(byte_t dado, CallbackInterrupcao rotina) {
    if (dado > 100) {
        sla();
    }
}