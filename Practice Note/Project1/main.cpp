#include <iostream>


using namespace std;

void add(int& score, int addscore)
{
	printf("%d점을 더했으므로\n", addscore);

	score = score + addscore;

}

int main()
{
	int subject1;
	int subject2;

	int addscore;

	printf("2 과목 분의 점수를 입력하십시오\n");

	cin >> subject1;
	cin >> subject2;

	printf("더할 점수를 입력하십시오.\n");

	cin >> addscore;
	
	add(subject1, addscore);
	printf("과목 1은(는) %d점이 되었습니다.\n", subject1);

	add(subject2, addscore);
	printf("과목 2은(는) %d점이 되었습니다.\n", subject2);


	return 0;
}

