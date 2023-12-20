#ifndef LISTAENCADEADA
#define LISTAENCADEADA

struct nó {
    int valor;
    nó* link = nullptr;
    int testar();
    void insert(nó);
    void sendFunction(void(*)());
};

#endif