#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    n� n�1{200};
    //cout << n�1.valor;
    //n� n�2{ 5122, &n�1 };

    n� n�2{5122};



    //out << "no2.valor: " << n�2.valor << " no2 link: " << n�2.link << " no2.link->valor: " << (*n�2.link).valor << "\n";
    n�1.insert(n�2);
    n�1.sendFunction(printar);



    return 0;
}