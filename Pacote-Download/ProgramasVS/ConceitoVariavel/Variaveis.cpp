#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL,_T("portuguese")); 
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "***************INICIO DO JOGO***************" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << " Bytes\n";
	std::cout << "Tamanho da vari�vel Score: " << sizeof(Score) << " Bytes\n";
	std::cout << "Endere�o que NumVidas ocupa na mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que pontua��o ocupa na mem�ria RAM: " << &Score << "\n";
	std::cout << "***************DURANTE O JOGO***************" << std::endl;
	Score = Score + 150; // Score += 150;
	NumVidas = NumVidas - 1; //NumVidas -= 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	system("PAUSE");
	

}