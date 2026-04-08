/**
 * O mutable é um recurso que permite modificar uma variável mesmo que ela seja declarada como const em uma classe
 * 
 * Quando você declara um método como const, você "promete" ao compilador que aquele método não irá alterar 
 * nenhum estado do objeto, se você tem uma instância const, só poderá chamar métodos const da classe
 * 
 * Se em algum caso você quiser usar um método que não logicamente não muda o objeto mas altera alguma variável,
 * você deve usar o mutable
 * 
 * É útil para variáveis de cache, contadores de acesso, ou qualquer situação onde você queira modificar um estado interno
 * mesmo que o método seja const
 */

 class Sensor {
    private:
        mutable int contadorAcessos; // isso pode ser modificado mesmo em métodos const
    public:
        Sensor() : contadorAcessos(0) {} // inicializa o contador de acessos

        int lerValor() const { // método const, não pode modificar o estado do objeto
            contadorAcessos++; // mas posso modificar o contador de acessos
            return 1;
        }
}