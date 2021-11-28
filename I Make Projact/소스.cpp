#include <iostream>
#include <time.h>

using namespace std;

int main()
{ 
	//Lotti Program
	int iLotto[45] = {};

	// 1 ~ 45 까지의 숫자를 차례대로 넣어준다.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;

	}

	for (int i = 0; i < 6; ++i)
	{
		cout << iLotto[i] << endl;
	}

	return 0;
}

