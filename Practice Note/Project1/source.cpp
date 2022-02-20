#include <iostream>
#include <stdio.h>
#include "Func.h"

int g_i = 0;


void Test()
{
	++g_i;
}



int main()
{
	int a = 0;
	Test();

	g_i = 0;

	Add(a, g_i);

	return 0;
}

