#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int inicio, fim;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "       CONTADOR INTELIGENTE       " << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Início: ";
	std::cin >> inicio;
	std::cout << "Fim: ";
	std::cin >> fim;

	if (fim > inicio)
	{
		while ( inicio <= fim) 
		{
			std::cout << "" << inicio << std::endl; 
			// Primeiro o printa na tela depois conta, pois precisa primeiro printar o valor
			// que foi definido como inicío e depois somar para printar de novo
			inicio = inicio++;
		}
	}
	else
	{
		while (inicio >= fim)
		{
			
			std::cout << "" << inicio << std::endl;
			inicio = inicio--;
		}

	}
	system("PAUSE");
	return 0;
}