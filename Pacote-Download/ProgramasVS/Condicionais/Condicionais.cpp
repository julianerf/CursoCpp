#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	//_tsetlocale(LC_ALL,'portuguese');
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	// Declara uma vari�vel do tipo string
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n Acesso permitido!" << "\n";
		bAcesso = true;
		//system("PAUSE");
	}
	else 
	{
		std::cout << "\n Acesso negado!" << "\n";
		//system("PAUSE");
		exit(0); // Sai do programa, for�a o fechamento da aplica��o
	}
	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;
	if (bAcesso) // Aqui podemos deixar apenas a vari�vel; 
				 // N�o � necess�rio == pois ser� buscado o valor de bAcesso e ficar� assim:
				 // if(true) ou if(false)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\n Vai dar praia!" << "\n";
		}
		// Aqui ser� executado se a condi��o do if falhar
		// e se bSalario for true
		else if (!bSalarioDepositado)
		{
			std::cout << "Nao vai dar praia e o salario nao foi depositado" << "\n";
		}
	}
	system("PAUSE");
}