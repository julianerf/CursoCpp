#include <iostream>

int main()
{
	float num1, num2, num3, media;
	std::cout << "Digite a primeira nota: ";
	std::cin >> num1;
	std::cout << "Digite a segunda nota: ";
	std::cin >> num2;
	std::cout << "Digite a terceira nota: ";
	std::cin >> num3;
	media = (num1 + num2 + num3) / 3;
	std::cout << "Numeros digitados: " << num1 << " " << num2 << " " << num3 << "\n";
	std::cout << "Media final: " << media << "\n";
	system("PAUSE");
} 