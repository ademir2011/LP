#ifndef _AULA23_EX2_H_
#define _AULA23_EX2_H_

class Laboratorio
{

public:
	int m, n;
	int **matriz;

	Laboratorio(int l, int c);
	void libera();
	void acessa(int l, int c);
	void atribui(int l, int c, int val);
	void linha();
	void coluna();

};

#endif