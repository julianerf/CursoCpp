#include <iostream>

// Protótipo da função
bool isPar(int num);

/*int main()
{
	int numero;
	std::cout << "\n Digite um numero inteiro: " << std::endl;
	std::cin >> numero;
	if (isPar(numero))
	{
		std::cout << "\n Numero: " << numero << " PAR \n";
	}
	else
	{
		std::cout << "\n Numero: " << numero << " IMPAR \n";
	}
	system("PAUSE");
	return 0;
}*/

bool isPar(int num)
{
	if (num % 2 == 0)
		return true;
	// Return faz a saída imediata da função, assim o else é desnecessário
	return false;
}
