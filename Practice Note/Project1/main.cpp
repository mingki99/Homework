#include <iostream>

using namespace std;

// ������ ���� : �б⹮
// �����͸� �޸�� �Ҵ��ϰ� �����ϰ� ����� ���� �˾ƺ�
// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ�ʹٸ�?

int main()
{

#pragma region ���� ��ȣ�ۿ�
	int hp = 100;				// ���� HP
	int damage = 100;			// �÷��̾� ������

	hp -= damage;				//�ǰ�����
	bool isDead = (hp <= 0);	// óġ ����

	// ���Ͱ� �׾����� ����ġ �߰�
	// ��������� CMP JMP

	if (isDead)
	{
		cout << "���͸� óġ�߽��ϴ�." << endl;
	}
	else if (hp <= 20)
	{
		cout << "���Ͱ� �������� �ֽ��ϴ�." << endl;
		//(isDead == false)
	}
	else
	{	
		// TODO
		cout << "���Ͱ� �ݰ��߽��ϴ�" << endl;
	}
		
		
#pragma endregion
#pragma region �б⹮
	const int ROOK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;

	int input = ROOK;

	switch (input)
	{
	case ROOK:
		cout << "������ �����ϴ�" << endl;
		break;
	case PAPER:
		cout << "������ �����ϴ�" << endl;
		break;
	case SCISSORS:
		cout << "������ �����ϴ�" << endl;
		break;
	default:
		cout << "�̻��Ѱ��� ���̽��ϴ�" << endl;
		break;
	}

#pragma endregion

#pragma region �ݺ���
	int count = 0;

	while (count <= 5)
	{
		cout << "���" << endl;
		count++;
	}
	
	for (int i = 0; i < 5; ++count)
	{
		cout << "For Loop" << endl; 
		break;
	}



	for (int iCount = 1; iCount <= 10; iCount++)
	{
		bool isEven = ((iCount % 2) == 0);
		if (isEven)
		{
			continue;
		}

		cout << iCount << endl;



	}
#pragma endregion

#pragma region ������
	// ������

	// 1������ �����ؼ� ���������� �ٸ��� ����

	int total = 0;

	for (int i = 2; i <= 9; ++i)
	{
		
		for (int j = 1; j <= 9; ++j)
		{
			total = i * j;
			cout << i, " X ", j, " = ", total << endl;
		
		}
		
		
	}
#pragma endregion


	return 0;
}

