#include <iostream>

using namespace std;

class point
{
public:
	point() : X(0), Y(0)
	{

	}

	void SetX(int x = 0)
	{
		printf("X ��ǥ�� �Է��ϼ���\n");

		cin >> x;
		if (0 < x && 10 > x)
		{
			X = x;
		}
		else
		{
			x = 0;
			X = x;
		}
	}

	void SetY(int y = 0);
		/*{
			printf("X ��ǥ�� �Է��ϼ���");

			cin >> y;
			if (0 < y && 10 > y)
			{
				Y = y;
			}
			else
			{
				Y = 0;
				Y = y;
			}
		}*/
	int GetX(){ return X;}
	int GetY() { return Y;}

public:
	int X = 0;
	int Y = 0;
};

void point::SetY(int y)
{
	printf("Y ��ǥ�� �Է��ϼ���\n");

	cin >> y;
	if (0 < y && 10 > y)
	{
		Y = y;
	}
	else
	{
		Y = 0;
		Y = y;
	}
}


int main()
{
	point p1;
	p1.SetX();

	point p2;
	p2.SetY();

	printf("��ǥ�� (%d, %d) �Դϴ� \n", p1.GetX(), p2.GetY());
	


	return 0;
}