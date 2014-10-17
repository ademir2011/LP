#include <iostream>
#include "gato.h"
#include "tela.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{

	int op1 = 0, criar = 0;
	bool close = false;
	Tela tela;

	tela.telainicial1();
	tela.setopcao(1);
	op1 = tela.getopcao();

	cin>>op1;
	switch(op1)
	{
		case 1:
			tela.telainicial2();
			break;
		default:
			cout<<"Até outro dia amigo !"<<endl;
			break;
	}
	return 0;
}