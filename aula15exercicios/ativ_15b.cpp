#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Digite a quantidade de alunos: ";
	cin >> n;

	double *vet = new double[n];
	double media = 0;

	for (int i = 0; i < n; i++)
	{
		cout<<"Nota aluno "<<i+1<<" : ";
		cin>>vet[i];
		media += vet[i];
	}

	cout<<"Media dos alunos: "<<media/n<<endl;

	delete [] vet;

	return 0;
}