#include <iostream>
#include <stdio.h>


using namespace std;

int Add(int ia, int ib)
{
	return ia + ib;
}

// �Լ�
int main()
{

	//scanf();

	int num1 = 3;
	int num2 = 3;
	int num3 = 3;
	int num4 = 3;
	int num5 = 3;

	printf("asd\n");

	int iData = Add(100, 200);

	// �ݺ���
	//for (/* �ݺ��� �ʱ�ȭ */; /*�ݺ��� ����üũ*/; /*�ݺ��� ����*/)
	//{

	//}
	
	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output tast\n"); // �ܼ��� \n �� ������ �����ٷ� �̵��϶�� ������ �ν��Ѵ�.

		// continue �� �����ԵǸ� �ؿ��ִ� �������� �ǳʶٰ� �ٷ� ����Ƚ���� �Ѿ����.
		continue;
		

		break;
	}


	int i = 0;
	/*while (i < 4)
	{
		printf("oitput\n");

		++i;
	}*/


	return 0;
}


// �����
// 
// ������ ���� �ּ� ó��		: Ctrl + k, c
// ������ ���� �ּ� ����		: Ctrl + k, u

