#include "aula23_ex2.h"
#include <iostream>
#include <cstdlib>

using std::cin;
using std::endl;
using std::cout;

Laboratorio::Laboratorio(int l, int c)
{
	m = l;
	n = c;
	matriz = new int*[m];
	if (matriz != NULL)
		for (int i = 0; i < m; i++)
		{
			matriz[i] = new int[n];
			if (matriz[i] == NULL)
			{
				cout<<"Overflow!"<<endl;
				break;
			}
		}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			matriz[i][j] = rand()%100; 
}

void Laboratorio::libera()
{
	if (matriz!=NULL)
	{
		for (int i = 0; i < 5; i++)
			delete matriz[i];
		delete matriz;
	}
}

void Laboratorio::acessa(int l, int c)
{
	cout<<matriz[l][c]<<endl;
}

void Laboratorio::atribui(int l, int c, int val)
{
	matriz[l][c] = val;
	cout<<matriz[l][c]<<endl;
}

void Laboratorio::linha()
{
	cout<<m<<endl;
}

void Laboratorio::coluna()
{
	cout<<n<<endl;
}