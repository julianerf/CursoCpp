#include <iostream>

int main()
{
	int Num1{10}, Num2{20}, Resultado;
	// Num2++ � o mesmo que Num2 = Num2 + 1
	/* No entando se o ++ vier depois da vari�vel devemos ler da seguinte forma:
	Num2++ pegue logo o valor da vari�vel Num2 e somente depois da instru��o
	incremente em 1 o valor de Num2
	Logo Num1=Num2++ � equivalente as seguintes instru��es:
	Num1 = Num2;
	Num2 = Num2 + 1; 
	Chamamos isso de P�S-FIXADO 
	Assim se o ++ ou -- estiver ap�s a vari�vel ela somente ser� incrementada ap�s
	a execu��o da instru��o */
	/* Agora outra situa��o. O perador ++ est� PR�-FIXADO
	Assim a instru��o seria equivalente a:
	Num1 = Num1 +1;
	Num2 = Num1;
	Ou seja se o operador estiver pr�-fixado primeiro a vari�vel sera incrementada de 1
	para depois ser atribuida a outra vari�vel
	*/
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	Num1 = Num2++;
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	Num2 = ++Num1;
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	system("PAUSE");
	return 0;
}