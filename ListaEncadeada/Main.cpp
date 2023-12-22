#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    Nó nó1{CHAR, 'A'};
    //cout << nó1.valor;
    //Nó nó2{ 5122, &nó1 };

    Nó nó2{INT, 125};



    //out << "no2.valor: " << nó2.valor << " no2 link: " << nó2.link << " no2.link->valor: " << (*nó2.link).valor << "\n";
    nó1.insert(nó2);

    cout << nó1 << "\n";

    nó1.sendFunction(printar);



    return 0;
}