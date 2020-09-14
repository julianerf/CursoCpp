#include <iostream>

// Aqui foi indicado que a fun��o receber� endere�os de mem�ria, pois s�o 2 ponteiros
// Asiim qdo enviar par�metros para a fun��o, deve-se enviar o endere�o de mem�ria das vari�veis.
void TrocaNumeros(int *Num1, int *Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero2;

	std::cout << " Valores antes da troca " << "\n";
	std::cout << "N�mero 1: " << Numero1 << "\n";
	std::cout << "N�mero 2: " << Numero2 << "\n";
	std::cout << "Endere�o de mem�ria de Numero1: " << &Numero1 << "\n";
    std::cout << "Endere�o de mem�ria de Numero2: " << &Numero2 << "\n";

	std::cout << " Valores depois da troca " << "\n";
	TrocaNumeros(&Numero1, &Numero2);
	std::cout << "N�mero 1: " << Numero1 << "\n";
	std::cout << "N�mero 2: " << Numero2 << "\n";

	system("PAUSE");
	return 0;
}

void TrocaNumeros(int *Num1, int *Num2)
/* Para fazer a troca entre dois n�mero precisamos de um local tempor�rio para
armazenar o valor de num1 antes dele receber novo valor */
{
	std::cout << "Endere�o de mem�ria de Num1: " << &Num1 << "\n";
	std::cout << "Endere�o de mem�ria de Num2: " << &Num2 << "\n";
	std::cout << "Endere�o de mem�ria dentro de Num1: " << Num1 << "\n";
	std::cout << "Endere�o de mem�ria dentro de Num2: " << Num2 << "\n";
	// Temp recebe o valor apontado por Num1
	int Temp { *Num1 }; //Vari�vel tempor�ria/auxiliar que guarda o valor de Num1
	// O valor apontado por Num1(Numero1) receber� o valor apontado por Num2(Numero2)
	*Num1 = *Num2;
	// O valor apontado por Num2 recebe o valro de Temp
	*Num2 = Temp;
	// Se Num1 � agora um ponteiro, ter� dentro dele um endere�o de mem�ria
	// No caso de Temp, se esta tentando colocar um endere�o de mem�ria em uma vari�vel do tipo inteiro
	// Lembre-se: a vari�vel devolve oq est� dentro dela!
	// Nesse caso queremos o valor q Num1 aponta, q neste caso � Numero1.
	// Por isso os ponteiros precisam ser desreferenciados.
}

/* Em passagem de par�metro por valor esse programa n�o funcionaria, pois apenas uma
c�pia do valor � enviado a fun��o. S�o vari�veis diferentes com endere�os de mem�ria
diferentes, mesmo que coloque o mesmo nome.*/

/* Passagem de valor/argumento por refer�ncia usa tanto usando refer�ncia como ponteiros */
