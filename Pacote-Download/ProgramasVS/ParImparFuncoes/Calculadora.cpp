
/*Entrada: dois números reais
Processamento: funções calcula adição, subtração, multiplicação e divisão
Saída: respostas das funções*/

#include <iostream>

// PROTÓTIPOS DAS FUNÇÕES
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