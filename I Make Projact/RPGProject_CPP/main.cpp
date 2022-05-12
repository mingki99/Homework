#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : 전달 참조(forwarding reference)

class Knight
{
public:
	Knight() { cout << "기본 생성자"  << endl;}
	Knight(const Knight&) { cout << "복사 생성자" << endl; }
	Knight(Knight&&) noexcept { cout << "이동 생성자" << endl; }
};

void RvalueRef(Knight&& knight) {}	// 오른 값 참조

void Copy(Knight k) {}

template<typename T>
void ForwardingRef(T&& param)	// 전달 참조
{
	Copy (std::forward<T>(std::move(param)));
	// 왼값 참조라면
	Copy(param);

	// 오른값 참조라면
	Copy(std::move(param));
}

//template<typename T>
//void ForwardingRef(const T&& param)	// const를 붙인다면 오른값 참조의 기능밖에 못한다.
//{
//
//}

int main()
{
	// 보편 참조(universal reference)
	// 전달 참조(forwading reference) C++17

	// && 두번 == 오른값 참조

	Knight k1;

	RvalueRef(std::move(k1));

	// 경우에 따라서 왼값참조, 오른값 참조로 변할 수 있다.
	ForwardingRef(k1);				// OK
	ForwardingRef(std::move(k1));	// OK


	// 오른값 참조라면 error를 뱉어야하는데 정상 작동된다!
	auto&& k2 = k1;	// 왼값 참조로 바뀌어있다.

	auto&& k3 = std::move(k1);	// 오른값 참조로 바뀌어있다.

	// 공통점 : 형식 영역 (type deduction)이 일어난다.

	// 전달 참조를 구별하는 방법
	
	Knight& k4 = k1;	// 왼값 참조
	Knight&& k5 = std::move(k1);	// 오른값 참조
	// k5는 오른값의 참조가 맞긴하지만 
	// k5는 사라지지않고 계속 사용할 수 있기에 왼값이다.


	// 오른값 : 왼값이 아니다. = 단일식에서 벗어나면 사용 X
	// 오른값 참조 : 오른값만 참조할 수 있는 참조타입
	RvalueRef(k5);





	return 0;
}

