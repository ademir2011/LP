#ifndef _TELA_H_
#define _TELA_H_

class Tela
{
	int opcao;
public:

	void telainicial1();
	int  telainicial2();

	void setopcao(int op1){ opcao = op1; }

	int getopcao() const { return opcao; }

};

#endif