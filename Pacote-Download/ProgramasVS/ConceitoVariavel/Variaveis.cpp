#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL,_T("portuguese")); 
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "***************INICIO DO JOGO***************" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << " Bytes\n";
	std::cout << "Tamanho da variável Score: " << sizeof(Score) << " Bytes\n";
	std::cout << "Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que pontuação ocupa na memória RAM: " << &Score << "\n";
	std::cout << "***************DURANTE O JOGO***************" << std::endl;
	Score = Score + 150; // Score += 150;
	NumVidas = NumVidas - 1; //NumVidas -= 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	system("PAUSE");
	

}