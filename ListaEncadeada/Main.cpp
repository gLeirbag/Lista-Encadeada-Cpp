#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    N� n�1{ .tipoDado = CHAR, .cValor = "Gabriel"};
    //cout << n�1.valor;
    //N� n�2{ 5122, &n�1 };

    N� n�2{.tipoDado = INT, .iValor = 22};
    
    N� n�3{.tipoDado = DOUBLE, .dValor = 1.76};



    //out << "no2.valor: " << n�2.valor << " no2 link: " << n�2.link << " no2.link->valor: " << (*n�2.link).valor << "\n";
    n�1.insert(n�2);
    n�2.insert(n�3);
    cout << n�1 << endl;
    //cout << *n�1.searchValue(1.76);

    //n�1.sendFunction(printar);



    return 0;
}