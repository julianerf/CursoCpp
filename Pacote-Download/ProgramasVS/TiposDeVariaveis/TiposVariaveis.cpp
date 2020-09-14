#include <iostream>
#include <iomanip> // Para usar a função setprecision nas variaveis double
#include <io.h>  // Para adicionar caracteres especiais
#include <fcntl.h>


int main()
{
	
	int Numero;
	float Numero2;
	double Numero3 = 45345.4567902;
	char Caractere1 = '3';
	char Caractere2 = 'k';
	bool bAchou;
	// 1 é verdadeiro
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	// Zero é falso
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 's';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	// Qualquer valor diferente de zero vira true ao ser atribuido uma variável do tipo bool
	Numero = 45;
	Numero2 = 55.56;
	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variavel: " << sizeof(Numero) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero << "\n";

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variavel: " << sizeof(Numero2) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero2 << "\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variavel: " << sizeof(Numero3) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero3 << "\n";

	std::cout << "Valor Caractere1: " << Caractere1 << std::endl;
	std::cout << "Tamanho do caractere: " << sizeof(Caractere1) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void*)&Caractere1 << "\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho do caractere: " << sizeof(Caractere2) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void*)&Caractere2 << "\n";
	//Para colocar o endereço de um caracter na tela precisa usar o void *//
	//Esse conceito está relacionado a ponteiros, sera visto mais tarde//

	system("PAUSE");
	
	
	/*_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L" \u263A"; 
	system("PAUSE"); */
	//Depois do u usa o código encontrado no "character map" na lupa do windows 
	//Usar bibliotecas io.h e fcntl.h 
}