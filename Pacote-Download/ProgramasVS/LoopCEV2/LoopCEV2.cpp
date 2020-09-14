#include <iostream>

int main()
{
	float nota, Naluno, cont, melhor;
	std::string aluno, Maluno;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "         ESCOLA SANTA PACIENCIA        " << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Quanto alunos tem a turma? ";
	std::cin >> Naluno;
	cont = 0;
	melhor = 0;
	while (cont<Naluno)
	{
		std::cout << "Nome do aluno: ";
		std::cin >> aluno;
		std::cout << "Nota do aluno: ";
		std::cin >> nota;
		cont = cont++;
		if (nota > melhor)
		{
			melhor = nota;
			Maluno = aluno;
		}
	}
	std::cout << "A melhor aproveitamento foi de " << Maluno << " com a nota "<< melhor <<std::endl;


}