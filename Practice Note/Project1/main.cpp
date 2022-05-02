#include <iostream>
using namespace std;

#include <vector>
// ������ ���� : vector


int main()
{

	// �����̳�(Container) : �����͸� �����ϴ� ��ü (�ڷᱸ�� Data Structure)

	// vector (���� �迭)
	// - vector�� ���� ���� (size/capacity)

	// �ݺ���(Iterator) : ����Ÿ�� ������ ����. �����̳��� ����(������)�� ����Ű��, ����/���� ���Ҹ� �˷��ش�.

	vector<int> vec(10);

	for (vector<int>::size_type i = 0; i < vec.size(); i++)
	{
		vec[i] = i;
	}

	vector<int>::iterator it;
	int* ptr;

	it = vec.begin();
	ptr = &vec[0];

	cout << (*it) << endl;
	cout << *ptr << endl;


	// ���������͸� �̵���Ų��.
	ptr++;
	++ptr;
	it++;
	++it;

	it--;
	--it;
	ptr--;
	--ptr;

	vector<int>::iterator itBegin = vec.begin();
	vector<int>::iterator itEnd = vec.end(); // ������ �����̱⿡ �̻��� ���� �� �ִ�.

	// ++it�� ���ִ°��� ���� ���� �� ������ (������ �����ε� ������ ++�� ���� �� ������ ���۵ȴ�
	// �ٸ� �����̳ʴ� v[i]�� ���� �ε��� ������ �� �� ���� �ִ�.
	// iterator�� vector�� �ƴ϶�, �ٸ� �����̳ʿ��� ���������� �ִ� ����
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)	
	{
		cout <<(*it) <<endl;
	}

	int* ptrBegin = &vec[0];	// vec.begin()
	int* ptrEnd = ptrBegin + 10;
	for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
	{
		cout << (*ptr) << endl;
	}

	// const int*
	vector<int>::const_iterator cit1 = vec.begin();
	// *cit1 = 100;

	for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); ++it)
	{
		cout << (*it) <<endl;
	}






	return 0;
}

