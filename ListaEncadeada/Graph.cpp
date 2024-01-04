#include "Graph.h"
#include <iostream>
#include <iomanip>

using namespace std;

void mostrarLista(Nó& nó)
{
    // 23 caracteres, 2 barras verticais, 21 barras inclinadas
    const char* BARRA = "|/////////////////////|";
    const char* LINHA = "|---------------------|";
    static bool firstCall = true;

    if(!nó.isHead && firstCall)
		cout << "	   X" << endl << "	   |" << endl;

    cout << BARRA << endl;

    if (nó.isHead)
        cout << '|' << setw(12) << "HEAD" << setw(10) << '|' << endl;

    cout << '|' << setw(18) << &nó << "   |" << endl;
    cout << LINHA << endl;
    //cout << "| Tipo: " << nó.tipoDado << endl;
    switch (nó.tipoDado)
    {
    case CHAR:
        cout << "| Valor: " << setw(11) << nó.cValor << "  |" << endl;
        break;
    case INT:
        cout << "| Valor: " << setw(11) << nó.iValor << "  |" << endl;
        break;
    case DOUBLE:
        cout << "| Valor: " << setw(11) << nó.dValor << "  |" << endl;
        break;
    }
    cout << BARRA << endl;

    if (nó.hasNext()) {
        firstCall = false;
        cout << "	   |" << endl << "	   V" << endl;
        mostrarLista(*nó.link);
    }
    else{
        firstCall = true;
        cout << endl << endl;
    }
    
}
