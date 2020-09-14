#include <iostream>

int main() // FIBONACCI
{
	int a, b, c, cont;
	a = 0;
	b = 1;
	std::cout << " " << a;
	std::cout << " " << b;
	for (int cont = 3; cont < 15; cont++)
	{
		c = a + b;
		std::cout << " " << c;
		a = b; // a recebe o valor de b
		b = c; // b recebe o valor de c
	/* No caso de a=0 e b=1, c=a+b=0+1=1 os novos valores ficariam: a=b=1 e b=c=1
	No próximo looping, a e b ja começam com os novos valores e c fica c=a+b=1+1=2 ... */
	}
	system("PAUSE");
	return 0;
}