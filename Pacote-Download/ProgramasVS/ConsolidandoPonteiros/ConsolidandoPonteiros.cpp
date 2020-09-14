#include <iostream>

int main()
{
	int Numero{ 4096 };
	int* ptr;
	int* ptr2;
	ptr = &Numero;
	ptr2 = ptr;
	std::cout << "\nEndereco ptr: " << ptr << "\n";
	std::cout << "\nEndereco contido dentro de ptr2: " << ptr2 << "\n";
	std::cout << "\nEndereco de ptr na memoria RAM: " << &ptr << "\n";
	std::cout << "\nEndereco de ptr2 na memoria RAM: " << &ptr2 << "\n";
	*ptr2 = *ptr + 10;
	std::cout << "\nValor de numero: " << Numero << "\n";
	system("PAUSE");
	return 0;
}