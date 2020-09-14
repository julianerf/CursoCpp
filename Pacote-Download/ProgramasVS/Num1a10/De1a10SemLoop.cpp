#include <iostream>

int main()
{
	int Numero;
	Numero = 0;
	// Loop Infinito
	// Neste caso o número nunca deixara de ser zero 
	// e a condição Numero <= 50 será sempre verdadeira
	// Logo ficará sempre dentro do while
	while (Numero <= 50)
	{
		if (Numero%2 != 0) // Para números ímpares
		//if (Numero%2 == 0) Para números pares
		std::cout << Numero << std::endl;
		Numero++; // Incrementa a variável para que chegue até 50
	}
	system("PAUSE");
	return 0;
}