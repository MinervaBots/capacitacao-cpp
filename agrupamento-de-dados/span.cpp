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
 * Em quesito tamanho, o span vai ser composto por um ponteiro e um tamanho (relacionado a estrutura
 * que você quer), isso faz ele ser extremamente leve
 */