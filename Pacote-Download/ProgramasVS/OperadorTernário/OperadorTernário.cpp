#include <iostream>

int main()
{
	double MaiorNumero, Numero1, Numero2;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero2;
    // Neste caso o operador tern�rio ? esta sendo utilizado para atribuir 
	// um valor a uma vari�vel 
	// Se numero1 for maior que numero2, MaiorNumero recebe valor de numero1
	// Caso contr�rio (sen�o) MaiorNumero receve numero2
	MaiorNumero = (Numero1 > Numero2) ? Numero1 : Numero2;
	std::cout << "\nMaior numero digitado: " << MaiorNumero << "\n";
	// Aqui o operador ? est� sendo utilizado para decidir que comando ser� executado.
	// Se for true o primeiro std vai para tela
	// Se for false o segundo std vai para tela
	(Numero1 > Numero2) ? std::cout << "\nNumero 1 maior que numero 2 \n" :
	std::cout << "\n Numero 2 maior que numero 1 \n";

	system("PAUSE");
}