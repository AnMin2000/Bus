#pragma once
#include"header.h"

void reserve_start_areaUi() {
	char* end_region[5] = { "����","��õ","�뱸","���","�λ�" };
	int day;
	Mouse();

	square(85, 30, 12, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	square_char(31, 6, 20, 5, "����");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	square_char(31, 6, 57, 5, "����");

	goto_xy(51, 8);
	printf("����������");

	goto_xy(22, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	printf("�����");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	goto_xy(59, 6);
	printf("������");

	goto_xy(13, 12);
	for (int i = 0; i < 83; i++)	printf("��");

	square_char(80, 2, 15, 13, "��� ������ ������ �ּ���");
	square_char(30, 2, 40, 16, "����");
	square_char(30, 2, 40, 19, "��õ");
	square_char(30, 2, 40, 22, "�뱸");
	square_char(30, 2, 40, 25, "���");
	square_char(30, 2, 40, 28, "�λ�");

	start = reserve_start_click();


	if (start == 1) {
		reserve_end_areaUi();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 16, "����");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 19, "��õ");
		square_char(30, 2, 40, 22, "�뱸");
		square_char(30, 2, 40, 25, "���");
		square_char(30, 2, 40, 28, "�λ�");
		strcpy(member[ticket_id_count].start_region, "����");
		end = reserve_end_click(); 
		strcpy(member[ticket_id_count].end_region, end_region[end]);
		day = calender();
		member[ticket_id_count].month = month;
		member[ticket_id_count].day = day;
		Member_write();
	}
	else if (start == 2) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "����");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 19, "��õ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 22, "�뱸");
		square_char(30, 2, 40, 25, "���");
		square_char(30, 2, 40, 28, "�λ�");
		strcpy(member[ticket_id_count].start_region, "��õ");
		end = reserve_end_click();
		strcpy(member[ticket_id_count].end_region, end_region[end]);
		day = calender();
		member[ticket_id_count].month = month;
		member[ticket_id_count].day = day;
		Member_write();

	}
	else if (start == 3) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "����");
		square_char(30, 2, 40, 19, "��õ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 22, "�뱸");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 25, "���");
		square_char(30, 2, 40, 28, "�λ�");
		strcpy(member[ticket_id_count].start_region, "�뱸");
		end = reserve_end_click();
		strcpy(member[ticket_id_count].end_region, end_region[end]);
		day = calender();
		member[ticket_id_count].month = month;
		member[ticket_id_count].day = day;
		Member_write();

	}
	else if (start == 4) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "����");
		square_char(30, 2, 40, 19, "��õ");
		square_char(30, 2, 40, 22, "�뱸");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 25, "���");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 28, "�λ�");
		strcpy(member[ticket_id_count].start_region, "���");
		end = reserve_end_click();
		strcpy(member[ticket_id_count].end_region, end_region[end]);
		day = calender();
		member[ticket_id_count].month = month;
		member[ticket_id_count].day = day;
		Member_write();

	}
	else if (start == 5) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "����");
		square_char(30, 2, 40, 19, "��õ");
		square_char(30, 2, 40, 22, "�뱸");
		square_char(30, 2, 40, 25, "���");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 28, "�λ�");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		strcpy(member[ticket_id_count].start_region, "�λ�");
		end = reserve_end_click();
		strcpy(member[ticket_id_count].end_region, end_region[end]);
		day = calender();
		member[ticket_id_count].month = month;
		member[ticket_id_count].day = day;
		Member_write();
	}

	/*goto_xy(0, 40);
	Mouse();
	ExClick();*/
}