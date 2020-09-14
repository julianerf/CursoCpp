#include <iostream>

int main()
{
	double Numero[10] = { 1,2,3,4,10,11 };
	double Soma{ 0.0 };

	for (int i = 0; i < 6; i++)
	{
		//std::cout << "Digite o " << (i+1) << " numero: ";
		//std::cin >> Numero[i];
		Soma = Soma + Numero[i]; // Soma += Numero[i]
		system("CLS");
	}
	std::cout << "Soma dos elementos do vetor: " << Soma << std::endl;

}