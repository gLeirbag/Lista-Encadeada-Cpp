#include <iostream>
#include <format>
#include "ListaEncadeada.h" 

int Nó::testar() {
    std::cout << "Testado \n";
    return 0;
}

//Se passarmos um nó, ele vai inserir uma cópia, por isso vamos passar uma struct como referência.
void Nó::insert(Nó& no)
{
	try
	{
		//Associamos o link ao endereço do nó recebido pela referência.
		Nó::link = &no;
	}
	catch (const std::exception&)
	{

	}
}

void Nó::sendFunction(void(*callback)())
{
	try
	{
		callback(); //Executa a função no nó atual
		if (Nó::hasNext()) //Se tiver próximo nó, executa a função no próximo nó
		{
			(*Nó::link).sendFunction(callback);
		}
		
	}
	catch (const std::exception&)
	{

	}
}

Nó Nó::searchValue(int value) {
	Nó atual = *this;
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
}Nó Nó::searchValue(double value) {
	Nó atual = *this;
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
}Nó Nó::searchValue(char* value) {
	Nó atual = *this;
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

bool Nó::hasNext()
{
	if (Nó::link != nullptr)
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& out, Nó& no) {
	//return out << std::format("Nó{valor: {}, link: {} }", no.valor, no.link); Essa linha não funcionou pq format
	//não é uma função constante.
	switch (no.tipoDado) {
		case INT:
			out << "Nó{valor: " << no.iValor;
			break;
		case DOUBLE:
			out << "Nó{valor: " << no.dValor;
			break;
		case CHAR:
			out << "Nó{valor: " << no.cValor;
			break;
	}
	return out << ", link: " << no.link << " }";
	
}
