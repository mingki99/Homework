#include <iostream>

using namespace std;

//숫자외에 입력되면 끝내는 프로그램 까지 만들려다 실패 Goto 활용을 못하겠다 ㅠ

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
			cout << b << " 가 " << a << " 보다 큽니다!" << endl;
		}
		else if (a > b)
		{
			cout << a << " 가 " << b << " 보다 큽니다!" << endl;
		}
		else if (a == b)
		{
			cout << a << " 와 " << b << " 가 같습니다. !" << endl;
		}
		/*else if ( a!=a || b!= b)
		{
			GameState = false;
		}*/
	}


	
	return 0 ;
}
