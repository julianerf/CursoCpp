#include <iostream>


int main()
{
	//setlocale(LC_ALL, "portuguese");
	int Numero{ 4809 };
	char Letra{ 'E' };
	void* ptrG;
	ptrG = &Letra;
	// Ponteiro genérico é útil quando vc vai declarar algo de uma função e não sabe
	// oq vai retornar, podendo definir depois o tipo da variável
	std::cout << "Valor da letra via ptrG: " << *(char *)ptrG << "\n";
	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG: " << *(int*)ptrG << "\n";
	system("PAUSE");
	return 0;
	/* Se colocar apenas ptrG* vai dar erro, pois o endereço de uma variável é apenas
	o primeiro byte dela (o primeiro endereço em que ela está carregada). Assim o 
	compilador vai saber como ler a variável, não vai saber qtos bytes ele deve
	percorrer na memória. Ele só saberá quando vc indicar o tipo do ponteiro ptrG
	(por enquanto ele é void).
	Logo, no caso da letra que é do tipo char, vc deve indicar que o ponteiro ptrG
	está apontando para um char. Isso é feito via cast. Primeiro vc faz o cast depois
	coloca o sinal de desreferenciamento. 
	*(cast para tipo desejado)NomePonteiroGenerico
	Agora o compilador sabe que deve ler 1byte para colocar um char na tela!
	*/
}