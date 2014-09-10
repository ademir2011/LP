#include <iostream>

using namespace std;

int main()
{
	int m,n;
	cout<<"Digite o tamanho da matriz: "<<endl<<"M: ";
	cin>>m;
	cout<<"N: ";
	cin>>n;

	double matriz1[m][n],matriz2[m][n];

	double** matriz = new double*[m];

	if (matriz!=NULL)
	{
		for (int i = 0; i < m; ++i)
		{
			matriz[i] = new double[n];
			if (matriz[i] == NULL)
			{
				cout<<"Memoria insuficiente"<<endl;
				break;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<"matriz1["<<i<<"]["<<j<<"]";
			cin>>matriz1[i][j];
			cout<<"matriz2["<<i<<"]["<<j<<"]";
			cin>>matriz2[i][j];

			matriz[i][j]+=(matriz1[i][j]+matriz2[i][j]);
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

	if (matriz != NULL)
	{
		for (int i = 0; i < m; i++)
			delete matriz[i];
		delete matriz;
	}

	return 0;
}