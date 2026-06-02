/**
 * Operadores de Memória - Tamanho e Tipo
 * 
 * Eles a você o controle total da memória (perigoso)
 * 
 * Diferente de linguagens com Garbage Collector (como Java ou Python), 
 * aqui VOCÊ limpa a própria merda que faz
 */

/**
 * Operador new
 * Pede ao Sistema Operacional um bloco na memória dinâmica (Heap) 
 * para armazenar UM objeto. Ele retorna um ponteiro para esse endereço.
 */
int* ponteiroInt = new int; 
*ponteiroInt = 42; // Colocamos o valor 42 lá dentro

/**
 * Operador delete
 * Devolve a memória alocada pelo 'new' de volta para o Sistema Operacional.
 */
delete ponteiroInt;

/**
 * Operador new[] (New Array)
 * Aloca um bloco contínuo de memória para múltiplos elementos de uma vez.
 */
int quantidade = 100;
int* arrayDinamico = new int[quantidade];

/**
 * Operador delete[] (Delete Array)
 * Devolve o bloco contínuo de memória do 'new[]'.
 */
delete[] arrayDinamico;

/**
 * Operador sizeof
 * Descobre o tamanho exato, em bytes, que um tipo ou variável ocupa na memória.
 * Isso acontece em tempo de compilação!
 */
unsigned long long a = 123456789ULL;
size_t tamanhoInt = sizeof(int); // 4 bytes
size_t tamanhoStruct = sizeof(struct); // vai somar o tamanho dos itens do struct
size_t tamanhoVariavel = sizeof(a); // 8 bytes (unsigned long long)

/**
 * Operador sizeof...
 * Usado exclusivamente em Templates (C++11) para contar quantos
 * argumentos foram passados para funções kwargs
 */
template<typename... Args>
void contarArgumentos(Args... argumentos) {
    size_t total = sizeof...(argumentos); 
    // Se você chamar contarArgumentos(1, 3.14, "Texto"); 
    o total será 3
}

/**
 * Operador typeid
 * Inspeciona o tipo da variável enquanto o programa está rodando (RTTI).
 * Serve para debugar código com herança e polimorfismo.
 */
int numero = 7;
const std::type_info& info = typeid(numero);
// info.name() retornaria uma string com o nome do tipo (ex: "i" para int no GCC)

/**
 * Operador alignof (C++11)
 * Mostra o alinhamento de memória exigido para o tipo.
 */
size_t alinhamentoInt = alignof(int); // Retorna a exigência do processador (ex: 4 para 32 bits)