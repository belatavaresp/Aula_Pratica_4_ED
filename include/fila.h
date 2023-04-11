
const int MAX = 10; // tamanho máximo da fila

class FilaCircular {
private:
    int itens[MAX];
    int frente, tras;

public:
    FilaCircular();

    bool estaVazia();

    bool estaCheia();

    void enfileirar(int);

    void desenfileirar();

    int obterFrente();

    void imprimir();
};
