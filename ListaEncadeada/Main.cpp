#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    nó nó1{200};
    //cout << nó1.valor;
    //nó nó2{ 5122, &nó1 };

    nó nó2{5122};



    //out << "no2.valor: " << nó2.valor << " no2 link: " << nó2.link << " no2.link->valor: " << (*nó2.link).valor << "\n";
    nó1.insert(nó2);
    nó1.sendFunction(printar);



    return 0;
}