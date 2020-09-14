#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	// &Ref declara uma referência; Significa que foi criado um apelido (um "alias") para 
	// Nesse caso não é criada uma região de memória que vai conter algo dentro e q seria chamado Ref (Ref não tem endereço na RAM)
	// Não é uma variável que podemos colocar algo dentro; É apenas um atalho (novo nome para Numero)
	int& Ref = Numero;
	// Numero e Ref compartilham o mesmo endereço de memória
	std::cout << "Valor de Numero usando Ref: " << Ref << "\n";
	std::cout << "Endereco de memoria de Numero: " << &Numero << "\n";
	std::cout << "Endereco de memoria de Ref: " << &Ref << "\n";
	// Observe que &Ref irá retornar o endereço de Numero pois uma referência nasce 
	// e fica como novo rótulo da variável que ela referencia. Estando portanto no
	// mesmo endereço de Numero, neste caso.
	int* ptr = &Numero;
	std::cout << "Endereco de memoria de ptr: " << &ptr << "\n";
	std::cout << "Valor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "Endereco de memoria dentro de ptr: " << ptr << "\n";
	// Já aqui será criada uma variável, um espaço na memória RAM e dentro deste espaço  
	// de nome ptr será coloca o endereço de memória de Numero.
	// É muito diferente da referencia, pois esta não contem espaço alocado, ela apenas
	// é mais um nome (um rótulo,apelido...) para referenciar a variável.
	system("PAUSE");
	return 0;
}