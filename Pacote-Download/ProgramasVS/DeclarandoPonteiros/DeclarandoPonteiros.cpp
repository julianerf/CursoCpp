#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	// Para declarar uma variável que seja considerada um ponteiro basta colocar 
	// <tipo a ser apontado *<nome da variável>
	// A posição do asterisco nesse caso não importa // int* ptr
	int* ptr{ nullptr }; // Agora o ponteiro não está com endereço lixo de memória; nullptr é como se fosse um endereço zero; indica que ele não está apontando para lugar algum
	int Numero{ 101 }; // Inicialização Uniforme (Uniform Initialization) - Uso de {} para declarar as variáveis 
	/* Aqui vamos colocar na tela o endereço de memória da variável número (onde ela está alocada na memória RAM).
	Lembre-se de que o que vai para a tela é o primeiro endereço da variável Numero pois ela ocupa 4 endereços pois tem 4 bytes de tamanho*/
	std::cout << "\nEndereço de numero: " << &Numero << "\n";
	/* IMPORTANTE
	&ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	Qual lugar da RAM ela está alocada?
	*/
	std::cout << "\nEndereço de ptr: " << &ptr << "\n";
	system("PAUSE");
	return 0;
}