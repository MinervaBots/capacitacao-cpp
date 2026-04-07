/**
 * O struct é uma outra estrutura de dados heterogênea, ele também pode armazenar diversos tipos diferentes
 * de dados. A sua estrutura é basicamente idência a tuple, só que mutável.
 * 
 * O struct é conhecido por ser uma classe sem métodos, então ele também tem "objetos"
 */

 struct Candidato {
    int anoPS = 2026;
    std::string nome;
    int idade;
    auto numeroCartao;
 }

// Para criar um objeto do struct, basta fazer:
Candidato froes; // Exatamente igual um objeto, mas é um struct!

froes.nome = "Fróes"; // Acessando o item e atribuindo um valor a ele

// Também posso criar um struct já atribuindo os valores a ele
Candidato linux = {2026, "Linux", 20, 5578463587349834};

