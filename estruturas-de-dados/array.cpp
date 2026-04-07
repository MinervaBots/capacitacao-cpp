/**
 * O array padrão é originário do C, e possui um funcionamento bem simples.
 * 
 * Ele é uma estrutura de dados que armazena um número fixo de elementos do mesmo tipo,
 * em uma sequência contígua na memória.
 * 
 * Cada elemento do array pode ser acessado diretamente por meio de um índice, que começa em 0.
 * 
 * O array pode ser considerado uma lista estática, como seu tamanho é definido no momento da criação,
 * ele não poderá ser alterado durante execução.
 */

/** 
 * Isso cria na memória um espaço para 10 inteiros, e os inicializa com os valores de 0 a 9
 * O arrayInt na verdade é um ponteiro para o primeiro elemento do array,
 * ou seja, o valor de arrayInt é o endereço do primeiro elemento (0)
 */
int arrayInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Isso vai ocupar 10 * 4 bytes na memória + 1 ptr

// No C++ eu também posso omitir o tamanho do array, e o compilador vai contar a quantidade de intens
int arrayInt2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// Array criado através de alocação dinâmica (vai ficar no HEAP!!!)
int *arrayInt3 = new int[10];
delete[] arrayInt3;
arrayInt3 = nullptr;

int* arrayPtr[2] = {nullptr, nullptr}; // Isso é um array de ponteiros
char nome[] = "Fróes"; // Isso é um array de char, ou seja, uma string
const char* nome2 = "Fróes"; // Posso reescrever o item acima assim


/**
 * Existe uma fórmula para acessar o índice de um array:
 * 
 * Elemento = Endereço do primeiro elemento + (tamanho do tipo * índice)
 * ** É por causa dessa fórmula que o índice começa em 0!!!!!!
 * 
 * Exemplo de acesso (abstraído ta bom):
 * Criei um array de 5 ints e seu primeiro elemento está no endereço 0x100
 * para acessar o terceiro elemento eu faço:
 * 0x100 + (4 bytes * 2) = 0x108 (aqui está meu endereço do terceiro elemento)
 */

int dois = arrayInt[2]; // O ínidice sempre começa em 0, então o 2 seleciona o terceiro elemento
int tres = *(arrayInt + 3); // Isso é equivalente a arrayInt[3], ou seja, o quarto elemento

// Se você passar o array como parâmetro de função, você passa o ponteiro via Decay:

void funcao(int arrayInt[]) {}
// Eu ainda consigo acessar o array normalmente, porém eu não sei mais o tamanho dele

// Arrays também podem ser multidimensionais, como matrizes:
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}; // A memória vai linearizar minha matriz!



/**
 * O array da standard library que veio no C++11 é uma estrutura de dados mais avançada, 
 * que oferece mais funcionalidades e segurança em relação ao array padrão.
 * 
 * Por baixo dos panos na standard library, o std::array é um conteiner wrapper, que nada mais é
 * que uma classe que cria um struct de arrays C-Style.
 * 
 * Ele reconhece seu próprio tamanho e não é um ponteiro (não tem Decay)
 */

#include <array>

std::array<int, 10> arrayStdInt; // Isso é um array de 10 inteiros
// Em quesito memória, tem o mesmo tamanho do array padrão
// Podendo ter até menos, pois ele não armazena ponteiros para o array

void funcao(std::array<int, 10> arrayStdInt) {}
// Aqui você não ta passando um ponteiro como parâmetro e sim o próprio array

// Para acessar os índices:
arrayStdInt[100] // Isso continua funcionando, então tem o mesmo problema do C-Style
arrayStdInt.at[100] // Por causa do método .at isso não funciona, é o jeito certo de acessar itens aqui

for (int item : arrayStdInt) {} // com array da std, eu posso utilizar esse estilo de for para iteração

// A std ainda vai ter diversos métodos para facilitar a manipulação do array

arrayStd.size() // Isso retorna o tamanho do array
arrayStd.fill(0) // Isso preenche o array com o valor 0
arrayStd.swap(outroArrayStd) // Isso troca os valores de um array com outro
arrayStd.empty() // Isso retorna se o array está vazio ou não
arrayStd.front() // Isso retorna o primeiro elemento do array
arrayStd.back() // Isso retorna o último elemento do array
arrayStd.data() // Isso retorna um ponteiro para o primeiro elemento do array
arrayStd.begin() // Isso retorna um iterador para o primeiro elemento do array
arrayStd.end() // Isso retorna um iterador para o elemento após o último elemento do array
arrayStd.cbegin() // Isso retorna um iterador constante para o primeiro elemento do array
arrayStd.cend() // Isso retorna um iterador constante para o elemento após o último elemento do array