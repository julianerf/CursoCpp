#include <iostream>
/* O que a fun��o vai retornar? 
   Definir tipo de retorno da fun��o*/

int SomaNumero(int n1, int n2) // // Mesmo nome das vari�veis globais, por�m s�o vari�veis locais
{
	return n1 + n2;
} 

void mensagem()
{
	std::cout << "\n >> OLA MUNDO << \n"; //Fun��o sem retorno
}

int main()
{
	int n1,n2,RetornoDaFuncao;
	mensagem();
	std::cout << "Digite um numero: ";
	std::cin >> n1;
	std::cout << "Digite o numero a ser somado: ";
	std::cin >> n2;
	std::cout << "A soma de " << n1 << " com " << n2 << " e: " << SomaNumero(n1,n2) << "\n";
	RetornoDaFuncao = SomaNumero(200, -500);
	std::cout << "Soma de 200 - 500 : " << RetornoDaFuncao << std::endl;; //Atribui��o do retorno de uma fun��o a uma vari�vel (desde q do mesmo tipo)
	SomaNumero(n1, SomaNumero(150, 1400)); //Fun��o dentro de outra fun��o
	
	std::cout << SomaNumero(n1, SomaNumero(150, 1400)) << std::endl;
	
	std::cout << std::endl; //Comando para n�o ficar grudado o texto final
	system("PAUSE");
	return 0;
}