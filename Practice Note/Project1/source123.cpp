#include <iostream>
#include <conio.h>

using namespace std;

//���ڿܿ� �ԷµǸ� ������ ���α׷� ���� ������� ���� Goto Ȱ���� ���ϰڴ� ��

bool GameState = true;

int main()
{
	int a;
	int b;
	char c;
	
	/*int a[b];
	int c[d];*/
	
	bool Program = true;
	//a �� b �� 0~10 �̿ܿ� ���ڸ� �Է��ϰԵǸ� false �ǰ��ϴ� ���� ���غ���


	


	while (Program)
	{
	
		cin >> a;
			
		cin >> b;
		
		
		
		if (a == _getch())
		{
			Program = false;
		}
		else if (a <= 10 && b <= 10)
		{
		cout << a << " �� " << b << " �� ���� ��" << endl;
		cout << a + b << " �Դϴ� " << endl;
			
			

		}

		else
		{
			cout << "0���� ~ 10 ���� ���ڸ� �Է����ּ���" << endl;
			Program = false;
		}
	
	
	}
	return 0 ;
}
