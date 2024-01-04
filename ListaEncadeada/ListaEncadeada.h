#ifndef LISTAENCADEADA
#define LISTAENCADEADA
#include <iostream>

enum TipoDado {CHAR, INT, DOUBLE};

struct N� {
    bool isHead = true;
    TipoDado tipoDado;
    union {
        const char* cValor;
        int iValor;
        double dValor;
    };
    N�* link = nullptr;

    int testar();

    void insert(N�&);
    N� clearLink();
    void sendFunction(void(*callback)());
    N�* searchValue(int value);
    N�* searchValue(double value);
    N�* searchValue(char* value);
    bool hasNext();
};

std::ostream& operator<<(std::ostream&, N�&);

#endif