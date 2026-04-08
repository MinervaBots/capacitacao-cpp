/**
 * A union é uma estrutura de dados especial onde todos os seus membros compartilham o MESMO endereço de memória
 * 
 * Diferente do struct, onde cada variável ocupa seu próprio espaço, o tamanho total do union na 
 * memória é apenas o tamanho do seu maior membro
 * 
 * Nesse caso, o union só pode acessar um item por vez, por compartilhar o mesmo espaço
 * 
 * Um exemplo de uso do union é para manipulação de dados binários, onde você pode acessar os mesmos 
 * dados como um inteiro ou como um array de bytes, dependendo da necessidade
 */

union algumaCoisa {
    uint32_t valor; // ocupa 4 bytes de memória
    uint8_t  bytes[4];      // ocupa exatamente os MESMOS 4 bytes
};