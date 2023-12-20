#include <iostream>
#include "ListaEncadeada.h" 

int n�::testar() {
    std::cout << "Testado \n";
    return 0;
}

void n�::insert(n� no)
{
	try
	{
		n�::link = &no;
	}
	catch (const std::exception&)
	{

	}
}

void n�::sendFunction(void(*function)())
{
	try
	{
		(*function)(); //Executa a fun��o no n� atual
		while (n�::link != nullptr) //Se tiver pr�ximo n�, executa a fun��o no pr�ximo n�
		{
			(*n�::link).sendFunction(function); 
		}
		
	}
	catch (const std::exception&)
	{

	}
}

