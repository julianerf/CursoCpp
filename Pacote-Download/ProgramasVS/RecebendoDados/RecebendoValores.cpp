#include <iostream>

int main()
{
	int Numero1, Numero2, Resposta;
	bool comparacao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero1;
	std::cout << "Numero1 = " << Numero1 << "\n";
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero2;
	std::cout << "Numero 2 = " << Numero2 << "\n";
	// = é comando de atribuição
	// == é o operador de igualdade
	comparacao = Numero1 == Numero2; //se verdadeiro retorna 1, senão 0
	std::cout << "O numero 1 e o numero 2 sao iguais: " << comparacao << "\n";
	comparacao = Numero1 != Numero2;
	std::cout << "O numero 1 e o numero 2 sao diferentes: " << comparacao << "\n";

	system("PAUSE");
}