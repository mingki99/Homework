#include <iostream>
#include <windows.h>


using namespace std;

int Infut();
void Porcess(int key);
void Rander();

void GoldPorcess(int key);
void GoldRander();

bool bGameState = true;

int Gold;

int main()
{ 
	while (bGameState)
	{
		int key = Infut();
		 Porcess(key);
		 Rander();
	}

	return 0;
}

int Infut() //������� ��°��� ����
{
	int a;

	cin >> a;

	return a; //return  �� �ҷ��� void �����̸� xx

}





void Porcess(int key)
{
	if (key == 0)
	{
		bGameState = false;
	}
	GoldPorcess(key);
}

void Rander() 
{
	system("cls");
	cout << "�����ð�" << endl;

	GoldRander();
}
void GoldPorcess(int key)
{
	if (key == 1)
	{
		Gold++;
	}
	else if (key == 2)
	{
		Gold = Gold + 2;
	}
	else if (key == 3)
	{
		Gold = Gold + 3;
	}
	else if (key == 4)
	{
		Gold = Gold + 4;
	}
	else if (key == 5)
	{
		Gold = Gold + 5;
	}
	else if (key == 6)
	{
		Gold = Gold + 6;
	}
	else if (key == 7)
	{
		Gold = Gold + 7;
	}
	else if (key == 8)
	{
		Gold = Gold + 8;
	}
	else if (key == 9)
	{
		Gold = Gold + 9;
	}
	else 
	{}
	
}

void GoldRander()
{
	cout << "ȹ���� :" << Gold << endl;
}