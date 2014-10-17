#include <iostream>

#define MAX 100

using std::cout;
using std::cin;
using std::endl;

typedef struct
{
	char nome[MAX];
	int idade;
}Cliente;

typedef struct
{
	int size;
	Cliente vet[MAX];
}Lista;

void criarLista(Lista* lista)
{
	lista->size = 0;
}

void inserirFinalLista(Lista* lista, Cliente cl)
{
	lista->vet[lista->size] = cl;
	lista->size++; 
}

void inserirPosicao(Lista* lista, int pos, Cliente cl)
{
	if (pos >= lista->size)
	{
		inserirFinalLista(lista, cl);
	}
	else
	{
		for (int i = lista->size; i > pos ; i--)
		{
			lista->vet[i]=lista->vet[i-1];
		}
		lista->vet[pos] = cl;
		lista->size++;
	}
}

void inserirInicioLista(Lista* lista, Cliente cl)
{
	inserirPosicao(lista, 0, cl);
}

void listarIniToFim(Lista* lista)
{
	Cliente cl;
	for (int i = 0; i < lista->size; i++)
	{
		cl = lista->vet[i];
		cout<<"Nome: "<<cl.nome<<endl;
		cout<<"Idade: "<<cl.idade<<endl;
	}
}

void destruirLista(Lista lista)
{
	lista->size = 0;
}

int main()
{	
	int op = 0, pos = 0;
	Lista lista;
	Cliente cl;
		
	bool close = false;

	while(!close)
	{
		cout<<"[1] - Criar Lista"<<endl;
		cout<<"[2] - Inserir no final da Lista"<<endl;
		cout<<"[3] - Inserir no inicio Lista"<<endl;
		cout<<"[4] - Inserir numa posicao Lista"<<endl;
		cout<<"[5] - Exibir lista"<<endl;
		cout<<"[6] - Destruir lista"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
				criarLista(&lista);
				cout<<"Lista criada com sucesso!"<<endl;
				break;
			case 2:
				cout<<"Digite o nome do cliente"<<endl;
				cin>>cl.nome;
				cout<<"Digite a idade do cliente"<<endl;
				cin>>cl.idade;
				inserirFinalLista(&lista, cl);
				break;
			case 3:
				cout<<"Digite o nome do cliente"<<endl;
				cin>>cl.nome;
				cout<<"Digite a idade do cliente"<<endl;
				cin>>cl.idade;
				inserirFinalLista(&lista, cl);
				break;
			case 4:
				cout<<"Escolha a posicao que deseja adicionar"<<endl;
				cin>>pos;
				cout<<"Digite o nome do cliente"<<endl;
				cin>>cl.nome;
				cout<<"Digite a idade do cliente"<<endl;
				cin>>cl.idade;
				inserirPosicao(&lista, pos, cl);
				break;

			case 5:
				listarIniToFim(&lista);
				break;
			case 6:

		}
	}
	
	return 0;
}