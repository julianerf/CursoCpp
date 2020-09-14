#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	//_tsetlocale(LC_ALL,'portuguese');
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	// Declara uma variável do tipo string
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
		exit(0); // Sai do programa, força o fechamento da aplicação
	}
	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;
	if (bAcesso) // Aqui podemos deixar apenas a variável; 
				 // Não é necessário == pois será buscado o valor de bAcesso e ficará assim:
				 // if(true) ou if(false)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\n Vai dar praia!" << "\n";
		}
		// Aqui será executado se a condição do if falhar
		// e se bSalario for true
		else if (!bSalarioDepositado)
		{
			std::cout << "Nao vai dar praia e o salario nao foi depositado" << "\n";
		}
	}
	system("PAUSE");
}