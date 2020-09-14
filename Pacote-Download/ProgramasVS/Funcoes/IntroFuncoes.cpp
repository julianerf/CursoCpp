#include <iostream>
/* O que a função vai retornar? 
   Definir tipo de retorno da função*/

int SomaNumero(int n1, int n2) // // Mesmo nome das variáveis globais, porém são variáveis locais
{
	return n1 + n2;
} 

void mensagem()
{
	std::cout << "\n >> OLA MUNDO << \n"; //Função sem retorno
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
	std::cout << "Soma de 200 - 500 : " << RetornoDaFuncao << std::endl;; //Atribuição do retorno de uma função a uma variável (desde q do mesmo tipo)
	SomaNumero(n1, SomaNumero(150, 1400)); //Função dentro de outra função
	
	std::cout << SomaNumero(n1, SomaNumero(150, 1400)) << std::endl;
	
	std::cout << std::endl; //Comando para não ficar grudado o texto final
	system("PAUSE");
	return 0;
}