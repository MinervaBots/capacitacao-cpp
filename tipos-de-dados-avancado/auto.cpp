/**
 * O auto é um recurso que transforma seu código em C++ em Python (para quem gosta dessa desgraça)
 * 
 * Você não precisa declarar explicitamento o tipo da variável, o próprio compilador vai fazer isso por você
 * 
 * Não tem custo em tempo de execução (apenas se atentar que ele não otimiza sua variável, ou seja, se você fizer auto x = 1.1;
 * ele vai ser um double, e não um float, gastando mais espaço de memória)
 * 
 * É muito útil em funções que seu tipo de retorno pode mudar!!! (um dia chegamos nas aulas de funções)
 */

int a = 10; // eu sei que isso é um inteiro
auto b = 20; // caramba eu não sei que isso é inteiro, mas o compilador vai saber
auto c = 3.14; // isso é um double, mas eu não sei disso, o compilador sabe
auto d = "MinervaBolts"; // isso é um const char*
auto e = true; // isso é um bool