#include <iostream>

using namespace std;

enum add
{
	RIGHT = 0,
	LEFT = 1,
	ADDRIGHT = 3,
	ADDLEFT = 4,
};

int main()
{
	int right = 1;
	int left = 1;

	int num;

	int temp = 1;
	int lefttemp = 1;

	add addLocation = RIGHT;


	cin >> num;	// 14

	// 1/1 ->  1/2 ->  2/1 ->  3/1 ->  2/2 ... 3/3... 4/4   5/5
	//	1		2		3		4		5		13	   25	 42
	//									4		8	   12    16



	for (int i = 1; i < num; ++i)	// 1부터 해야 순서가 맞다.
	{

		switch (addLocation)
		{
		case RIGHT:
			right += 1;
			temp = right;

			addLocation = ADDLEFT;
			break;
		case LEFT:
			left += 1;
			temp = left;

			addLocation = ADDRIGHT;
			break;

		case ADDRIGHT:
			right += 1;
			left -= 1;

			if (right == temp)
			{
				addLocation = RIGHT;
				break;
			}
			break;

		case ADDLEFT:
			left += 1;
			right -= 1;

			if (left == temp)
			{
				addLocation = LEFT;
				break;
			}
			break;

		}

	}

	cout << left << '/' << right << endl;

	return 0;
}