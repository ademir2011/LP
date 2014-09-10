#include <iostream>

using namespace std;

void bubblesort(int v[], int tam)
{
	int aux;
	for (int i = tam-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[j]>v[j+1])
			{
				aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;
			}
		}
	}
}

int main()
{
	int vet[] = {312, 1286, 16523, 362, 12762, 2882, 3873, 377, 36, 5111, 0, 0};
	int tam = 12;

	bubblesort(vet, tam);

	for (int i = 0; i < tam; ++i)
	{
		cout<<vet[i]<<endl;
	}

	return 0;
}
