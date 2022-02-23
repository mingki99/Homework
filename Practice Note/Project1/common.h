#pragma once

static int i = 0;
extern int g_iExtern;		// 익스턴은 해더에 선언할때 절대 초기화를 해주면 안됌.
							// 초기화 할 시 변수를 선언한 것 이 아닌다. 
							// 이런 변수가 있다 알려주는 역할을 한다.