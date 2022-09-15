#pragma once
#include"header.h"

void countTime(int a)
{
	int countTime = a;
	while (1)
	{
		Sleep(1000);
		countTime -= 1;

		if (countTime < 0)
		{
			clearconsole();
			break;
		}
	}
}