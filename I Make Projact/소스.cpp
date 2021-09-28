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

int Infut() //사용자의 출력값을 받자
{
	int a;

	cin >> a;

	return a; //return  을 할려면 void 형식이면 xx

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
	cout << "돈벌시간" << endl;

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
	cout << "획득골드 :" << Gold << endl;
}