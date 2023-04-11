#include "fila.h"
#include <iostream>
using namespace std;

const int MAX = 10; // tamanho máximo da fila

FilaCircular::FilaCircular() {
    frente = -1;
    tras = -1;
}

bool FilaCircular::estaVazia() {
    return (frente == -1 && tras == -1);
}

bool FilaCircular::estaCheia() {
    return ((tras + 1) % MAX == frente);
}

void FilaCircular::enfileirar(int item) {
    if (estaCheia()) {
        cout << "Erro: fila cheia\n";
        return;
    }

    if (estaVazia()) {
        frente = 0;
        tras = 0;
    } else {
        tras = (tras + 1) % MAX;
    }

    itens[tras] = item;
}

void FilaCircular::desenfileirar() {
    if (estaVazia()) {
        cout << "Erro: fila vazia\n";
        return;
    }

    if (frente == tras) {
        frente = -1;
        tras = -1;
    } else {
        frente = (frente + 1) % MAX;
    }
}

int FilaCircular::obterFrente() {
    if (estaVazia()) {
        cout << "Erro: fila vazia\n";
        return -1;
    }

    return itens[frente];
}

void FilaCircular::imprimir() {
    if (estaVazia()) {
        cout << "Fila vazia\n";
        return;
    }

    int i;
    for (i = frente; i != tras; i = (i + 1) % MAX) {
        cout << itens[i] << " ";
    }
    cout << itens[i] << endl;
}

