#include <iostream>

int main()
{
	int Num1{10}, Num2{20}, Resultado;
	// Num2++ é o mesmo que Num2 = Num2 + 1
	/* No entando se o ++ vier depois da variável devemos ler da seguinte forma:
	Num2++ pegue logo o valor da variável Num2 e somente depois da instrução
	incremente em 1 o valor de Num2
	Logo Num1=Num2++ é equivalente as seguintes instruções:
	Num1 = Num2;
	Num2 = Num2 + 1; 
	Chamamos isso de PÓS-FIXADO 
	Assim se o ++ ou -- estiver após a variável ela somente será incrementada após
	a execução da instrução */
	/* Agora outra situação. O perador ++ está PRÉ-FIXADO
	Assim a instrução seria equivalente a:
	Num1 = Num1 +1;
	Num2 = Num1;
	Ou seja se o operador estiver pré-fixado primeiro a variável sera incrementada de 1
	para depois ser atribuida a outra variável
	*/
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	Num1 = Num2++;
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	Num2 = ++Num1;
	std::cout << "Valor atual de Num1 : " << Num1 << " e Num2: " << Num2 << "\n";
	system("PAUSE");
	return 0;
}