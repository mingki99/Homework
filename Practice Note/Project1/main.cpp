#include <iostream>
#include <vector>

using namespace std;



int main()
{
	// ����Ÿ�� ���� ����
	vector<int> iMyVector = { 11,22 };
	
	// push_back()�� �̿��Ͽ� ������ ���Ϳ� �������� � �߰��Ѵ�.
	iMyVector.push_back(33);
	iMyVector.push_back(44);

	cout << "1 st elemnt" << iMyVector[0] << endl;


	return 0;
}

