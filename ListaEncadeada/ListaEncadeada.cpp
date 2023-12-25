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
		if (N�::hasNext()) //Se tiver pr�ximo n�, executa a fun��o no pr�ximo n�
		{
			(*N�::link).sendFunction(callback);
		}
		
	}
	catch (const std::exception&)
	{

	}
}

N� N�::searchValue(int value) {
	N� atual = *this;
	while (atual.hasNext()) {
		if (atual.tipoDado != INT)
		{ 
			atual = *(atual.link);
			continue;
		}
		else if (atual.iValor == value)
			return atual;

		atual = *(atual.link);
	}
}N� N�::searchValue(double value) {
	N� atual = *this;
	while (atual.hasNext()) {
		if (atual.tipoDado != DOUBLE)
		{ 
			atual = *(atual.link);
			continue;
		}
		else if (atual.dValor == value)
			return atual;

		atual = *(atual.link);
	}
}N� N�::searchValue(char* value) {
	N� atual = *this;
	while (atual.hasNext()) {
		if (atual.tipoDado != CHAR)
		{ 
			atual = *(atual.link);
			continue;
		}
		else if (atual.cValor == value)
			return atual;

		atual = *(atual.link);
	}
}

bool N�::hasNext()
{
	if (N�::link != nullptr)
		return true;
	return false;
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
