#include <iostream>


using namespace std;

void add(int& score, int addscore)
{
	printf("%d���� �������Ƿ�\n", addscore);

	score = score + addscore;

}

int main()
{
	int subject1;
	int subject2;

	int addscore;

	printf("2 ���� ���� ������ �Է��Ͻʽÿ�\n");

	cin >> subject1;
	cin >> subject2;

	printf("���� ������ �Է��Ͻʽÿ�.\n");

	cin >> addscore;
	
	add(subject1, addscore);
	printf("���� 1��(��) %d���� �Ǿ����ϴ�.\n", subject1);

	add(subject2, addscore);
	printf("���� 2��(��) %d���� �Ǿ����ϴ�.\n", subject2);


	return 0;
}

