#include <iostream>

int main()
{
	int Soma = 0;
	for (int num=1; num<=100; num++)
	{
 		Soma = Soma + num;
	}
	std::cout << "\nSoma: \n" << Soma << std::endl;
	system("PAUSE");
	return 0;
}