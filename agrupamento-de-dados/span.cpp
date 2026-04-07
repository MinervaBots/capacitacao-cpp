/**
 * O span é uma solução moderna para um problema, foi adicionado no C++20 (atenção!!)
 * 
 * Ele não é um agrupamento de dados especificadamente, vamos pensar no problema primeiro:
 * 
 * Sempre que você precisa passar um array ou vector como parâmetro, você cria uma cópia dele
 * dele dentro da memória, agora imagine arrays com muitos itens, você tem uma duplicação
 * imensa de memória, fora que se você quiser modificar esse array, você vai precisar manipular
 * ponteiros e endereços.
 * 
 * O span vem para solucionar isso, ele é um objeto que vai "olhar", no caso apontar, para
 * estruturas de dados já existentes dentro da sua memória
 * 
 * Em quesito tamanho, o span vai ser composto por um ponteiro e um tamanho int (relacionado a estrutura
 * que você quer), isso faz ele ser extremamente leve
 * 
 * O span ele funciona para qualquer coisa que seja contígua, o padrão é ser usado nos arrays e vectors,
 * mas pode ser usado em string, matriz, etc.
 */

 #include <span>

std::vector<int> vetor = {1, 2, 3, 4, 5};

std::span<int> spanVetor(vetor); // isso não copia o vetor, apenas aponta para ele

// aqui o span é quase um auto, ele aceita qualquer estrutura contígua
void funcao(std::span<int> dados) {
    for (int item : dados) {}
}

// Existe um método .subspan() que cria um span a partir de outro span, isso trás muita eficiência
std::array<int, 10> arrayStdInt = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::span<int> spanArray(arrayStdInt);
std::span<int> subSpan = spanArray.subspan(2, 5); // agora tenho uma estrutura que não gasta memória a mais