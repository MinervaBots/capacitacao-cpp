/**
 * O volatile é meio que o contrário do const, ele diz para o compilador que a variável pode ser modificada a qualquer momento
 * 
 * É importante em casos que usamos flags para otimização extrema de código, com o uso do volatile, eu consigo
 * avisar para meu compilador não otimizar aquela variável
 * 
 * É muito útil também para variáveis que leem registradores de hardware e variáveis que são modificadas por interrupções
 * 
 * É pouco usado no contexto geral de programação, porém em embarcados é mais comum pelo que citei acima
 */

volatile bool pararModuloStart = false; // aviso o compilador que algo vai mudar aqui