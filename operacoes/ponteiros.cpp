/**
 * Operadores de Ponteiros
 * 
 * Ponteiros são variáveis que armazenam endereços de memória.
 * Eles são usados para acessar e manipular dados diretamente na memória.
 */

/// Operador de endereço (&) - Retorna o endereço de memória de uma variável
int variavel = 42;
int* ponteiro = &variavel; // ponteiro agora armazena o endereço de 'variavel'

/// Operador de desreferenciação (*) - Acessa o valor armazenado no endereço apontado por um ponteiro
int valor = *ponteiro; // valor agora é 42, o conteúdo do endereço apontado por 'ponteiro'

/// Operador subscrito ([]) - Acessa elementos de um array usando um ponteiro
int array[5] = {10, 20, 30, 40, 50};
int* ponteiroArray = array; // O nome do array é um ponteiro para o primeiro elemento

/**
 * Operadores de Ponteiros em POO
 */

/**
 * Operador de membro de ponteiro (->) 
 * Acessa membros de uma classe ou struct através de um ponteiro
 */

#include <iostream>
struct Pessoa {
    std::string nome;
    int idade;
};

Pessoa* pessoaPtr = new Pessoa{"Alice", 30};
std::cout << pessoaPtr->nome; // Acessa o nome usando o operador ->
std::cout << pessoaPtr->idade; // Acessa a idade usando o operador ->

/**
 * Operador de acesso a membro (.) 
 * Acessa membros de uma classe ou struct diretamente
 */
Pessoa pessoaObj{"Bob", 25};
std::cout << pessoaObj.nome; // Acessa o nome usando o operador .

/**
 * Operador this-> 
 * Usado dentro de métodos de uma classe para acessar membros da própria instância
 */
class Carro {
public:
    std::string modelo;
    int ano;

    void mostrarInfo() {
        std::cout << "Modelo: " << this->modelo << ", Ano: " << this->ano << std::endl;
    }
};

