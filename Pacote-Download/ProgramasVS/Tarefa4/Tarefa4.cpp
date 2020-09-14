#include <iostream>
#include <iomanip>

int main()
{
	int Var1;
	float  Var2;
	double Var3 = 2020.17121995;
	char Var4 = 'J';
	Var1 = 8;
	Var2 = 17.12;
	std::cout << "Valor da variavel int: " << Var1 << "\n";
	std::cout << "Tamanho da variavel: " << sizeof(Var1) << " Bytes \n";
	std::cout << "Endereco de memoria da variavel: " << &Var1 << "\n";

	std::cout << "Valor da variavel float: " << Var2 << "\n";
	std::cout << "Tamanho da variavel: " << sizeof(Var2) << " Bytes \n";
	std::cout << "Endereco de memoria da variavel: " << &Var2 << "\n";

	std::cout << "Valor da variavel double: " << std::setprecision(12) << Var3 << "\n";
	std::cout << "Tamanho da variavel: " << sizeof(Var3) << " Bytes \n";
	std::cout << "Endereco de memoria da variavel: " << &Var3 << "\n";

	std::cout << "Valor da variavel char: " << Var4 << "\n";
	std::cout << "Tamanho mda variavel: " << sizeof(Var4) << " Bytes\n";
	std::cout << "Endereco de memoria da variavel: " << (void *)&Var4 << "\n";

	system("PAUSE");
	return 0;
}