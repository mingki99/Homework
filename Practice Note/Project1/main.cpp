#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 오늘의 주제 : 다차원 배열


int main()
{
	int a[10] = { 1, 2, 3 };
	
	// [4] [2] [3] [4] [1] << 0층
	// [1] [1] [5] [2] [2] << 1층

	int first[5] = { 4, 2, 3, 4, 1 };
	int second[5] = { 1, 1, 4, 2, 2 };

	// 일차원은 왼쪽부터 
	int aprtment2D[2][5] = { { 4, 2, 3, 4, 1 }, { 1, 1, 5, 2, 2 }  };
	
	for (int floor = 0; floor < 2; ++floor)
	{
		for (int room = 0; room < 5; ++room)
		{
			int num = aprtment2D[floor][room];

			// cout << num << "  ";
		}
		// cout << endl;
	}

	int aparment1D[10] = { 4, 2, 3, 4 ,1, 1, 1, 5, 2, 2 };


	for (int floor = 0; floor < 2; ++floor)
	{
		for (int room = 0; room < 5; ++room)
		{
			int index = (floor * 5) + room;
			int num = aparment1D[index];

			// cout << num << "  ";
		}
		// cout << endl;
	}


	// 2차 배열 활요 영역
	int map[5][5] =
	{
		{ 1, 1, 1, 1, 1},
		{ 1, 0, 0, 0, 1},
		{ 1, 0, 0, 0, 1},
		{ 1, 0, 0, 0, 1},
		{ 1, 1, 1, 1, 1},
	};

	for (int y = 0; y < 5; ++y)
	{
		for (int x = 0; x < 5; ++x)
		{
			int info = map[y][x];

			cout << info << "  ";
		}
		cout << endl;
	}



	return 0;
}

