#include <iostream>
#include <locale.h>

/*ENTRADA: recebe numero de elementos do usuário
PROCESSAMENTO: armazenar dados em um array e encontrar maior e menor elemento desse array
SAÍDA: mostrar na tela o maior e menor elemento do array*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos, Min, Max;
	int Array[20];
	// ENTRADA
	std::cout << "Digite o numero de elementos desejados: ";
	std::cin >> NumElementos;
	// PROCESSAMENTO
	for (int i = 0; i < NumElementos; i++)
	{
		std::cout << "Digite o elemento " << (i + 1) << ": ";
		std::cin >> Array[i];
		system("CLS");
	}
	Max = Array[0];
	Min = Array[0];
	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i]>Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}
	// SAÍDA
	std::cout << "Maior elemento digitado: " << Max << "\n";
	std::cout << "Menor elemento digitado: " << Min << "\n";
	system("PAUSE");
	return 0;
}