#include <iostream>

using namespace std;

//���ڿܿ� �ԷµǸ� ������ ���α׷� ���� ������� ���� Goto Ȱ���� ���ϰڴ� ��

bool GameState = true;

int main()
{
	int a = 0;
	int b = 0;

	string c;
	
	while (GameState)
	{
		cin >> a;
		
		cin >> b;

		if (a < b)
		{
			cout << b << " �� " << a << " ���� Ů�ϴ�!" << endl;
		}
		else if (a > b)
		{
			cout << a << " �� " << b << " ���� Ů�ϴ�!" << endl;
		}
		else if (a == b)
		{
			cout << a << " �� " << b << " �� �����ϴ�. !" << endl;
		}
		/*else if ( a!=a || b!= b)
		{
			GameState = false;
		}*/
	}


	
	return 0 ;
}
