#include <iostream>
#include "ListaEncadeada.h" 

using namespace std;

void printar() {
	cout << "Printado \n";
}

int main() {
    N� n�1{CHAR, 'A'};
    //cout << n�1.valor;
    //N� n�2{ 5122, &n�1 };

    N� n�2{INT, 125};



    //out << "no2.valor: " << n�2.valor << " no2 link: " << n�2.link << " no2.link->valor: " << (*n�2.link).valor << "\n";
    n�1.insert(n�2);

    cout << n�1 << "\n";

    n�1.sendFunction(printar);



    return 0;
}