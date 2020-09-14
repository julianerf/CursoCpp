#include <iostream>
#include "Matematica.h"
#include <cmath>

// ESCOPO da vari�vel: a visibilidade da vari�vel, se � global, local, etc.
/* Vari�veis declaradas entre chaves, somente ser� acessivel dentro das chaves,
	dentro do escopo {} de onde ela foi declara*/
int NumeroGlobal = 10;
/* Vari�vel global pois foi declarada fora de qualquer fun��o.
Logo ela ser� acess�vel em qualquer fun��o, incluindo a fun��o main() */

int Soma(int n1, int n2)
{
	/* Esta vari�vel s� � acess�vel dentro da fun��o soma */
	int NumeroLocal = 5;
	return n1 + NumeroGlobal;
}

int Subtracao(int n1, int n2)
{
	/* Apesar de ter o mesmo nome, essas vari�veis ter�o endere�os de mem�ria
	diferente das outras fun��es e portanto n�o havera conflito nos nomes destas
	vari�veis. O processador enxerga o endere�o da vari�vel e n�o seu nome. 
	Parecem iguais mas tem diferentes endere�os na mem�ria. */
	return n1 - n2;
}

int Multiplicacao(int n1, int n2)
{
	return n1 * n2;
}

float Divisao(int n1, int n2)
{
	/*Faz uma divis�o inteira de dados pois n1 e n2 s�o inteiros
	mas podemos fazer um "cast"(convers�o explicita de dados) */
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
