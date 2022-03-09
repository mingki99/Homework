#include <stdio.h>
#include <stdlib.h>

#include <wchar.h>
#include <assert.h>

// 대문자는 절대 변하지않는 값 이라는 표기
// 그러므로 const 로 사용

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;

int main()
{
#pragma region 비트 연산
	unsigned char flag; // 부호를 없애야 >> 를 하더라도 부호가 딸려오지않음

	// 실습
	// 0b000 [무적][변이][스턴][공중부양]

	// 무적 상태로 만든다
	flag = (1 << 3);

	// 변이 상태를 추가한다 (무적 + 변이) 
	flag |= (1 << 2);

	// 무적인지 확인하고 싶다? (다른 상태는 관심없음)
	// bitmask
	bool invincible = ((flag & (1 << 3)) != 0);

	// 무적이거나 스턴 상태인지 확인하고 싶다면?
	bool stunOrlnvincible = ((flag & 0b1010) != 0);
#pragma endregion

	return 0;
}

