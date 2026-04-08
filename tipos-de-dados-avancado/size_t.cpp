/**
 * O size_t é da Standard Library, ele é um tipo inteiro sem sinal (unsigned int) e possui um .size() de retorno
 * 
 * Excelente para representar o tamanho de objetos, como o tamanho de um vetor, string, etc
 * 
 * Ele é o tipo de retorno da função .size() de containers da STL (Standard Template Library), como std::vector, std::string, etc
 */

bool oponenteFoiDetectado(bool leituraSensores[], size_t quantidadeSensores) {

    // Iterar por todas as leituras dos sensores frontais
    for (size_t indiceSensor = 0; indiceSensor < quantidadeSensores; indiceSensor++){
        // Se qualquer leitura for verdadeira, retorne que foi verdadeiro
        if (leituraSensores[indiceSensor] == HIGH){
            return true;
        }
    }

    // Retorne se o oponente foi detectado ou não
    return false;

}