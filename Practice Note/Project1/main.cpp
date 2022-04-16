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
	printf("나이를 입력하십시오\n");
	cin >> person->age;

	printf("몸무게를 입력하십시오\n");
	cin >> person->weight;

	printf("키를 입력하십시오\n");
	cin >> person->height;

	person->age = person->age + 1;
}

int main()
{
	Person p1;
	Person p2;

	PersonData(&p1);

	printf(" 나이 : %d 몸무게 : %0.1f 키 : %0.1f 입니다 \n", p1.age, p1.weight, p1.height);




	return 0;
}