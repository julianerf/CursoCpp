#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	/* Voc� pode usar () para iniciar vari�veis com valores literais*/
	/* {} � inicializa��o uniforme, permite iniciar tanto valores 
	literais (int,float,caractere,...), quanto valores escalares (vetores,enums,...)*/
	int NumeroInteiro{12};
	float NumeroReal{34.56};
	char Caractere{'c'};
	/* String � uma cadeia de caracteres, � um texto e deve estar entre aspas duplas */
	/* Para declarar string usamos std::string */
	std::string Texto{"Vou aprender c++!!!"};
	/* %d indica oq vc quer q seja colocado na string */
	std::printf(" Valor N�mero inteiro: %d \n Valor Real: %.4f \n Caracter: %c \n Texto: %s ",NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	/* S� precisa usar c_str em string quando usa printf, pois � uma fun��o herdado da linguagem c
	em c++ na fun��o std::cout n�o precisa chamar essa fun��o c_str*/
	std::cout << "Texto da string: " << Texto << "\n";
	std::printf ("O valor do caracter %c digitado na tabela ASCII �  %d ", Caractere, Caractere);
	/* %d � chamado de escificador de formato*/
	/* Cada tipo de dado tem um especificador de formato*/
	/* printf � uma fun��o */
	system("PAUSE");
	return 0;
}