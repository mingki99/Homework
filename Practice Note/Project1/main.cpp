#include <iostream>

using namespace std;

// 1 �Է� : ��Ʈ�� �Ǹ� ������ ������� == �Ӵ��, ��꼼, �����, �޿� == A���� �������
// 2 �Է� : ����� �ΰǺ� == B����
// 3 �Է� : ��Ʈ�� ���� == C����

// C�������� B���� ������ ���ͺб����� ��ǵȴ�


int main()
{
	int A;
	int B;
	int C;

	cin >> A;
	cin >> B;
	cin >> C;

	if (C <= B)
	{	
		cout << -1 <<endl;
	}
	else
	{
		int temp = C - B;

		for (int i = 1; C < A; ++i)
		{
			C = temp * i;
			B = i;
		}

		cout << B+1 << endl;

	}

	
	return 0;
}