#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

/* #include <> vai procurar no diretório padrão include do compilador
 Já #include "" procura no diretório corrente, atual do seu programa*/

/*Neste arquivo .cpp você coloca a implementação de todas as funções do arquivo .h relacionado*/

//IMPLEMENTAÇÕES DAS FUNÇÕES

//Função não retorna nada, logo o retorno é vazio(void).
//Além disso a função não possui nenhuma variável local(parâmetros).
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		//ProcessarEscolha(RetornarEscolha()); /*Aqui a função ProcessarEscolha deve receber como
		/*parâmetro um inteiro. Colocamos abaixo a chamada da função RetornarEscolha que ao ser executada
		/*ira retornar um inteiro que sera digitada pelo usuário*/
	} while (ProcessarEscolha(RetornarEscolha()) != 3);
	//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando 
	//que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop 
	//do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	return escolha;
}

// ProcessarEscolha recebe como parâmetro um número inteiro e armazena este argumento
// passado no parâmetro TipoEscolha que é uma variável local a esta função
// ***Significa que esta variável só existe na memória quando a função está sendo executada.
// Quando a função chega ao seu final essa variável deixa de existir na memória
// Por isso funções são fundamentais para otimização de memórias
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
	default: std::cout << "\nOpção Inválida!!!\n";
		// Aqui não retorna pois ao achar a escolha o break sai do switch
	}
	// Já aqui depois de processar o switch vai sair dele e chegar no return escolha
	return TipoEscolha;
}