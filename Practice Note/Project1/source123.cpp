#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>



using namespace std;

void One();
void Two();
void Three();
void Fuor();
void Five();
void six();



int main()
{
	One();
	 Two();
	 Three();
	 Fuor();
	 Five();
	 six();

	 return 0;

}

void One() //0~ 100 ���� ���Ѽ�
{
	cout << "1��° ����!" << endl;
	int a;
	int c = 0;
	

	for (a = 0; a <= 100; a++)
	{
		c = c + a;
	}

	cout << c << endl;

}

void Two() //Ȧ���� 100 ���� ���Ѽ�
{
	cout << "2��° ����!" << endl;
	int a;
	int c = 0;
	

	for (a = 1; a <= 100; a += 2)
	{
		c = c + a;
	}

	cout << c << endl;
}

void Three() //¦���� 100 ���� ���Ѽ�
{
	cout << "3��° ����!" << endl;
	int a;
	int c = 0;
	

	for (a = 0; a <= 100; a += 2)
	{
		c = c + a;
	}

	cout << c << endl;

}

void Fuor()
{
	cout << "4��° ����!" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a <= i; a++)
		{
			cout << "*";
		}

		cout << endl;
	}
}

void Five()
{
	cout << "5��° ����!" << endl;
	int a[10];

	srand(static_cast <int>(time(NULL)));
	// �迭�� ���� �־��ֱ�
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	// �迭 ���� �ٲ��ֱ� (���° ���� �������)
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int c = a[index1];
		a[index1] = a[index2];
		a[index2] = c;
	}
	// �迭�� ���° �� ����Ұ�������
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}

void six()
{
	int a = 1;
	int b = 0;

	int c = a;
	a = b;
	b = c;

	cout << "6��° ����!" << endl;
	cout << a << endl;
	cout << b << endl;
}