#include <iostream>
#include "Matematica.h"
#include <cmath>

// ESCOPO da variável: a visibilidade da variável, se é global, local, etc.
/* Variáveis declaradas entre chaves, somente será acessivel dentro das chaves,
	dentro do escopo {} de onde ela foi declara*/
int NumeroGlobal = 10;
/* Variável global pois foi declarada fora de qualquer função.
Logo ela será acessível em qualquer função, incluindo a função main() */

int Soma(int n1, int n2)
{
	/* Esta variável só é acessível dentro da função soma */
	int NumeroLocal = 5;
	return n1 + NumeroGlobal;
}

int Subtracao(int n1, int n2)
{
	/* Apesar de ter o mesmo nome, essas variáveis terão endereços de memória
	diferente das outras funções e portanto não havera conflito nos nomes destas
	variáveis. O processador enxerga o endereço da variável e não seu nome. 
	Parecem iguais mas tem diferentes endereços na memória. */
	return n1 - n2;
}

int Multiplicacao(int n1, int n2)
{
	return n1 * n2;
}

float Divisao(int n1, int n2)
{
	/*Faz uma divisão inteira de dados pois n1 e n2 são inteiros
	mas podemos fazer um "cast"(conversão explicita de dados) */
	return (float)n1 / (float)n2;
}

int Potencia(int n1, int n2)
{
	return pow(n1,n2);
}

float RaizQuadrada(float num)
{
	return sqrt(num);
}
