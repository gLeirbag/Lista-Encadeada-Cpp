#ifndef LISTAENCADEADA
#define LISTAENCADEADA

enum TipoDado {CHAR, INT, DOUBLE};

struct N� {
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