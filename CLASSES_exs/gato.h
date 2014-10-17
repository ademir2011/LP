#ifndef _GATO_H_
#define _GATO_H_

class Gato
{

	int fomeGato;
	int animoGato;
	int idadeGato;
	float saldo;

public:

	Gato(int fomeGato = 0, int animoGato = 0, int idadeGato = 0, int saldo = 0);

	void setfomeGato(int fg)	{ fomeGato = fg;}
	void setanimoGato(int ag)	{ animoGato = ag;}
	void setidadeGato(int ig)	{ idadeGato = ig;}
	void setsaldo(int sal)		{ saldo = sal; }

	int getfomeGato()	{ return fomeGato;}
	int getanimoGato()	{ return animoGato;}
	int getidadeGato()	{ return idadeGato;}
	int getsaldo() 		{ return saldo;}

};

#endif