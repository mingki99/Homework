#include <iostream>
using namespace std;

#include <vector>
// 오늘의 주제 : vector




int main()
{

	// 컨테이너(Container) : 데이터를 저장하는 객체 (자료구조 Data Structure)

	// vector (동적 배열)
	// - vector의 동작 원리 (size/capacity)

	// 반복자(Iterator) : 포인타와 유사한 개념. 컨테이너의 원서(데이터)를 가리키고, 다음/이전 원소를 알려준다.

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
// 오늘의 주제 : vector




int main()
{

	// 컨테이너(Container) : 데이터를 저장하는 객체 (자료구조 Data Structure)

	// vector (동적 배열)
	// - vector의 동작 원리 (size/capacity)

	// 반복자(Iterator) : 포인타와 유사한 개념. 컨테이너의 원서(데이터)를 가리키고, 다음/이전 원소를 알려준다.

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
// 오늘의 주제 : vector




int main()
{

	// 컨테이너(Container) : 데이터를 저장하는 객체 (자료구조 Data Structure)

	// vector (동적 배열)
	// - vector의 동작 원리 (size/capacity)

	// 반복자(Iterator) : 포인타와 유사한 개념. 컨테이너의 원서(데이터)를 가리키고, 다음/이전 원소를 알려준다.

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

