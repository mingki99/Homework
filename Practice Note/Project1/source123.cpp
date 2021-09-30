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

		cout << "두번째 덧셈할 숫자키 하나를 눌러주세요!" << endl;

		cin >> b;

		cout << a + b << endl;
	
	}


}
