#ifndef LISTAENCADEADA
#define LISTAENCADEADA

struct n� {
    int valor;
    n�* link = nullptr;
    int testar();
    void insert(n�);
    void sendFunction(void(*)());
};

#endif