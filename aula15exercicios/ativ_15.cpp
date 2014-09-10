#include <iostream>

using namespace std;

void funcao(int vet[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Digite o valor " << i + 1 << " : ";
		cin >> vet[i];
	}
}

int main()
{
	int n;
	cout << "Digite o tamanho do vetor a ser alocado: ";
	cin >> n;
	int *vet = new int[n];
	funcao(vet, n);

	for (int i = 0; i < n; i++)
	cout << "Vet[" << i << "] : "<< vet[i] << endl;

	delete [] vet;

	return 0;
}