#include <iostream>

int main()
{
	int num, cont1, cont2;
	std::cout << "-------------------" << std::endl;
	std::cout << "        MENU       " << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "[1] De 1 a 10" << std::endl;
	std::cout << "[2] De 10 a 1" << std::endl;
	std::cout << "[3] Sair" << std::endl;
	std::cin >> num;
	switch (num)
	{
	case 1: 
		cont1 = 1;
		do
	{
		std::cout << " "<< cont1;
		cont1 = cont1++;
		} while (cont1 <= 10);
			break;
	case 2:
		cont2 = 10;
		do
		{
			std::cout << " " << cont2;
			cont2 = cont2--;
		} while (cont2>=1);
		break;
	case 3: 
		std::cout << "SAINDO ..." << std::endl;
		break;
	default: 
		std::cout << "VALOR INVALIDO" << std::endl;
		break;
	}
	system("PAUSE");
	return 0;
}