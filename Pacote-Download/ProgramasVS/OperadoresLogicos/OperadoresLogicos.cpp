#include <iostream>

int main()
{
	double Numero;
	bool MaiorQ100;
	std::cout << "Digite um numero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	// Vari�vel MaiorQ100 vai receber o valor l�gico de compara��o
	MaiorQ100 = (Numero > 100);
	std::cout << "Resultado logico: " << MaiorQ100 << "\n";
	system("PAUSE");
}