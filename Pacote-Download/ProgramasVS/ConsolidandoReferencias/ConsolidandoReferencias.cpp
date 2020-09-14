#include <iostream>

/* Referência não é uma variável, ponteiro sim */

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	/* Logo que a referencia é criada não pode ficar sem ser atribuída; &RefNum*/
	int& RefNum { Numero2 };
	RefNum = 5644;
	// Não pode colocar &RefNum = 5644, pois referência só pode ser atribuida uma única vez!
	int* ptr = &Numero;
	// int *ptr {nullptr} Um ponteiro pode ser declarado sem ser inicializado  
	*ptr = 4048;
	std::cout << "Valor de numero: " << *ptr << "\n";
	// No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, 
	// fzer ele apontar para outra variável;
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "Valor de numero2: " << *ptr << "\n";
	system("PAUSE");
	return 0;
}