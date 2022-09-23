#pragma once
#include"header.h"
int main()
{
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // 글자 색
//	Member_read();
	//Manager_read();
	//MainUi();
    
    int size; // 문서 크기
    char* doc = Bus_read("Bus.json", &size);    // 파일에서 JSON 문서를 읽음, 문서 크기를 구함

	manager_time();
}