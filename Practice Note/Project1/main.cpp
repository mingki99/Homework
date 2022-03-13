#include <iostream>
#include <vector>

using namespace std;



int main()
{
	// 정수타입 백터 생성
	vector<int> iMyVector = { 11,22 };
	
	// push_back()을 이용하여 생성한 백터에 정숫값을 몇개 추가한다.
	iMyVector.push_back(33);
	iMyVector.push_back(44);

	cout << "1 st elemnt" << iMyVector[0] << endl;


	return 0;
}

