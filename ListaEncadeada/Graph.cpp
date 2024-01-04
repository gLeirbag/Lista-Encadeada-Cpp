#include "Graph.h"
#include <iostream>
#include <iomanip>

using namespace std;

void mostrarLista(N�& n�)
{
    // 23 caracteres, 2 barras verticais, 21 barras inclinadas
    const char* BARRA = "|/////////////////////|";
    const char* LINHA = "|---------------------|";
    static bool firstCall = true;

    if(!n�.isHead && firstCall)
		cout << "	   X" << endl << "	   |" << endl;

    cout << BARRA << endl;

    if (n�.isHead)
        cout << '|' << setw(12) << "HEAD" << setw(10) << '|' << endl;

    cout << '|' << setw(18) << &n� << "   |" << endl;
    cout << LINHA << endl;
    //cout << "| Tipo: " << n�.tipoDado << endl;
    switch (n�.tipoDado)
    {
    case CHAR:
        cout << "| Valor: " << setw(11) << n�.cValor << "  |" << endl;
        break;
    case INT:
        cout << "| Valor: " << setw(11) << n�.iValor << "  |" << endl;
        break;
    case DOUBLE:
        cout << "| Valor: " << setw(11) << n�.dValor << "  |" << endl;
        break;
    }
    cout << BARRA << endl;

    if (n�.hasNext()) {
        firstCall = false;
        cout << "	   |" << endl << "	   V" << endl;
        mostrarLista(*n�.link);
    }
    else{
        firstCall = true;
        cout << endl << endl;
    }
    
}
