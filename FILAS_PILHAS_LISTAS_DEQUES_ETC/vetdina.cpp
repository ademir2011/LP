#include <iostream>

using namespace std;

typedef struct {
	int dia;
	int mes;
	int ano;
		
}Data;

typedef struct{
	int cod;
	Data data;
}Classe;

int main()
{
	Classe classe;
	cout<<"Digite o codigo"<<endl;
	cin>>classe->cod;
	cout<<"Digite o dia, mes e ano"<<endl
		<<"Dia:";
		cin>>classe->data->dia;
		cout<<"Mes:";
		cin>>classe.data->mes;
		cout<<"ano:";
		cin>>classe.data.ano;

	cout<<"Dia: "<<classe.data.dia<<endl
		<<"Mes: "<<classe.data.mes<<endl
		<<"Ano: "<<classe.data.ano<<endl
	return 0;
}