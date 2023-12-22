#ifndef LISTAENCADEADA
#define LISTAENCADEADA

enum TipoDado {CHAR, INT, DOUBLE};

struct N� {
    TipoDado tipoDado;
    union {
        char cValor;
        int iValor;
        double dValor;
    };
    N�* link = nullptr;
    int testar();
    void insert(N�&);
    void sendFunction(void(*callback)());
};

std::ostream& operator<<(std::ostream&, N�&);

#endif