#include <iostream>

int main()
{
	int Numero;
	Numero = 0;
	// Loop Infinito
	// Neste caso o n�mero nunca deixara de ser zero 
	// e a condi��o Numero <= 50 ser� sempre verdadeira
	// Logo ficar� sempre dentro do while
	while (Numero <= 50)
	{
		if (Numero%2 != 0) // Para n�meros �mpares
		//if (Numero%2 == 0) Para n�meros pares
		std::cout << Numero << std::endl;
		Numero++; // Incrementa a vari�vel para que chegue at� 50
	}
	system("PAUSE");
	return 0;
}