#pragma once
#include"header.h"
int main()
{
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // ���� ��
//	Member_read();
	//Manager_read();
	//MainUi();
    
    int size; // ���� ũ��
    char* doc = Bus_read("Bus.json", &size);    // ���Ͽ��� JSON ������ ����, ���� ũ�⸦ ����

	manager_time();
}