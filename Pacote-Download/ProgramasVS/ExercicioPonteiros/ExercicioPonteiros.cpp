#include <iostream>

int main()
{
	int Numero{ 234 };
	int* Ponteiro;
	Ponteiro = &Numero; // Ou pode colocar direto int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	std::cout << "Valor de Numero usando ponteiro: " << *Ponteiro << "\n";
	std::cout << "Endereco de memoria RAM onde Numero esta alocado: " << &Numero << "\n";
	std::cout << "Endereco de memoria RAM onde Ponteiro esta alocado: " << &Ponteiro << "\n";
	std::cout << "Valor contido dentro de Ponteiro (para onde ele aponta): " << Ponteiro << "\n";
	int* OutroPtr = Ponteiro;
	*Ponteiro += 200;
	std::cout << "Endereco memoria RAM onde OutroPtr esta alocado: " << &OutroPtr << "\n";
	std::cout << "Valor de Numero apos somar 200: " << *OutroPtr << "\n";
	system("PAUSE");
	return 0;
}