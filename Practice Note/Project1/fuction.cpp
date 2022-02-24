#include "func.h"
#include "common.h"
#include <stdio.h>


static int g_iStatic = 0;

int Add(int a, int b)
{
	printf("g_iStatic 의 값은 : %d\n", g_iStatic);

	printf("g_iExtern 의 값 : %d\n", g_iExtern);

	return a + b;
};

int Sub(int a, int b)
{
	return a - b;
};

int Mul(int a, int b)
{
	return a * b;
};