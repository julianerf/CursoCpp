#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "Digite um numero: ";
	std::cin >> Num1;
	std::cout << "Digite outro numero: ";
	std::cin >> Num2;
	std::cout << "Qual operacao deseja efetuar? \n + Soma \n - Subtracao \n * multiplicacao \n / Divisao";
	std::cout << "Digite sua opcao: ";
	std::cin >> Operacao;
	// Usuário digita um caracter. Como o caracter é mapeado como um inteiro 
	// na tabela ASCII o switch le esse tipo de expressão 
	switch (Operacao)
	{
	case '+':
		std::cout << "\nSoma de num1 + num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtracao de num1 - num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplicacao de num1 * num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivisao de num1 / num2 = " << Num1 / Num2;
		break;
	default: 
		std::cout << "\nVoce nao digitou um operador valido";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}