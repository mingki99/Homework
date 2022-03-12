#include <iostream>

using namespace std;

void Func1();
void Func2();
void Func3();

void Func1()
{
	cout << "Func1" << endl;

	Func2();
}

void Func2()
{
	cout << "Func2" << endl;

	Func3();
}

void Func3()
{
	cout << "Func3" << endl;
}

int main()
{
	Func1();

	return 0;
}

