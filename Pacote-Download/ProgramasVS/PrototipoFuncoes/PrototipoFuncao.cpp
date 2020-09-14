#include <iostream>

// Main � um fun��o que neste caso n�o recebe par�metros
// Pode existir argumentos de linha de comando que ser�o enviados 
// a dois par�metros da fun��o main

float soma(int num1, int num2)
{
	return num1 + num2;
}

// A execu��o do programa � feita de cima para baixo (topdown)
// A declara��o da fun��o precisa ser antes de o compilador chamar ela
// Pode-se informar o compilador de que a fun��o existe e vc ir� delcara-l� posteriormente
// Isso � feito atrav�s de prot�tipos de fun��es
// Basta colocar o cabelha�o da fun��o e ; EX: float soma(int num1, int num2);
int main()
{
	std::cout << soma(100, 500) << std::endl;
	system("PAUSE");
	return 0;
}