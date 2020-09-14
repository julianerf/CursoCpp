#include <iostream>

int main()
{
	int Vetor[] = { 1,23,-78,900,234 };
	int *Ptr;
	Ptr = Vetor; //Nesse momento Ptr come�a a apontar para o endere�o do Vetor 
	//No caso, aponta para o primeiro byte do endere�o, por isso pode-se dizer q � o mesmo que &Vetor[0]
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor [ " << i << " ] endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}
	std::cout << "\n **Enderecos com aritmeticas de ponteiros** \n";
	std::cout << "Endere�o contido em (Ptr+0): " << (Ptr+0) << " Valor: " << *(Ptr+0) << "\n";
	std::cout << "Endere�o contido em (Ptr+1): " << (Ptr + 1) << " Valor: " << *(Ptr + 1) << "\n";
	// (Ptr+1) pega o endere�o de Ptr e desloca uma unidade de tamanho do tipo do ponteiro, como Ptr � int, ou seja, aponta para vari�veis do tipo int, nesta arquitetura ele vaisomar 4bytes.
	// *(Ptr+1) faz o desreferenciamento do ponteiro. Primeiro ele faz a aritm�tica do ponteiro e vai somar 4bytes a Ptr e com isso vai chegar at� o elemento de indice 1
	std::cout << "Endere�o contido em (Ptr+2): " << (Ptr + 2) << " Valor: " << *(Ptr + 2) << "\n";
	std::cout << "Endere�o contido em (Ptr+3): " << (Ptr + 3) << " Valor: " << *(Ptr + 3) << "\n";
	std::cout << "Endere�o contido em (Ptr+4): " << (Ptr + 4) << " Valor: " << *(Ptr + 4) << "\n";
	// O valor de Ptr N�O mudou! Oq est� dentro de Ptr n�o ir� mudar, pois o comando apenas usa o valor de Ptr.
	// O comando n�o indica que seja mudado nada na mem�ria, para isso seria Ptr=Ptr+1 ou Ptr++ por exemplo
	std::cout << "Valor contido em Ptr: " << Ptr << "\n"; // (Ptr+0) � o mesmo que Ptr
	// (Ptr+0) pega o endere�o de Ptr e adiciona zero, logo � o endere�o do primeiro elemento do vetor, j� que Ptr aponta para o primeiro elemento.
	// Ptr = Vetor ou Ptr = &Vetor[0]
	Ptr++;
	std::cout << "Valor contido em Ptr depois de Ptr++: " << Ptr << "\n";
	Ptr = &Vetor[3]; //Ptr passa a apontar para 900
	Ptr--; //Decrementa e aponta para -78 ou Vetor[2]
	std::cout << "Valor do apontado por Ptr: " << *Ptr << "\n";
	Ptr = Vetor; // Faz com que Ptr aponte novamente para o in�cio do vetor
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor [ " << i << " ] = " << *(Ptr + i) << "\n";
	}
	//Tamb�m pode agora colocar o vetor desta forma usando ponteiros
	// *(Ptr+i) far� o mesmo trabalho contido em: *(Ptr+1,+2,+3...)
	// Pode-se substituir *(Ptr+i) simplesmente por Ptr[i], ou seja, os dois s�o equivalentes
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor [ " << i << " ] = " << Ptr[i] << "\n";
	}
	// Vetor[i] tamb�m � o mesmo que *(Vetor+i)
	// Como o nome do vetor � o mesmo que &Vetor[0], ent�o *(Vetor+i) = *(&Vetor[0]+i), 
	// *(&Vetor[0]+2) = Vetor[2]
	std::cout << "*(&Vetor[0]+2) = " << *(Vetor + 2) << " Mesmo que Vetor[2] = " << Vetor[2] << "\n";
	// *(&Vetor[0]+2) � igual *(Vetor + 2)
	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *(&Vetor[0]+i) << " ";
	}
	std::cout << " ]";
	system("PAUSE");
	return 0;
}