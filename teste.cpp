#include <iostream>

using namespace std;

class Teste
{

	int x;
	int y;

public:
	Teste(int x, int y);
	//~Teste();

	int getx(){return x;}
	int gety(){return y;}

	int setx(int xis){ return x;}
	int sety(int ipslon){ return y;}
};

Teste::Teste(int xis, int ipslon)
{
	x = xis;
	y = ipslon;
}

int main()
{
	Teste teste(100,100);
	cout<<teste.getx()<<endl;
	cout<<teste.gety()<<endl;
	return 0;
}