#include <iostream>

using namespace std;

int main()
{
	float nota_ve;
	float nota_vc;
	float p_vf;

	while(1)
	{
		cout << "insira sua media de ve:\n";
		cin >> nota_ve;

		if(nota_ve <= 10)
		{

			cout << "Insira sua media de vc:\n";

			cin >> nota_vc;
			if(nota_vc <= 10)
			{
				p_vf = (5 - (nota_ve + nota_vc) / 4) * 2;
				if(p_vf >= 4)
				{
					cout << "voce precisa tirar a seguinte nota na vf:\n" << p_vf;
				}
				else
				{
					cout << "voce precisa tirar 4 na vf\n";
				}

				break;
			}
			else
			{
				cout << "insina um valor menor que 10\n";
			}
		}
		else
		{

			cout << "Insira um valor menor que 10\n";
		}

	}
	return 0;

}
