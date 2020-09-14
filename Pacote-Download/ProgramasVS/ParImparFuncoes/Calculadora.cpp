
/*Entrada: dois n�meros reais
Processamento: fun��es calcula adi��o, subtra��o, multiplica��o e divis�o
Sa�da: respostas das fun��es*/

#include <iostream>

// PROT�TIPOS DAS FUN��ES
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);

int main()
{
	int num1, num2;
	std::cout << "\n Digite primeiro numero: ";
	std::cin >> num1;
	std::cout << "\n Digite segundo numero: ";
	std::cin >> num2;
	std::cout << "\n *** RESULTADO DAS OPERACOES *** \n";
	std::cout << "Soma: " << Soma(num1, num2) << "\n";
	std::cout << "Subtracao: " << Subtracao(num1, num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(num1, num2) << "\n";
	std::cout << "Divisao: " << Divisao(num1, num2) << "\n";
	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}