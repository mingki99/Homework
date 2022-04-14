#include <iostream>


using namespace std;

// 함수로(로컬)로 new 연산자를 사용하고 delete를 시켜주지 않으면 함수가 끝날때 자동으로 어쩔수없이 delete 되는가?

void Memory(int* PT)
{
	int num;
	cin >> num;

	PT = new int[num];

	for (int i = 0; i < num; ++i)
	{
		printf("%d 번째의 점수를 입력해주세요\n", i + 1);
		cin >> PT[i];
	}

	for (int j = 0; j < num; ++j)
	{
		printf("%d 번째의 점수는 %d 입니다 \n", j + 1, PT[j]);
	}
	

}

int main()
{
	
	int* pt = nullptr;

	printf("몇 명의 시험 점수를 입력하시겠습니까\n");

	
	Memory(pt);
	

	

	return 0;
}

