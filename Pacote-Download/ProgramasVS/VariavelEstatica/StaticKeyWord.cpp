#include <iostream>

int ContadorChamadas()
{
	/* Variável estática: Significa que após a saída da função o valor destar
	variável não será perdido. Static indica que o valor será mantido mesmo após
	a função ser encerrada. */
	static int NumChamadaFuncao = 0;
	NumChamadaFuncao++;
	return NumChamadaFuncao;
}

/* Compilador pula a criação da variável (quando é variável static).
   Pois agora ela foi criada uma única vez e irá preservar seus dados. */

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;

	}
	system("PAUSE");
	return 0;
}