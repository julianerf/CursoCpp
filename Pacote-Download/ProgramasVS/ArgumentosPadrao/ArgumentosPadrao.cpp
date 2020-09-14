#include <iostream>

// DEFAULT ARGUMENT
/* Você pode criar valores padrões no protótipo e então quando você chamar a função
poderá omitir argumentos, pois a função irá utilizar o argumento padrão se você
não informar o argumento qunado da chamada da função. 
Para colocar um valor padrão basta colocar =*/

void Coordenadas(int x, int y, int z = 9);
/* Você não é obrigado a colocar todos os argumentos padrão.
Porém se deixar algum de fora deve seguir a regra que precisa 
colocar da direita pra esquerda. */

int main()
{
	Coordenadas(5,6);
	system("PAUSE");
	return 0;
}

/* Apesar da função solicitar na chamada a colocação de 3 argumentos que serão 
enviados aos parâmetros x, y e z. Esta chamada irá funcionar sem vocÊ colocar
argumentos, pois ela tem argumentos padrão. */

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "( " << x << " - "<< y << " - " << z << " )";
}