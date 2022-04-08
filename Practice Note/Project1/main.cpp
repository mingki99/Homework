#include <iostream>
#include <vector>

// 인풋 아웃풋을 조작하는 기능들이 들어있다.
#include <iomanip>

using namespace std;

const int MAX = 100;
int board[MAX][MAX] = {};
int N = 0;



void PrintBoard()
{
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{	
			cout << setfill('0') << setw(2) << board[y][x] << " ";
		}
		cout <<endl;
	}
}

enum DIR
{
	RIGHT = 0,
	DOWN = 1,
	LEFT = 2,
	UP = 3, 
};

bool CanGo(int y, int x)
{
	if (y < 0 || y >=N)
		return false;
	if (x < 0 || x >=N)
		return false;
	if (board[y][x] != 0)
		return false;
	return true;
}

void SetBoard()
{
	int dir = RIGHT;

	// 찍어줄 번호
	int num = 1;

	int y = 0;
	int x = 0;

	while (true)
	{
		board[y][x] = num;

		if ( num == N*N)
			break;

		int nextY;
		int nextX;

		switch (dir)
		{
		case RIGHT:
			nextY = y;
			nextX = x +1;
			break;
		case DOWN:
			nextY = y + 1;
			nextX = x;
			break;
		case LEFT:
			nextY = y;
			nextX = x - 1;
			break;
		case UP:
			nextY = y - 1;
			nextX = x;
			break;
		}


		if (CanGo(nextY, nextX))
		{
			y = nextY;
			x = nextX;
			num ++;
		}
		else
		{
			switch (dir)
			{
			case RIGHT:
				dir = DOWN;
				break;
			case DOWN:
				dir = LEFT;
				break;
			case LEFT:
				dir = UP;
				break;
			case UP:
				dir = RIGHT;
				break;
			}
		}

	}
	
	// 01 02 03 04 05
	// 16          06
	// 15          07
	// 14          08
	// 13 12 11 10 09

}

int main()
{
	cin >>N;

	SetBoard();

	PrintBoard();


	return 0;
}

