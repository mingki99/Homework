// Visual studio 컴파일러 전용.
// 해더의 같은 내용이 두번 추가되지않게 막아주는 구문
// #pragma once

#ifndef _TEST1_H__
#define _TEST1_H__


struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void Test_1();

void Test_2();

void Test_3();

#endif // !_TEST1_H__
