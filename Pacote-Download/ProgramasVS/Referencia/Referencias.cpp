#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	// &Ref declara uma refer�ncia; Significa que foi criado um apelido (um "alias") para 
	// Nesse caso n�o � criada uma regi�o de mem�ria que vai conter algo dentro e q seria chamado Ref (Ref n�o tem endere�o na RAM)
	// N�o � uma vari�vel que podemos colocar algo dentro; � apenas um atalho (novo nome para Numero)
	int& Ref = Numero;
	// Numero e Ref compartilham o mesmo endere�o de mem�ria
	std::cout << "Valor de Numero usando Ref: " << Ref << "\n";
	std::cout << "Endereco de memoria de Numero: " << &Numero << "\n";
	std::cout << "Endereco de memoria de Ref: " << &Ref << "\n";
	// Observe que &Ref ir� retornar o endere�o de Numero pois uma refer�ncia nasce 
	// e fica como novo r�tulo da vari�vel que ela referencia. Estando portanto no
	// mesmo endere�o de Numero, neste caso.
	int* ptr = &Numero;
	std::cout << "Endereco de memoria de ptr: " << &ptr << "\n";
	std::cout << "Valor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "Endereco de memoria dentro de ptr: " << ptr << "\n";
	// J� aqui ser� criada uma vari�vel, um espa�o na mem�ria RAM e dentro deste espa�o  
	// de nome ptr ser� coloca o endere�o de mem�ria de Numero.
	// � muito diferente da referencia, pois esta n�o contem espa�o alocado, ela apenas
	// � mais um nome (um r�tulo,apelido...) para referenciar a vari�vel.
	system("PAUSE");
	return 0;
}