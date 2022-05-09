#include <iostream>

using namespace std;

// A층의 B호에 살라면 자신의 (A-1)층의 1호부터 B 호까지 사람들의 수의 합 만큼 사람들을 데려와 살아야한다.

// K층에 N호에는 몇명이 살고있는지 출력한다.

// 아파트는 0층부터 1호부터 시작.
// 0층에는 0층의 I호에는 I명 산다. * 순차적으로 증가한다. I호가 증가할수록 I명도 증가한다. n이 증가하면 I도 증가한다. K깢지 증가하면 I , N 둘다 증가한다.
// 
// 제한 1 <= k,n <=14

// 접근방법을 모색해본다.

int apt[101][15];

int main()
{

	

	// k <= 1, n <= 14  
	int k, n;
	cin >> k >> n;

	int temp;

	for (int i = 0; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 0) {
				apt[0][j] = j;
			}
			else if (j == 1) {
				apt[i][1] = 1;
			}
			else {
				apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
			}
		}
	}
	cout << apt[k][n] << "\n";






	return 0;
}