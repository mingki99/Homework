#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
	double height;

};

void PersonData(Person* person)
{
	printf("���̸� �Է��Ͻʽÿ�\n");
	cin >> person->age;

	printf("�����Ը� �Է��Ͻʽÿ�\n");
	cin >> person->weight;

	printf("Ű�� �Է��Ͻʽÿ�\n");
	cin >> person->height;

	person->age = person->age + 1;
}

int main()
{
	Person p1;
	Person p2;

	PersonData(&p1);

	printf(" ���� : %d ������ : %0.1f Ű : %0.1f �Դϴ� \n", p1.age, p1.weight, p1.height);




	return 0;
}