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
	// dir = Direct = 다이렉트 직행으로 곧바로
	int dir = RIGHT;

	// 찍어줄 번호
	int num = 1;

	int y = 0;
	int x = 0;

	// 배열을 이용 하여 switch문 대신 인용
	/*int dy[] = {0, 1, 0, -1};
	int dx[] = {1, 0 ,-1, 0};*/

	while (true)
	{
		board[y][x] = num;

		if ( num == N*N)
			break;

		// 배열 이용
		/*int nextY = y + dy[dir];
		int nextX = x + dx[dir];*/
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
			
			// 달팽이 규칙을 인용한다
			// 나머지 4를 나누어 나오는 값이 0, 1, 2, 3, 0, 1, 2, 3 만 나오게 출력
			// dir = (dir +1) %4;
			
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

