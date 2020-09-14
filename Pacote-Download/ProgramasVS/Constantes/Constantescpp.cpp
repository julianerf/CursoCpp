#include <iostream>
//Para usar #define precisa colocar abaixo do include e sem ; !!!
//#define NUM_VIDAS 10

int main()
{
	const int NUM_VIDA = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDA - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor constante Num_vidas: " << NUM_VIDA << "\n";
    std::cout << "Endereco de memoria: " << &NUM_VIDA << "\n";
	system("PAUSE");
}