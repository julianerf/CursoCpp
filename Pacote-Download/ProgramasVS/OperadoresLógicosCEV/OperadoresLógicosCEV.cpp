#include <iostream>
#include <string.h>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");
	char Nome; // Vari�vel Nome s� recebe uma letra pois � apenas um char
	// Para receber uma string precisar usar ponteiros, structs, etc. (pr�ximas aulas)
	int Salario, Dep, NSalario;
	std::cout << "Nome do funcion�rio: ";
	std::cin >> Nome;
	std::cout << "Sal�rio do funcion�rio: ";
	std::cin >> Salario;
	std::cout << "N�mero de dependentes: ";
	std::cin >> Dep;
	switch (Dep)
	{
	case 0: NSalario = Salario + (Salario * 5 / 100);
		break;
	case 1: 2; 3; NSalario = Salario + (Salario * 10 / 100);
		break;
	case 4: 5; 6; NSalario = Salario + (Salario * 15 / 100);
		break;
	default: std::cout << "numero invalido";
		break;
	}
	std::cout << "O novo sal�rio de " << Nome << " ser� de R$ " << NSalario << std::endl;
	system("PAUSE");
	return 0;
}