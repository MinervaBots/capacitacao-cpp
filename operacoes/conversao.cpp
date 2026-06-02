/**
 * Operadores de conversão de tipo (Type Cast)
 * 
 * Permitem converter um tipo de dado para outro.
 */

/// Conversão implícita (pode causar perda de dados)
int inteiro = 42;
float flutuante = inteiro; // 42.0

/// Conversão explícita (C-style cast)
float pi = 3.14159;
int inteiroPi = (int)pi; // 3

/// Conversão explícita (C++-style cast)
float pi = 3.14159;
int inteiroPi2 = static_cast<int>(pi); // 3

/// Conversão dinâmica (dynamic_cast) - Usada para conversão entre classes polimórficas
#include <iostream>
class Base {
public:
    virtual void funcaoVirtual() {}
};
class Derivada : public Base {
public:
    void funcaoVirtual() override {}
};
Base* basePtr = new Derivada();
Derivada* derivadaPtr = dynamic_cast<Derivada*>(basePtr);

/// Conversão de ponteiros para inteiros (reinterpret_cast)
#include <cstdint>
void* exPtr = basePtr; // Ponteiro genérico
uintptr_t endereco = reinterpret_cast<uintptr_t>(exPtr);
// Converte o ponteiro para um inteiro representando o endereço de memória

/// Conversão de constantes (const_cast)
const int valorConstante = 10;
int* valorModificavel = const_cast<int*>(&valorConstante);
*valorModificavel = 20; // Agora valorConstante é 20


