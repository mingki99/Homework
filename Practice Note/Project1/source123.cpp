
#include <iostream>

using namespace std;

int main()
{
	//메모리가 배열일 경우
	//동적메모리 할당
	int n = 1;
	int* a = new int[n];

	int b;

	cin >> n;
	bool Engine = true;

	while (Engine)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> b;
			a[i] = b;

			if ()

			//a[10] 배열의 크기
			// a[0] ~ a[9] = 10 배열의 인덱스
		}

		for (int i = 0; i < n; i++)
		{
			cout << b << endl;
		}
		return 0;
	}
}