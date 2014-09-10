#include <iostream>

using namespace std;

void insertionsort(int v[], int tam)
{
	int key, j;
	for (int i = 1; i < tam; i++)
	{
		key = v[i];
		j = i - 1;

		while(j >= 0 && key<v[j])
		{
			v[j+1]=v[j];
			j--;
		}
		v[j+1] = key;
	}
}

int main(int argc, char const *argv[])
{
	int vet[] = {312, 1286, 16523, 362, 12762, 2882, 3873, 377, 36, 5111, 0, 0};
	int tam = 12;

	insertionsort(vet, tam);

	for (int i = 0; i < tam; ++i)
	{
		cout<<vet[i]<<endl;
	}

	return 0;
}

buscasdas()
{
	int key, j;
	for (int i = 1; i < tam; ++i)
	{
		key = v[i];
		j = i-1;
		while(j>=0 && key < v[j])
		{
			v[j+1]=v[j]; 
			j--;
		}
		v[j+1]=key;
	}
}



busxa ()
{
	int j, key;
	for (int i = 1; i < tam; ++i)
	{
		key = v[i];
		j = i - 1;
		while(j>=0 && key<v[j])
		{
			v[j+1]=v[j];
			j--;
		}
		v[j+1] = key;
	}
}
