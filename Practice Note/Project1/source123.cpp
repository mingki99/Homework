#include <iostream>

using namespace std;

void TastA(int&, int&);

void TastB(int*, int*);

void TastC(int, int);

int main()
{
	int Homwork1 = 100;
	int Homwork2 = 200;

	cout << "ù ���� ����" << endl;
	cout << Homwork1 << '\n' << Homwork2 << endl;

	TastA(Homwork1, Homwork2);
	cout << "���� ����" << endl;
	cout << Homwork1 << '\n' << Homwork2 << endl;

	TastB(&Homwork1, &Homwork2);
	cout << "������ �̿�" << endl;
	cout << Homwork1 << '\n' << Homwork2 << endl;

	TastC(Homwork1, Homwork2);
	cout << "�׳� �Լ�" << endl;
	cout << Homwork1 << '\n' << Homwork2 << endl;



}


void TastA(int& a, int& b)
{
	int tamp;

	tamp = a;
	a = b;
	b = tamp;

}

void TastB(int* a, int* b)
{
	int tamp;

	tamp = *a;
	*a = *b;
	*b = tamp;

}

void TastC(int a, int b)
{
	int tamp;

	tamp = a;
	a = b;
	b = tamp;

	cout << "�׽�Ʈ �ȿ�����?" << endl;
	cout << a << '\n' << b << endl;
}
