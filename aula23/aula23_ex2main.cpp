#include <iostream>
#include "aula23_ex2.h"

using std::cin;
using std::endl;
using std::cout;

int main()
{
	bool close = false;
	int  op = 0, op0 = 0, l = 0, c = 0;

	cout<<"Deseja criar uma conta ?"<<endl
		<<"[1] - sim"<<endl
		<<"[2] - nao"<<endl;
		cin>>op0;

if (op0 == 1)
{

	cout<<"M: ";
	cin>>l;
	cout<<"N: ";
	cin>>c;

	Laboratorio laboratorio(l,c);

	while(!close)
	{
		cout<<"[1] - Libera"<<endl
			<<"[2] - Acessa"<<endl
			<<"[3] - Atribui"<<endl
			<<"[4] - Linhas"<<endl
			<<"[5] - Colunas"<<endl;
			cin>>op;

		switch(op)
		{
			case 1:
					laboratorio.libera();
				break;
			case 2:
					cout<<"M: ";
					cin>>l;
					cout<<"N: ";
					cin>>c;
					laboratorio.acessa(l,c);
				break;
			case 3:
					int val;
					cout<<"M, N e Valor para atribuir:"<<endl<<"M: ";
					cin>>l;
					cout<<"N: ";
					cin>>c;
					cout<<"Valor: ";
					cin>>val;

					laboratorio.atribui(l,c,val);
				break;	
			case 4:
					laboratorio.linha();
				break;
			case 5:
					laboratorio.coluna();
				break;

			default:
				break;
		}
	}
}
else{}

	return 0;
}