#include <iostream>
#include "ListaEncadeada.h" 

int nó::testar() {
    std::cout << "Testado \n";
    return 0;
}

void nó::insert(nó no)
{
	try
	{
		nó::link = &no;
	}
	catch (const std::exception&)
	{

	}
}

void nó::sendFunction(void(*function)())
{
	try
	{
		(*function)(); //Executa a função no nó atual
		while (nó::link != nullptr) //Se tiver próximo nó, executa a função no próximo nó
		{
			(*nó::link).sendFunction(function); 
		}
		
	}
	catch (const std::exception&)
	{

	}
}

