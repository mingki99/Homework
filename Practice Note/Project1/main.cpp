#include <iostream>

using namespace std;

int main()
{
	int Number = 0;
	cin >> Number;	// ��� �ݺ��� �� ����

	for (int j = 0; j <= Number - 1; ++j)
	{
		int SubjectsNumber = 0;
		cin >> SubjectsNumber;	// �ݿ� �������

		int tempScore[1000] = {};

		int TotalScore = 0;

		float UpAverge = 0;
		float count = 0;	// float ���� �ƴϸ� UpAverge�� ���� ���� ���ϰԵȴ�.

		for (int i = 0; i <= SubjectsNumber - 1; ++i)
		{
			cin >> tempScore[i];	// ���� ��� ���� ����
			TotalScore = TotalScore + tempScore[i];	// �ݿ� �� ���� ���ϱ�
		}

		UpAverge = TotalScore / SubjectsNumber;	// �ݿ� ��� ���� ���ϱ�

		for (int i = 0; i <= SubjectsNumber - 1; ++i)
		{
			if (UpAverge < tempScore[i])	// ��պ��� ����ģ�� �����ϱ�
			{
				count++;	// ������ ģ�� count
			}
		}

		UpAverge = count / SubjectsNumber*100;	// ������ģ�� / �ݿ� �л��� * 100

		printf("%0.3f%\n", UpAverge);	// %0.3f�� �ϸ� �Ҽ��� 3�ڸ��� ��µǰ� ���ش�. [% �� �־��ּ���~]
	}


	return 0;
}