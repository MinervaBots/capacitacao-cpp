/**
 * O using é a versão moderna e melhorada do typedef, introduzida no C++11
 * 
 * Ele faz exatamente a mesma coisa que o typedef (cria apelidos), mas possui uma sintaxe muito mais 
 * amigável e legível, parecendo uma atribuição de variável comum (using NovoNome = TipoExistente;)
 * 
 * A principal vantagem do using sobre o typedef é que ele suporta Templates (vamos ver isso nas aulas de função!)
 * 
 * Como tudo que é moderno no C++, é recomendado usar o using e não o typedef
 */

// Sintaxe muito mais clara que o typedef para criar apelidos simples
using Pino = uint8_t;
using Millis = unsigned long;

void configurarPino(Pino pino) {
    pinMode(pinoAlgo, OUTPUT);
}