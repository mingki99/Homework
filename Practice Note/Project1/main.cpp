#include <iostream>
#include <vector>

// ��ǲ �ƿ�ǲ�� �����ϴ� ��ɵ��� ����ִ�.
#include <iomanip>

using namespace std;

const int MAX = 100;
int board[MAX][MAX] = {};
int N = 0;

int iCount = 1;

void PrintBoard()
{
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			board[y][x] = iCount;
			cout << board[y][x] << " ";
			iCount ++;
		}
		cout <<endl;
	}
}

void SetBoard()
{
	for (int i = 0; i < N; ++i)
	{
		
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

