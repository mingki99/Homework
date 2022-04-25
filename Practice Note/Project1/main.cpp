#include <iostream>

using namespace std;

int SangsuMath(int a, int b)
{
	int tempA = a;
	int tempB = b;

	while (true)
	{	
		if (a == 0 || b == 0)
		{
			return 0;
		}
		
		if (a % 10 < b % 10)
		{
			return tempB;
		}
		else if (a % 10 > b % 10)
		{
			return tempA;
		}
		a = a / 10;
		b = b / 10;
	}

	return 0;
}

int Alignment(int a)
{
	int temp = 0;
	
	while (a)
	{	
		if (a == 0)
		{
			return temp;
		}
		temp = (a % 10) * 100;
		a = a /10;
		temp = temp + (a % 10) * 10;
		a = a / 10;
		temp = temp + (a % 10);
		a = a / 10;
	}

	return temp;
}



int main()
{
	int a;
	int b;

	cin >> a >> b;
	
	a = SangsuMath(a, b);

	b = Alignment(a);
	
	cout << b << endl;

	return 0;
}