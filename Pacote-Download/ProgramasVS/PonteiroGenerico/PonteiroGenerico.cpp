#include <iostream>


int main()
{
	//setlocale(LC_ALL, "portuguese");
	int Numero{ 4809 };
	char Letra{ 'E' };
	void* ptrG;
	ptrG = &Letra;
	// Ponteiro gen�rico � �til quando vc vai declarar algo de uma fun��o e n�o sabe
	// oq vai retornar, podendo definir depois o tipo da vari�vel
	std::cout << "Valor da letra via ptrG: " << *(char *)ptrG << "\n";
	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG: " << *(int*)ptrG << "\n";
	system("PAUSE");
	return 0;
	/* Se colocar apenas ptrG* vai dar erro, pois o endere�o de uma vari�vel � apenas
	o primeiro byte dela (o primeiro endere�o em que ela est� carregada). Assim o 
	compilador vai saber como ler a vari�vel, n�o vai saber qtos bytes ele deve
	percorrer na mem�ria. Ele s� saber� quando vc indicar o tipo do ponteiro ptrG
	(por enquanto ele � void).
	Logo, no caso da letra que � do tipo char, vc deve indicar que o ponteiro ptrG
	est� apontando para um char. Isso � feito via cast. Primeiro vc faz o cast depois
	coloca o sinal de desreferenciamento. 
	*(cast para tipo desejado)NomePonteiroGenerico
	Agora o compilador sabe que deve ler 1byte para colocar um char na tela!
	*/
}