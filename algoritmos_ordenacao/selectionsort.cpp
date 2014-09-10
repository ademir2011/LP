#include <iostream>

using namespace std;

void selectionsort(int v[], int tam)
{
	int aux, min;
	for (int i = 0; i < tam-1; i++)
	{
		min = i;
		for (int j = i+1; j < tam; j++)
		{
			if (v[j]<v[min])
			{
				min = j;
			}
		}
		aux = v[i];
		v[i] = v[min];
		v[min] = aux;
	}
}

int main()
{
	int vet[] = {312, 1286, 16523, 362, 12762, 2882, 3873, 377, 36, 5111, 0, 0};
	int tam = 12;

	selectionsort(vet, tam);

	for (int i = 0; i < tam; ++i)
	{
		cout<<vet[i]<<endl;
	}

	return 0;
}


