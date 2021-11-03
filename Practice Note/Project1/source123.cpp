
#include <iostream>
#include<time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int	iNumber[25] = {};
		
	// 1 ~ 25 ���� ���ڸ� �־��ش�.

	for (int i = 0; i < 25; ++i)
	{
		iNumber[i] = i + 1;
	}
	
	int iTemp;
	int idx1;
	int idx2;
	for (int i = 0; i < 1000; ++i)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	int iBingo = 0;

	while (true)
	{
		system("cls");

		//���ڸ� 5 x 5 �� ����Ѵ�.
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iNumber[i * 5 + j] == INT_MAX)
				{
					cout << "*\t";
				}
				else
				{
					cout << iNumber[i * 5 + j] << "\t";
				}
			}
			cout << endl;
		}


		cout << "Bingo Line : " << iBingo << endl;

		if (iBingo >= 5)
		{
			break;
		}

		cout << "���ڸ� �Է��ϼ��� 0 : ���� : ";

		int iInput;
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}
		else if(iInput < 1 || iInput > 25)
		{
			continue;
		}

		//�ߺ��Է��� ü���ϱ� ���Ѻ��� �⺻������ �ߺ��Ǿ��ٰ�
		//�ϱ����� ture �� ����
		bool	bAcc = true;

		//��� ���ڸ� ���ʴ�� �˻��ؼ� �Է��� ���ڿ� ���� ���ڰ�
		//�մ����� ã�Ƴ���.

		for (int i = 0; i < 25; ++i)
		{
			//���� ���ڰ� �������
			if (iInput == iNumber[i])
			{	
				//���ڸ� ã���� ��� �ߺ��� ���ڰ� �ƴϹǷ�
				//bAcc ������ false �� ������ش�.
				bAcc = false;

				//���ڸ� * �� �����ϱ� ���� Ư���� ���� INT_MAX �� ���ش�.
				iNumber[i] = INT_MAX;

				break;
			}
		}

		if (bAcc)
		{
			continue;
		}
		// ���� �� ���� üũ�ϴ°��� �Ź� ���ڸ� �Է��Ҷ����� ó������
		// ���� ī��Ʈ�� �� ���̴�. �׷��Ƿ� iBingo	������ 0���� �Ź�
		// �ʱ�ȭ�ϰ� ���Ӱ� �� ���� �����ֵ��� �Ѵ�.

		iBingo = 0;

		// ���� ,���� �� ���� �����ش�.
		int iStar1 = 0;
		int iStar2 = 0;
		for (int i = 0; i < 5; ++i)
		{
			iStar1 = iStar2 = 0;
			for (int j = 0; j < 5; ++j)
			{
				// ���� ���� �� ������ �����ش�.
				if (iNumber[i * 5 + j] == INT_MAX)
				{
					++iStar1;
				}

				// ���� ���� �� ������ �����ش�.
				if (iNumber[j * 5 + i] == INT_MAX)
				{
					++iStar2;
				}

				//�밢�� 
			}
		
			// j for ���� ���������� ���� ���� ���� ���� �� ������ �����
			// iStar1 ������ ���� �ȴ�. iStar1 �� ���� 5�̸� ������
			//��� *�̶�� �ǹ��̹Ƿ� ���� �� ī��Ʈ�� �߰����ش�.
			if (iStar1 == 5)
			{
				++iBingo;
			}
			if (iStar2 == 5)
			{
				++iBingo;
			}
		}
		//���ʿ��������� ������ ����
		iStar1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (iNumber[i] == INT_MAX)
			{
				++iStar1;
			}
		}

		if (iStar1 == 5)
		{
			++iBingo;
		}

		//������ ������ ������ ����
		iStar1 = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (iNumber[i] == INT_MAX)
			{
				++iStar1;
			}
		}

		if (iStar1 == 5)
		{
			++iBingo;
		}

	}

	return 0;
}

