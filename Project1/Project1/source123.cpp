#include <iostream>

using namespace std;
//맵 정의
int Map[10][10] =
{
{1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1}
};
//입력키 정의
void Infut();
//그린값 정의
void Draw();
void Collision(int CloneX,int CloneY);
//맵 정의


//플레이어(맵에서) 위치 값
int PlayerX = 1;
int PlayerY = 1;


bool bGameState = true;

char Key;

int main()
{
	while (bGameState)
	{
		Infut();
		Draw();
	}
}

	

void Draw()
{
	

	for (int Y= 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			  //(Map[PlayerX][PlayerY] == 0)
			if (X == PlayerX && Y == PlayerY)
			{  //Map 좌표값이  x 1 , y1 에서 P 가 출력되고 넘어가야함
				cout << "P" << " ";
		
			}
			else if (Map[X][Y] == 1)
			{
				cout << "X" << " ";
			}
			else if (Map[X][Y] == 0)
			{
				cout << " " << " ";
			}
			
		}
		cout << endl;
	}
}

void Infut()
{
	cin >> Key;
	//썻던 출력값을 지워주는 역할
	system("cls");
	
	switch (Key)
	{
	case 'W':
	case 'w':
	{
		Collision(0, -1);
		break;
	}
	case 'S':
	case 's':
	{	Collision(0, 1);
		break; 
	}
	case 'D':
	case 'd':
	{	Collision(1, 0);
		break;
	}
	case 'A':
	case 'a':
	{	Collision(-1, 0);
		break;
	}
	}

}

void Collision(int CloneX, int CloneY)
{	//새로가볼곳 계산
	int NewCloneX = PlayerX + CloneX;
	int NewCloneY = PlayerY + CloneY;
	
	if (Map[NewCloneY][NewCloneX] == 0)
	{
		PlayerX = NewCloneX;
		PlayerY = NewCloneY;
	}

}