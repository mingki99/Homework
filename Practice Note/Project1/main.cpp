#include <iostream>

using namespace std;

enum rull
{
	RIGHT = 0,
	LEFT = 1,
};


int main()
{
	int right = 1;
	int left = 1;

	int num;

	bool Rull = 0;

	cin >> num;	// 14

	for (int i = 0; i < num; ++i)
	{
		
		switch (Rull)
		{
		case RIGHT:
			right += 1;
			break;
		case LEFT:
			left += 1;
			break;
		}
		

		
		if (right == left)
		{
			Rull = NOT;
		}
		

	}


	return 0;
}