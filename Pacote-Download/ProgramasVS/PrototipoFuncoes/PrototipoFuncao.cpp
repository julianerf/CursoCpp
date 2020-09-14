#include <iostream>

// Main é um função que neste caso não recebe parâmetros
// Pode existir argumentos de linha de comando que serão enviados 
// a dois parâmetros da função main

float soma(int num1, int num2)
{
	return num1 + num2;
}

// A execução do programa é feita de cima para baixo (topdown)
// A declaração da função precisa ser antes de o compilador chamar ela
// Pode-se informar o compilador de que a função existe e vc irá delcara-lá posteriormente
// Isso é feito através de protótipos de funções
// Basta colocar o cabelhaço da função e ; EX: float soma(int num1, int num2);
int main()
{
	std::cout << soma(100, 500) << std::endl;
	system("PAUSE");
	return 0;
}