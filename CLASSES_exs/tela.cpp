#include <iostream>
#include "tela.h"
#include "gato.h"

using std::cin;
using std::cout;
using std::endl;

void  Tela::telainicial1() 
{
cout<<"+------------------------+"<<endl
	<<"| ----- CATS GAMES ----- |"<<endl
	<<"+------------------------+"<<endl
	<<"| ---- [1] - Start ----- |"<<endl
	<<"+------------------------+"<<endl;
}

//alimenta o gato
void darcomida(Gato gato)
{
	int comida = 0;
	cout<<"Alimente seu gato !"<<endl
		<<"voce tem "<<gato.getsaldo()<<" cash"<<endl
		<<"Nivel de fome: "<<gato.getfomeGato()<<endl
		<<"[1] - racao nivel 1 - 20 cash"<<endl
		<<"[2] - racao nivel 1 - 40 cash"<<endl
		<<"[3] - racao nivel 1 - 60 cash"<<endl;

	cin>>comida;
	gato.setfomeGato(comida*-1);
}

void passeargato(Gato gato)
{
	int passeio = 0;
	cout<<"Passeie com seu gato !"<<endl
		<<"voce tem "<<gato.getsaldo()<<" cash"<<endl
		<<"Nivel de felicidade: "<<gato.getanimoGato()<<endl
		<<"[1] - parque - 20 cash"<<endl
		<<"[2] - shopping - 40 cash"<<endl
		<<"[3] - tuts tuts - 60 cash"<<endl;
		cin>>passeio;
		gato.setanimoGato(passeio*2);
		gato.setfomeGato(passeio);
}

void fazershow(Gato gato)
{
	int show = 0;
	cout<<"Aqui podemos ganhar um cash extra !"<<endl
		<<"voce tem "<<gato.getsaldo()<<" cash"<<endl
		<<"[1] - show no barzim - 10 cash - fome (-5)"<<endl
		<<"[2] - show no tuts tuts - 20 cash fome (-10)"<<endl
		<<"[3] - show tomorrowland - 30 cash fome (-15)"<<endl;
		cin>>show;
		gato.setfomeGato(show*-5);
}

void telainicial3(Gato gato)
{

int flagRacao,opmenu;
bool close = false;
	
	while(!close)
	{
		cout<<"+------------------------+"<<endl
			<<"[1] - Dar comida ao gato"<<endl
			<<"[2] - levar o gato para passear"<<endl
			<<"[3] - Fazer algum show com seu gato"<<endl
			<<"+------------------------+"<<endl
			<<"Seu nivel de fome:"<<gato.getfomeGato()<<endl
			<<"Seu nivel de felicidade:"<<gato.getanimoGato()<<endl
			<<"Idade:"<<gato.getidadeGato()<<endl
			<<"Seu saldo:"<<gato.getsaldo()<<endl
			<<"+------------------------+"<<endl;

			cin>>opmenu;

			switch(opmenu)
			{
				case 1:
					darcomida(gato);
					break;
				case 2:
					passeargato(gato);
					break;
				case 3:
					fazershow(gato);
					break;
				default:
					cout<<"Tente novamente!";
					break;
			}

			//mata o gato
	}

}

int Tela::telainicial2() 
{

	char c;
	cout<<"Bem vindo !"<<endl
		<<"e hora de criar seu gatinho !"<<endl
		<<"digite c para criar seu gato !"<<endl
		<<"voce vai comecar com 100 cash para comprar comida"<<endl
		<<"e se divertir com bichinho !"<<endl;

		cin>>c;

	if (c=='c')
	{
		//cria o gato
		Gato gato(10, 10, 0, 100);
		telainicial3(gato);
	}
	else
	{
		cout<<"tecla errada amiguinho !"<<endl;
	}
}

