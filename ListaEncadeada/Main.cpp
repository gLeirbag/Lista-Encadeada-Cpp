#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    Nó nó1{ .tipoDado = CHAR, .cValor = "Gabriel"};
    //cout << nó1.valor;
    //Nó nó2{ 5122, &nó1 };

    Nó nó2{.tipoDado = INT, .iValor = 22};
    
    Nó nó3{.tipoDado = DOUBLE, .dValor = 1.76};



    //out << "no2.valor: " << nó2.valor << " no2 link: " << nó2.link << " no2.link->valor: " << (*nó2.link).valor << "\n";
    nó1.insert(nó2);
    nó2.insert(nó3);
    cout << nó1 << endl;
    //cout << *nó1.searchValue(1.76);

    //nó1.sendFunction(printar);



    return 0;
}