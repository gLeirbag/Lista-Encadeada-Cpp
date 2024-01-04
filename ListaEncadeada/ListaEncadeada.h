#ifndef LISTAENCADEADA
#define LISTAENCADEADA
#include <iostream>

enum TipoDado {CHAR, INT, DOUBLE};

struct Nó {
    bool isHead = true;
    TipoDado tipoDado;
    union {
        const char* cValor;
        int iValor;
        double dValor;
    };
    Nó* link = nullptr;

    int testar();

    void insert(Nó&);
    Nó clearLink();
    void sendFunction(void(*callback)());
    Nó* searchValue(int value);
    Nó* searchValue(double value);
    Nó* searchValue(char* value);
    bool hasNext();
};

std::ostream& operator<<(std::ostream&, Nó&);

#endif