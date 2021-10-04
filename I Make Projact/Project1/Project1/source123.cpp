#include <iostream>

using namespace std;
//�� ����
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
//�Է�Ű ����
void Infut();
//�׸��� ����
void Draw();
void Collision(int CloneX,int CloneY);
//�� ����


//�÷��̾�(�ʿ���) ��ġ ��
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
			{  //Map ��ǥ����  x 1 , y1 ���� P �� ��µǰ� �Ѿ����
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
	//���� ��°��� �����ִ� ����
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
{	//���ΰ����� ���
	int NewCloneX = PlayerX + CloneX;
	int NewCloneY = PlayerY + CloneY;
	
	if (Map[NewCloneY][NewCloneX] == 0)
	{
		PlayerX = NewCloneX;
		PlayerY = NewCloneY;
	}

}