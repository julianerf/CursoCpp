#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	/* Você pode usar () para iniciar variáveis com valores literais*/
	/* {} é inicialização uniforme, permite iniciar tanto valores 
	literais (int,float,caractere,...), quanto valores escalares (vetores,enums,...)*/
	int NumeroInteiro{12};
	float NumeroReal{34.56};
	char Caractere{'c'};
	/* String é uma cadeia de caracteres, é um texto e deve estar entre aspas duplas */
	/* Para declarar string usamos std::string */
	std::string Texto{"Vou aprender c++!!!"};
	/* %d indica oq vc quer q seja colocado na string */
	std::printf(" Valor Número inteiro: %d \n Valor Real: %.4f \n Caracter: %c \n Texto: %s ",NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	/* Só precisa usar c_str em string quando usa printf, pois é uma função herdado da linguagem c
	em c++ na função std::cout não precisa chamar essa função c_str*/
	std::cout << "Texto da string: " << Texto << "\n";
	std::printf ("O valor do caracter %c digitado na tabela ASCII é  %d ", Caractere, Caractere);
	/* %d é chamado de escificador de formato*/
	/* Cada tipo de dado tem um especificador de formato*/
	/* printf é uma função */
	system("PAUSE");
	return 0;
}