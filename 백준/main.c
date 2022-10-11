#pragma once
#include"header.h"
int main()
{
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // ±ÛÀÚ »ö
	Manager_read();
	Member_read();
	MainUi();
	//reserveUi();
	
	//manager_time();
}
//char* doc = Bus_read("Bus.txt");
//char* tmp[1000] = { 0 };
//
//tmp[0] = strtok(doc, " ");
//int i = 0;
//while (tmp[i] != NULL)
//{
//	printf("%s\n", tmp[i++]);
//	tmp[i] = strtok(NULL, " ");
//}