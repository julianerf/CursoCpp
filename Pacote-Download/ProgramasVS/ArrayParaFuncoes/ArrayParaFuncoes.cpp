// Enviar um Array para uma fun��o e calcular seu tamanho
#include <iostream> 

void MostrarVetor(int Array[], int TamVetor);
void AlteraVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };
	//Para enviar um vetor para uma fun��o basta enviar o nome do vetor 
	/*Sizeof devolve o n�mero em bytes do tamanho de uma vari�vel ou tipo
	Logo sizeof(vetor) vai devolver o n�mero de elementos do vetor multiplicado pelo tamanho do seu tipo.
	Pois s�o gastos 4 bytes por inteiro neste vetor e como s�o 10 elementos, o vetor ter� tamanho de 40bytes.
	Mas precisamos saber o tamanho de fato do vetor, por isso dividimos pelo tipo do vetor*/

	int TamanhoVetor = sizeof(Vetor)/sizeof(int); // Agora ser�o 40bytes divididos por 4 = 10 
	std::cout << "Tamanho do vetor: " << TamanhoVetor << "\n";
	std::cout << "Vetor Original\n";
	MostrarVetor(Vetor,TamanhoVetor); //Aqui seria o mesmo que colocar &Vetor[0] 
	AlteraVetor(Vetor,TamanhoVetor);
	std::cout << "Vetor Alterado\n";
	MostrarVetor(Vetor, TamanhoVetor);
	// Os vetores s�o enviados para as fun��es por refer�ncia.
	// Pq o nome de um vetor em C/C++ � o mesmo que &Vetor[0]
	/* Ao escrever o nome de um vetor sem colchetes � o mesmo que escrever o endere�o de mem�ria do primeiro elemento */
	system("PAUSE");
	return 0;
}
// Para receber um vetor basta colocar o tipo nome do vetor e []
// ou tamb�m j� com o tamanho  ex: int array[10] 

// int Array[] na vdd indica que ele � um ponteiro! Pode-se substituir o mesmo por um.
void MostrarVetor(int Array[], int TamVetor) // Pode substituir Array[] por *Ptr_Array (ponteiro que recebe o valor do elemento i do vetor)
{
	//std::cout << "Vetor Original";
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "-" << Array[i] << "-"; // Aqui apenas Ptr_Array[i] 
	}
	std::cout << "\n\n";
}

// Ptr_Array[i] � o mesmo que *(Ptr_Array+1) => ARITM�TICA DE PONTEIROS

void AlteraVetor(int Array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		Array[i] = Array[i] * 2;
	}
}

// No C++ a partir de 2017 (C++17) surgiu uma nova fun�ao:
// std::size(Vetor)
// int TamanhoVetor = std::size(Vetor) 
// Nesse caso n�o precisa dividir, j� da o valor direto do vetor