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



	return 0;
}

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



	return 0;
}

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



	return 0;
}

