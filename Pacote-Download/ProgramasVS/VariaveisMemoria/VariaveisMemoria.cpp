#include <iostream>

int main()
{
	// Mem�ria � "randomica"
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho vari�vel n�mero: " << sizeof(Numero) << " Bytes\n";
	std::cout << "\n Tamanho vari�vel sal�rio: " << sizeof(Salario) << " Bytes\n";
	std::cout << "\n Endere�o demem�ria da vari�vel n�mero: " << &Numero << "\n";
	std::cout << "\n Endere�o demem�ria da vari�vel sal�rio: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}