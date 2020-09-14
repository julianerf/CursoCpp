#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

/* #include <> vai procurar no diret�rio padr�o include do compilador
 J� #include "" procura no diret�rio corrente, atual do seu programa*/

/*Neste arquivo .cpp voc� coloca a implementa��o de todas as fun��es do arquivo .h relacionado*/

//IMPLEMENTA��ES DAS FUN��ES

//Fun��o n�o retorna nada, logo o retorno � vazio(void).
//Al�m disso a fun��o n�o possui nenhuma vari�vel local(par�metros).
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		//ProcessarEscolha(RetornarEscolha()); /*Aqui a fun��o ProcessarEscolha deve receber como
		/*par�metro um inteiro. Colocamos abaixo a chamada da fun��o RetornarEscolha que ao ser executada
		/*ira retornar um inteiro que sera digitada pelo usu�rio*/
	} while (ProcessarEscolha(RetornarEscolha()) != 3);
	//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando 
	//que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop 
	//do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	return escolha;
}

// ProcessarEscolha recebe como par�metro um n�mero inteiro e armazena este argumento
// passado no par�metro TipoEscolha que � uma vari�vel local a esta fun��o
// ***Significa que esta vari�vel s� existe na mem�ria quando a fun��o est� sendo executada.
// Quando a fun��o chega ao seu final essa vari�vel deixa de existir na mem�ria
// Por isso fun��es s�o fundamentais para otimiza��o de mem�rias
int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
		// Aqui n�o retorna pois ao achar a escolha o break sai do switch
	}
	// J� aqui depois de processar o switch vai sair dele e chegar no return escolha
	return TipoEscolha;
}