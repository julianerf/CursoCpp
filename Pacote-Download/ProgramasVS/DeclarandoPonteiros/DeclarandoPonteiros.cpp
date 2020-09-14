#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	// Para declarar uma vari�vel que seja considerada um ponteiro basta colocar 
	// <tipo a ser apontado *<nome da vari�vel>
	// A posi��o do asterisco nesse caso n�o importa // int* ptr
	int* ptr{ nullptr }; // Agora o ponteiro n�o est� com endere�o lixo de mem�ria; nullptr � como se fosse um endere�o zero; indica que ele n�o est� apontando para lugar algum
	int Numero{ 101 }; // Inicializa��o Uniforme (Uniform Initialization) - Uso de {} para declarar as vari�veis 
	/* Aqui vamos colocar na tela o endere�o de mem�ria da vari�vel n�mero (onde ela est� alocada na mem�ria RAM).
	Lembre-se de que o que vai para a tela � o primeiro endere�o da vari�vel Numero pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho*/
	std::cout << "\nEndere�o de numero: " << &Numero << "\n";
	/* IMPORTANTE
	&ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	Qual lugar da RAM ela est� alocada?
	*/
	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";
	system("PAUSE");
	return 0;
}