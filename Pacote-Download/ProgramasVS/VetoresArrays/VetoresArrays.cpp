#include <iostream>

int main()
{
	float Nota[5] = {0.0f};
	float Media, Soma{ 0.0 }; //Importante iniciar variáveis contadoras ou acumuladoras (zerar)
	std::string NomeAluno;
	std::cout << "Digite o nome do aluno: ";
	std::cin >> NomeAluno;
	for (int i = 0; i < 5 ; i++)
	{
		std::cout << "\nDigite a nota " << (i+1) << ": "; //Usa i+1 para começar por 1 na tela, não soma na memória RAM
		std::cin >> Nota[i];
		Soma = Soma + Nota[i];
		system("CLS"); //Comando de limpar tela
	}

	Media = Soma / 5;
	std::cout << "\nMedia final do aluno: " << Media << "\n";
	system("PAUSE");
	return 0;
}