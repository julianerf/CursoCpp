#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Escolha = 0;
	do //Instru��es abaixo ser�o executadas pelo menos uma vez! 
	   //Essa � a diferen�a entre o do-while e o while apenas 
	{
		std::cout << "Tickets cinema" << std::endl;
		std::cout << "\n1 - Meia entrada\n";
		std::cout << "\n2 - Inteira\n";
		std::cout << "\n3 - Sair\n";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> Escolha;

		switch (Escolha)
		{
		case 1: std::cout << "\nMeia entrada comprada\n";
			break;
		case 2: std::cout << "\nEntrada inteira comprada\n";
			break;
		case 3: std::cout << "\nSaindo Menu Tickets\n";
			break;
		default: std::cout << "\nOpcao invalida!\n";
			break;
		}

	} while (Escolha != 3); //Enquanto escolhar for diferente de 3 o menu ira aparecer
	// Pois voc� esta solicitando que fique em loop at� que a escola seja diferente de 3
	// e o resultado seja falso siando do loop do-while
	system("PAUSE");
	return 0;
}