#pragma once
#include"header.h"

void reserve_start_areaUi() {
	char* end_region[5] = { "서울","인천","대구","울산","부산" };
	int day;
	Mouse();

	square(85, 30, 12, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	square_char(31, 6, 20, 5, "선택");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	square_char(31, 6, 57, 5, "선택");

	goto_xy(51, 8);
	printf("━━━━▶");

	goto_xy(22, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	printf("출발지");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	goto_xy(59, 6);
	printf("도착지");

	goto_xy(13, 12);
	for (int i = 0; i < 83; i++)	printf("━");

	square_char(80, 2, 15, 13, "출발 지역을 선택해 주세요");
	square_char(30, 2, 40, 16, "서울");
	square_char(30, 2, 40, 19, "인천");
	square_char(30, 2, 40, 22, "대구");
	square_char(30, 2, 40, 25, "울산");
	square_char(30, 2, 40, 28, "부산");

	start = reserve_start_click();


	if (start == 1) {
		reserve_end_areaUi();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 16, "서울");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 19, "인천");
		square_char(30, 2, 40, 22, "대구");
		square_char(30, 2, 40, 25, "울산");
		square_char(30, 2, 40, 28, "부산");
		strcpy(ticket[ticket_count - 1].start_region, "서울");
		end = reserve_end_click(); 
		strcpy(ticket[ticket_count - 1].end_region, end_region[end]);
		day = calender();
		ticket[ticket_count - 1].month = month;
		ticket[ticket_count - 1].day = day;
		Ticket_append(ticket[ticket_count - 1]);
	}
	else if (start == 2) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "서울");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 19, "인천");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 22, "대구");
		square_char(30, 2, 40, 25, "울산");
		square_char(30, 2, 40, 28, "부산");
		strcpy(ticket[ticket_count - 1].start_region, "인천");
		end = reserve_end_click();
		strcpy(ticket[ticket_count - 1].end_region, end_region[end]);
		day = calender();
		ticket[ticket_count - 1].month = month;
		ticket[ticket_count - 1].day = day;
		Ticket_append(ticket[ticket_count - 1]);

	}
	else if (start == 3) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "서울");
		square_char(30, 2, 40, 19, "인천");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 22, "대구");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 25, "울산");
		square_char(30, 2, 40, 28, "부산");
		strcpy(ticket[ticket_count - 1].start_region, "대구");
		end = reserve_end_click();
		strcpy(ticket[ticket_count - 1].end_region, end_region[end]);
		day = calender();
		ticket[ticket_count - 1].month = month;
		ticket[ticket_count - 1].day = day;
		Ticket_append(ticket[ticket_count - 1]);

	}
	else if (start == 4) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "서울");
		square_char(30, 2, 40, 19, "인천");
		square_char(30, 2, 40, 22, "대구");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 25, "울산");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		square_char(30, 2, 40, 28, "부산");
		strcpy(ticket[ticket_count - 1].start_region, "울산");
		end = reserve_end_click();
		strcpy(ticket[ticket_count - 1].end_region, end_region[end]);
		day = calender();
		ticket[ticket_count - 1].month = month;
		ticket[ticket_count - 1].day = day;
		Ticket_append(ticket[ticket_count - 1]);

	}
	else if (start == 5) {
		reserve_end_areaUi();
		square_char(30, 2, 40, 16, "서울");
		square_char(30, 2, 40, 19, "인천");
		square_char(30, 2, 40, 22, "대구");
		square_char(30, 2, 40, 25, "울산");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		square_char(30, 2, 40, 28, "부산");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		strcpy(ticket[ticket_count - 1].start_region, "부산");
		end = reserve_end_click();
		strcpy(ticket[ticket_count - 1].end_region, end_region[end]);
		day = calender();
		ticket[ticket_count - 1].month = month;
		ticket[ticket_count - 1].day = day;
		Ticket_append(ticket[ticket_count - 1]);
	}

	/*goto_xy(0, 40);
	Mouse();
	ExClick();*/
}