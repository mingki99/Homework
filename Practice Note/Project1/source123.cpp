
#include <iostream>
#include<time.h>

using namespace std;

enum EUM
{
	EUM_0,
	EUM_1,
	EUM_2,
	EUM_3
};

#define EUM_4 4


enum SRP
{
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END

};


int main()
{
	int iNumber;

	cout << "���ڸ� �Է��ϼ��� : ";

	cin >> iNumber;
	switch (iNumber)
	{
	case EUM_1:
		cout << "�Է��� ���ڴ� 1�Դϴ�. " << endl;
		break;
	case EUM_2:
		cout << "�Է��� ���ڴ� 2�Դϴ�. " << endl;
		break;
	case EUM_3:
		cout << "�Է��� ���ڴ� 3�Դϴ�. " << endl;
		break;
	default:
		break;
	}

	
	

	

	srand((unsigned int)time(0));

	int iPlayer , iAI;

	while (true)
	{
		int iPlayer;

		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "4. ����" << endl;
		cout << "�޴��� �����ϼ��� : ";
		cin >> iPlayer;

		if (iPlayer <SRP_S || iPlayer > SRP_END)
		{
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			//�Ͻ�����
			system("pause");
			//�ݺ����� ���������� �̵�.
			continue;
		}
		else if (iPlayer == SRP_END)
			break;
	
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI : ����" << endl;
			break;
		case SRP_R:
			cout << "AI : ����" << endl;
			break;
		case SRP_P:
			cout << "AI : ��" << endl;
			break;
		default:
			break;
		}

		int iWin = iPlayer - iAI;

		switch (iWin)
		{
		case 1:
		case -2:
			cout << "Player �¸�" << endl;
			break;
		case 0:
			cout << "���" << endl;
			break;
		default:
			cout << "AI �¸�" << endl;
			break;
		}


		
			 
	
	}




	return 0;
}




