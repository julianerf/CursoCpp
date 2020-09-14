#include <iostream>

// DEFAULT ARGUMENT
/* Voc� pode criar valores padr�es no prot�tipo e ent�o quando voc� chamar a fun��o
poder� omitir argumentos, pois a fun��o ir� utilizar o argumento padr�o se voc�
n�o informar o argumento qunado da chamada da fun��o. 
Para colocar um valor padr�o basta colocar =*/

void Coordenadas(int x, int y, int z = 9);
/* Voc� n�o � obrigado a colocar todos os argumentos padr�o.
Por�m se deixar algum de fora deve seguir a regra que precisa 
colocar da direita pra esquerda. */

int main()
{
	Coordenadas(5,6);
	system("PAUSE");
	return 0;
}

/* Apesar da fun��o solicitar na chamada a coloca��o de 3 argumentos que ser�o 
enviados aos par�metros x, y e z. Esta chamada ir� funcionar sem voc� colocar
argumentos, pois ela tem argumentos padr�o. */

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "( " << x << " - "<< y << " - " << z << " )";
}