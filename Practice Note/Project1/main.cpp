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


	// 다음데이터를 이동시킨다.
	ptr++;
	++ptr;
	it++;
	++it;

	it--;
	--it;
	ptr--;
	--ptr;

	vector<int>::iterator itBegin = vec.begin();
	vector<int>::iterator itEnd = vec.end(); // 끝나는 지점이기에 이상한 값이 들어가 있다.

	// ++it을 해주는것이 정말 조금 더 빠르다 (연산자 오버로딩 구문에 ++이 조금 더 빠르게 동작된다
	// 다른 컨테이너는 v[i]와 같은 인덱스 접근이 안 될 수도 있다.
	// iterator는 vector뿐 아니라, 다른 컨테이너에도 공통적으로 있는 개념
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

