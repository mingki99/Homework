#include <iostream>


using namespace std;

// �Լ���(����)�� new �����ڸ� ����ϰ� delete�� �������� ������ �Լ��� ������ �ڵ����� ��¿������ delete �Ǵ°�?

void Memory(int* PT)
{
	int num;
	cin >> num;

	PT = new int[num];

	for (int i = 0; i < num; ++i)
	{
		printf("%d ��°�� ������ �Է����ּ���\n", i + 1);
		cin >> PT[i];
	}

	for (int j = 0; j < num; ++j)
	{
		printf("%d ��°�� ������ %d �Դϴ� \n", j + 1, PT[j]);
	}
	

}

int main()
{
	
	int* pt = nullptr;

	printf("�� ���� ���� ������ �Է��Ͻðڽ��ϱ�\n");

	
	Memory(pt);
	

	

	return 0;
}

