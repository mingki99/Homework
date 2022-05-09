#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>

// 오늘의 주제 : 알고리즘
#include <algorithm>

int main()
{
	// 자료구조 (데이터를 저장하는 구조)
	// 알고리즘 (데이터를 어떻게 사용할 것인가?)

	// find
	// find_if

	// count
	// count_if
	// all_of
	// none_of

	
	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int> v;

	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// number라는 숫자가 벡터에 체크하는 기능 (bool, 첫 등장 iterator
	{
		int number = 50;
		int count = 1;

		bool found = false;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{	
			if (*it== number)
			{
				found = true;
				cout << (*it) <<endl;
				cout << count << "번 째 에 50 등장" << endl;
				break;
			}
			
			++count;
			


		}

		// 어디부터, 어디까지, 어떤 데이터를 찾아주는 find
		vector<int>::iterator itfind = find(v.begin(), v.end(), number);
		if(itfind == v.end())
		{
			// 못찾았음
			cout << "못 찾았음 " << endl;
		}
		else
		{
			cout << "찾았다" << endl;
		}

	}

	// 11로 나뉘는 숫자가 백터에 있는지 체크한다. (bool, 첫 등장 iterator)
	{
		int count = 1;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if (*it % 11 == 0)
			{
				cout << (*it) << " \t 11로 나뉘어진 " << count <<  " 번 째" << endl;
			}
		
			++count;
		}
		
		struct CanDivideBy11
		{
			bool operator()(int a)
			{
				return (a%11) == 0;
			}
		};

		// 처음과 끝, 그다음 조건이 bool 을 뱉어주는 
		vector<int>::iterator itFind = std::find_if(v.begin(),v.end(),CanDivideBy11());
		if (itFind == v.end())
		{
			// 못찾았음
			cout << "못 찾았음 " << endl;
		}
		else
		{
			cout << "찾았다" << endl;
		}

	}

	// 홀수의 숫자의 갯수는?
	{
		int count = 0;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if ((*it %2) != 0)
			{
				count ++;
			} 
		}
		cout << " 홀수의 개수 : "  << count << endl;

		struct IsOdd
		{
			bool operator()(int a)
			{
				return (a%2) == 0;
			}
		};

		// 몇번 카운트 되었는지 리턴
		int n = std::count_if(v.begin(), v.end(),IsOdd());

		// 모든데이터가 조건에 맞냐
		bool b1 = std::all_of(v.begin(), v.end(), IsOdd());
		// 모든 데이터가 하나라도 있냐
		bool b2 = std::any_of(v.begin(), v.end(), IsOdd());
		// 모든 데이터가 조건에 안맞냐
		bool b3 = std::none_of(v.begin(), v.end(), IsOdd());
			
	}

	cout << "============================" << endl;

	// 백터에 들어가 있는 모든 숫자들을 3을 곱해준다.
	{
		
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
			
			cout << i <<" 번째 백터에 데이터를 3을 곱해준 값 : " << v[i] << endl;
		}

		struct MultiplyBy3
		{
			void operator()(int a)
			{
				a *= 3;
			}
		};

		// 값을 하나하나 꺼내어 준다.
		std::for_each(v.begin(), v.end(), MultiplyBy3());
	}

	// 홀수인 데이터 일괄 삭제
	{
		for (vector<int>::iterator it = v.begin(); it != v.end();)
		{
			if((*it %2) !=0)
				it = v.erase(it);
			else
				++it;
		}


		v.clear();

		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(5);
		v.push_back(8);
		v.push_back(2);
		

		// 1 4 3 5 8 2
		// 4 8 2 5 8 2
		// 
		// 4 8 2 5 8 2
		struct IsOdd
		{
			bool operator()(int a)
			{
				return (a % 2) != 0;
			}
		};

		// 삭제를 해주는겄이 아닌 필요한 데이터를 남겨준다.
		// 앞에는 필요한데이터로 생성해주고, 버려질 데이터들은 iterator로 반환해준다.
		vector<int>::iterator it = std::remove_if(v.begin(), v.end(), IsOdd());

		// iterator로 받은 값을 끝날때까지 지워준다.
		v.erase(it, v.end());

		int a = 3;
	}

	return 0;
}

