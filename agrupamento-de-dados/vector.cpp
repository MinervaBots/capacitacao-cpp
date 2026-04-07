/**
 * O vector também é da standard library e ele é basicamente um array de alocação dinâmica
 * Também foi introduzido no C++11
 * 
 * Dessa forma, o vector nasce no HEAP, ele é sempre dinâmico e não estático e é contíguo
 * 
 * Ele tem uma estrutura parecida com o array da std, sendo uma classe.
 * A diferença aqui é que ele possui uma estrutura Tripartite, ele possui alguns
 * dados armazenados no stack para poder fazer a alocação dinâmica de acordo
 * com seu código (geralmente são 3 ponteiros armazenados)
 * 
 * No vector vamos ter dois conceitos, o tamanho e a capacidade.
 * O tamanho é quantos elementos ele tem atualmente, a capacidade é o limite que o vector pode
 * atingir, normalmente o limite da memória no heap
 * 
 * Mesmo se a capacidade for atingida, existe um algoritmo para fazer realocação de memória,
 * aqui o vector trabalha em baixo nível e vai trabalhar até onde conseguir, isso vai evitar
 * que mesmo que sua capacidade máxima no heap seja atingida, o vector não quebre seu código
 * 
 * A std fez o vector para ter um custo computacional baixo, ele possui diversas funções 
 * aritmeticas bem avançadas para amortizar o custo computacional e a eficiência de memória
 */

 #include <vector>

 std::vector<int> vetor = {1, 2, 3}; // cria o vetor no HEAP com 3 itens (lembre-se, isso não é estático)
 vetor.push_back(4); // adiciona o item 4 no vetor
 // toda questão de limpeza de memória estará sendo abstraída pela classe, trazendo segurança a memória