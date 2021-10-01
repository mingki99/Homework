#include <iostream>
#include <conio.h>

using namespace std;

//숫자외에 입력되면 끝내는 프로그램 까지 만들려다 실패 Goto 활용을 못하겠다 ㅠ

bool GameState = true;

int main()
{
	int a;
	int b;
	char c;
	
	/*int a[b];
	int c[d];*/
	
	bool Program = true;
	//a 나 b 에 0~10 이외에 숫자를 입력하게되면 false 되게하는 식을 구해보자


	


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
		cout << a << " 와 " << b << " 를 더한 값" << endl;
		cout << a + b << " 입니다 " << endl;
			
			

		}

		else
		{
			cout << "0부터 ~ 10 까지 숫자를 입력해주세요" << endl;
			Program = false;
		}
	
	
	}
	return 0 ;
}
