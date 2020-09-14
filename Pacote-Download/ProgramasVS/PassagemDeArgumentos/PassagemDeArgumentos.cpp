#include <iostream>

// Aqui foi indicado que a função receberá endereços de memória, pois são 2 ponteiros
// Asiim qdo enviar parâmetros para a função, deve-se enviar o endereço de memória das variáveis.
void TrocaNumeros(int *Num1, int *Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo número: ";
	std::cin >> Numero2;

	std::cout << " Valores antes da troca " << "\n";
	std::cout << "Número 1: " << Numero1 << "\n";
	std::cout << "Número 2: " << Numero2 << "\n";
	std::cout << "Endereço de memória de Numero1: " << &Numero1 << "\n";
    std::cout << "Endereço de memória de Numero2: " << &Numero2 << "\n";

	std::cout << " Valores depois da troca " << "\n";
	TrocaNumeros(&Numero1, &Numero2);
	std::cout << "Número 1: " << Numero1 << "\n";
	std::cout << "Número 2: " << Numero2 << "\n";

	system("PAUSE");
	return 0;
}

void TrocaNumeros(int *Num1, int *Num2)
/* Para fazer a troca entre dois número precisamos de um local temporário para
armazenar o valor de num1 antes dele receber novo valor */
{
	std::cout << "Endereço de memória de Num1: " << &Num1 << "\n";
	std::cout << "Endereço de memória de Num2: " << &Num2 << "\n";
	std::cout << "Endereço de memória dentro de Num1: " << Num1 << "\n";
	std::cout << "Endereço de memória dentro de Num2: " << Num2 << "\n";
	// Temp recebe o valor apontado por Num1
	int Temp { *Num1 }; //Variável temporária/auxiliar que guarda o valor de Num1
	// O valor apontado por Num1(Numero1) receberá o valor apontado por Num2(Numero2)
	*Num1 = *Num2;
	// O valor apontado por Num2 recebe o valro de Temp
	*Num2 = Temp;
	// Se Num1 é agora um ponteiro, terá dentro dele um endereço de memória
	// No caso de Temp, se esta tentando colocar um endereço de memória em uma variável do tipo inteiro
	// Lembre-se: a variável devolve oq está dentro dela!
	// Nesse caso queremos o valor q Num1 aponta, q neste caso é Numero1.
	// Por isso os ponteiros precisam ser desreferenciados.
}

/* Em passagem de parâmetro por valor esse programa não funcionaria, pois apenas uma
cópia do valor é enviado a função. São variáveis diferentes com endereços de memória
diferentes, mesmo que coloque o mesmo nome.*/

/* Passagem de valor/argumento por referência usa tanto usando referência como ponteiros */
