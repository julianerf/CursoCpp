#include <iostream>

int ContadorChamadas()
{
	/* Vari�vel est�tica: Significa que ap�s a sa�da da fun��o o valor destar
	vari�vel n�o ser� perdido. Static indica que o valor ser� mantido mesmo ap�s
	a fun��o ser encerrada. */
	static int NumChamadaFuncao = 0;
	NumChamadaFuncao++;
	return NumChamadaFuncao;
}

/* Compilador pula a cria��o da vari�vel (quando � vari�vel static).
   Pois agora ela foi criada uma �nica vez e ir� preservar seus dados. */

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;

	}
	system("PAUSE");
	return 0;
}