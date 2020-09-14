#include <iostream>

int main()
{
	// Memória é "randomica"
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho variável número: " << sizeof(Numero) << " Bytes\n";
	std::cout << "\n Tamanho variável salário: " << sizeof(Salario) << " Bytes\n";
	std::cout << "\n Endereço dememória da variável número: " << &Numero << "\n";
	std::cout << "\n Endereço dememória da variável salário: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}