#pragma once
#include"header.h"
int main()
{
	Mouse();
	
	char* msg[14] = { "1","2","5","6","9","10","13","14","17","18","21","22","25","26" };
	char* msg2[14] = {"3","4","7","8","11","12","15","16","19","20","23","24","27","28"};
	square(85, 29, 12, 1);
	square_char(40, 2, 32, 5, "변경 할 좌석을 먼저 선택해 주세요");	
	square_char(23, 2, 40, 8, "운전석       출입문");
	original_table(5, 2, 2, 7, 40, 10, msg);
	original_table(5, 2, 2, 7, 54, 10, msg2);
	goto_xy(40, 10); printf("┣"); goto_xy(62, 10); printf("┨"); goto_xy(49, 24); printf("━━━━━┛");

	int xx, yy;
	int i = 0;
	int j = 0;
	int k = 0;
	int i2 = 0;
	int j2 = 0;
	int k2 = 0;
	
	while (1) {
		click(&xx, &yy);//2 3 6 7 10 1 14 15
		if(i == 3 * (i+1))
		if ((xx >= 41 + (i * 4) && xx <= 44 + (i * 4) && yy == 11 + (i * 2))) {
			clearconsole();
			return 1;
		}
		else if ((xx >= 45 && xx <= 48 && yy == 13)) {
			clearconsole();
			return 2;
		}
		else if (xx >= 55 && xx <= 58 && yy == 11)
		{
			clearconsole();
			return 3;
		}
		else if (xx >= 59 && xx <= 63 && yy == 13)
		{
			clearconsole();
			return 4;
		}

	}





	goto_xy(0, 30);
	ExClick();
	//Ticket_read();
	//Member_read();
	//manager_time();
	//LoginUi();
	//printf("%s", ticket[ticket_count - 2].month);
	//할일 : 달, 일, 출발지역, 도착 지역 비교하기 전에 reserve함수 반복문 다시 하기
}