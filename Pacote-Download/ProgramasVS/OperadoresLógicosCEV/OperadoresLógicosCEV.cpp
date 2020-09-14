#include <iostream>
#include <string.h>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");
	char Nome; // Variável Nome só recebe uma letra pois é apenas um char
	// Para receber uma string precisar usar ponteiros, structs, etc. (próximas aulas)
	int Salario, Dep, NSalario;
	std::cout << "Nome do funcionário: ";
	std::cin >> Nome;
	std::cout << "Salário do funcionário: ";
	std::cin >> Salario;
	std::cout << "Número de dependentes: ";
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
	std::cout << "O novo salário de " << Nome << " será de R$ " << NSalario << std::endl;
	system("PAUSE");
	return 0;
}