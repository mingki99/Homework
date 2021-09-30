#include <iostream>

using namespace std;

void Infut();

bool Program = true;

int main()
{
	int a;
	int b;


	while (Program)
	{


		cout << "첫번째 덧셈할 숫자키 하나를 눌러주세요!" << endl;
		
		cin >> a;

		if (a == 10)
		{

			Program = false;

			continue; // 아래남은 코드들을 무시하고 위로올라간다.
		}

		cout << "두번째 덧셈할 숫자키 하나를 눌러주세요!" << endl;

		cin >> b;

		cout << a + b << endl;
	
	}
	cout << "10을 눌러 종료됩니다." << endl;
	
	return 0;
}
