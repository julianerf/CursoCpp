#include <iostream>
#include "Matematica.h"
#include <cmath>

/* n1 e n2 s�o par�metros formais das fun��es soma
   as vari�veis s�o criadas somente durante a execu��o da fun��o
   elas s�o locais a fun��o e a este bloco de c�digo 
   Isso evita desperd�cio de mem�ria e otimiza muito o programa.*/


int main()
{
	int n1, n2;
	std::cout << "\nDigite o primeiro numero: ";
	std::cin >> n1;
	std::cout << "\nDigite o segundo numero: ";
	std::cin >> n2;
	std::cout << "\nSoma: " << Soma(n1, n2) << std::endl;
	std::cout << "\nSubtracao: " << Subtracao(n1,n2) << std::endl;
	std::cout << "\nMultiplicacao: " << Multiplicacao(n1, n2) << std::endl;
	std::cout << "\nDivisao: " << Divisao(n1, n2) << std::endl;
	std::cout << "\nPotencia: " << Potencia(n1, n2) << std::endl;
	std::cout << "\nRaiz Quadrada: " << RaizQuadrada(n1) << std::endl;
	std::cout << "\nRaiz Quadrada: " << RaizQuadrada(n2) << std::endl;
	system("PAUSE");
	return 0;
}