#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>



using namespace std;

void One();
void Two();
void Three();



int main()
{
	int a [10] ;
	
	
	//�ٽ� �˻��غ��� ����غ��� !
	
	srand(static_cast <int>(time(NULL)));

	for (int c = 0; c < 10; c++)
	{
		int b = rand() % 10;

		if (a[b])
		{
			continue;
			cout << b << endl;
		}
	
	
	}
	
}

void One() //0~ 100 ���� ���Ѽ�
{
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
	int a;
	int c = 0;
	

	for (a = 0; a <= 100; a += 2)
	{
		c = c + a;
	}

	cout << c << endl;

}