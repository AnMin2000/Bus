#pragma once
#include"header.h"

void reserve_end_areaUi() {
	square(85, 34, 12, 1);
	square_char(31, 6, 20, 5, "선택");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	square_char(31, 6, 57, 5, "선택");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

	goto_xy(51, 8);
	printf("━━━━▶");

	goto_xy(22, 6);

	printf("출발지");

	goto_xy(59, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	printf("도착지");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	goto_xy(13, 12);
	for (int i = 0; i < 83; i++)	printf("━");

	square_char(80, 2, 15, 13, "도착 지역을 선택해 주세요");
}