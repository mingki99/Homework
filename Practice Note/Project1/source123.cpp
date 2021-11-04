
#include <iostream>
#include<time.h>

using namespace std;

/*
0 : 벽
1 : 길
2 : 시작점
3 : 도착점
*/

void SetMaze(char Maze[20][20])
{
	strcpy_s(Maze[0],  "2110000000000000000");
	strcpy_s(Maze[1],  "0011111111111100000");
	strcpy_s(Maze[2],  "0000000000000000000");
	strcpy_s(Maze[3],  "0000000000000000000");
	strcpy_s(Maze[4],  "0000000000000000000");
	strcpy_s(Maze[5],  "0000000000000000000");
	strcpy_s(Maze[6],  "0000000000000000000");
	strcpy_s(Maze[7],  "0000000000000000000");
	strcpy_s(Maze[8],  "0000000000000000000");
	strcpy_s(Maze[9],  "0000000000000000000");
	strcpy_s(Maze[10], "0000000000000000000");
	strcpy_s(Maze[11], "0000000000000000000");
	strcpy_s(Maze[12], "0000000000000000000");
	strcpy_s(Maze[13], "0000000000000000000");
	strcpy_s(Maze[14], "0000000000000000000");
	strcpy_s(Maze[15], "0000000000000000000");
	strcpy_s(Maze[16], "0000000000000000000");
	strcpy_s(Maze[17], "0000000000000000000");
	strcpy_s(Maze[18], "0000000000000000000");
	strcpy_s(Maze[19], "0000000000000000000");
	Maze = 
	{
		{"2110000000000000000"}
	}
}

int main()
{
	// 20*20 미로를 만들어준다.

	char strMaze[20][20];


	return 0;
}

