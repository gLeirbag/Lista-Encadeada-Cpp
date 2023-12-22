#include <iostream>
#include <format>
#include "ListaEncadeada.h" 

int N�::testar() {
    std::cout << "Testado \n";
    return 0;
}

//Se passarmos um n�, ele vai inserir uma c�pia, por isso vamos passar uma struct como refer�ncia.
void N�::insert(N�& no)
{
	try
	{
		//Associamos o link ao endere�o do n� recebido pela refer�ncia.
		N�::link = &no;
	}
	catch (const std::exception&)
	{

	}
}

void N�::sendFunction(void(*callback)())
{
	try
	{
		callback(); //Executa a fun��o no n� atual
		if (N�::link != NULL) //Se tiver pr�ximo n�, executa a fun��o no pr�ximo n�
		{
			(*N�::link).sendFunction(callback);
		}
		
	}
	catch (const std::exception&)
	{

	}
}

std::ostream& operator<<(std::ostream& out, N�& no) {
	//return out << std::format("N�{valor: {}, link: {} }", no.valor, no.link); Essa linha n�o funcionou pq format
	//n�o � uma fun��o constante.
	switch (no.tipoDado) {
		case INT:
			out << "N�{valor: " << no.iValor;
			break;
		case DOUBLE:
			out << "N�{valor: " << no.dValor;
			break;
		case CHAR:
			out << "N�{valor: " << no.cValor;
			break;
	}
	return out << ", link: " << no.link << " }";
	
}
