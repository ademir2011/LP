#include <iostream>

using namespace std;

Elemento* criarlista()
{
	return NULL;
}

void imprime(Elemento lista)
{
	Elemento *p;
	for (p = lista; p != NULL; p->prox)
		cout<<p->elementos[p]<<endl;
}