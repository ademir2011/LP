#include <iostream>
#include <deque>

using std::cout;
using std::cin;
using std::endl;
using std::deque;

int main()
{ 
	deque<double>dq1;
	bool close = false;
	int op;
	double num;

	while(!close)
	{
		cout<<"[1] - inserir valor no inicio"<<endl
			<<"[2] - inserir valor no final"<<endl
			<<"[3] - retirar valor do inicio"<<endl
			<<"[4] - retirar valor do final"<<endl
			<<"[5] - listar conteudo"<<endl
			<<"[6] - remover elementos"<<endl
			<<"[7] - fim"<<endl;

			cin>>op;
			
			switch(op)
			{
				case 1:
					cin>>num;
					dq1.push_front(num); 
					break;
				case 2:
					cin>>num;
					dq1.push_back(num);
					break;
				case 3:
					cin>>num;
					dq1.pop_front(num);
					break;
				case 4:
					cin>>num;
					dq1.pop_back(num);
					break;
				case 5:
					for (int i = 0; i < dq1.size(); i++)
					{
						cout<<dq1.at(i);
					}
					break;
				case 6:
					dq1.clear();
					break;
				case 7:
					close = true;
					break;				

			}
	}
} 