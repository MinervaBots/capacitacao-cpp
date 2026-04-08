/**
 * Em alocação dinâmica, usamos o heap da memória!
 * 
 * Em C++ temos os operadores new e delete, no C a gente tinha malloc e free, mas o new e delete são mais seguros e fáceis de usar
 * 
 * O new aloca memória para um tipo específico e retorna um ponteiro para essa memória, já o delete libera a memória alocada
 * 
 * Algo criado como new dentro de uma função não vai ser excluído, deve ser chamado o delete sempre!
 * MUITO IMPORTANTE NÃO ESQUECER O DELETE SE NÃO FUDEU (vai acontecer memory leak e teu código vai quebrar)
 */

int *ptrDinamico = new int(42); // aloca um inteiro no heap e inicializa com 42

std::cout << *ptrDinamico << std::endl;

delete ptrDinamico; // libera a memória alocada para ptrDinamico
ptrInt = nullptr; // reseta o ponteiro depois de deletar, é uma boa prática para evitar dangling pointers