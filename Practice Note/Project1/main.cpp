#include <iostream>

using namespace std;



int main()
{
	srand(time(0)); // �õ� ����

	// 1 2 3
	
	int iMyTurn = 0;

	int iRounds = 0;

	int iWins = 0;

	// ������ �������� ������ ù ���� 0���� ����
	// �� ���� ������ ���� �� + 1
	enum ENUM_SRP
	{
		ENUM_SCISSORS = 1,
		ENUM_ROOK,
		ENUM_PATER
	};

	// #�� ������ -> ��ó�� ���ù�
	// 1) ��ó�� 2) ������ 3) ��ũ

#define DEFINE_SCISSORS 1+2
#define DEFINE_TEST cout << "hello World" << endl;






	while (iMyTurn <= 4)
	{
		int value = 1 + (rand() % 3); // 0~32767 

		cout << "���� (1) ���� (2) �� (3) ����ּ���" << endl;

		cin >> iMyTurn;
		
		cout << endl;

		cout << " AI " << value << endl;
		cout << endl;
			
		if (iRounds == 0)
		{

			cout << "���� �·� : ����" << endl;

		}
		else if (iMyTurn <= 4)
		{
			// TODO : Ȯ���� �����ش�
			int iWinPercentage = (iWins*100) / iRounds ; // �·�?
			cout << "���� �·� : " << iWinPercentage << endl;
		}

		iRounds++;

		if (iMyTurn == 1)
		{
			
			switch (value)
			{
			case 1:
				cout << "DRAW" << endl;
				break;

			case 2:
				cout << "AI Win" << endl;

				break;
			
			case 3:
				cout << "Player Win" << endl;

				iWins++;
				break;
				

			}
		}
		else if (iMyTurn == 2)
		{
			switch (value)
			{
			case 1:
				cout << "player Win" << endl;
				iWins++;
				break;
			case 2:
				cout << "DRAW" << endl;
				break;
			case 3:
				cout << "AI Win" << endl;
				break;
			}
		}
		else if (iMyTurn == 3)
		{
			switch (value)
			{
			case 1:
				cout << "AI Win" << endl;
				break;
			case 2:
				cout << "player Win" << endl;
				iWins++;
				break;
			
			case 3:
				cout << "DRAW" << endl;
				break;


			}
		}
		
		





	}



	return 0;
}

