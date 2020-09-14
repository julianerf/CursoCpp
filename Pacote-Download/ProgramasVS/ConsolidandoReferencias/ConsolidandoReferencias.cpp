#include <iostream>

/* Refer�ncia n�o � uma vari�vel, ponteiro sim */

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	/* Logo que a referencia � criada n�o pode ficar sem ser atribu�da; &RefNum*/
	int& RefNum { Numero2 };
	RefNum = 5644;
	// N�o pode colocar &RefNum = 5644, pois refer�ncia s� pode ser atribuida uma �nica vez!
	int* ptr = &Numero;
	// int *ptr {nullptr} Um ponteiro pode ser declarado sem ser inicializado  
	*ptr = 4048;
	std::cout << "Valor de numero: " << *ptr << "\n";
	// No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endere�o, 
	// fzer ele apontar para outra vari�vel;
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "Valor de numero2: " << *ptr << "\n";
	system("PAUSE");
	return 0;
}