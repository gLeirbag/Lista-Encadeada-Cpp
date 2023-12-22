#ifndef LISTAENCADEADA
#define LISTAENCADEADA

enum TipoDado {CHAR, INT, DOUBLE};

struct Nó {
    TipoDado tipoDado;
    union {
        char cValor;
        int iValor;
        double dValor;
    };
    Nó* link = nullptr;
    int testar();
    void insert(Nó&);
    void sendFunction(void(*callback)());
};

std::ostream& operator<<(std::ostream&, Nó&);

#endif