#include <iostream>

using namespace std;

void EvenNumber();
void OddNumber();
void Star();




int main()
{

	int b = 0;

	for (int a = 0; a <= 100; a++)
	{
			b = b + a;
	}

	cout << b << endl;

	EvenNumber();
	OddNumber();
	Star();

	return 0;
}

void EvenNumber()
{
	int a = 0;

	for (int b = 0; b <= 100; b = b + 2)
	{
		a = a + b;
	}

	cout << a << endl;

}

void OddNumber()
{
	int a = 0;
	for (int b = 1; b < 100; b = b + 2)
	{
		a = a + b;
	}

	cout << a << endl;
}

void Star()
{
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			cout << '*';
		}
	}
}
