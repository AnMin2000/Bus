#pragma once
#include"header.h"
void cancleUi()
{
	square(85, 29, 12, 1);
	square_char(54, 2, 26, 5, "예약 현황");
	square(40, 14, 33, 10);

	goto_xy(33, 12);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(33, 14);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(33, 16);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(33, 18);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(33, 20);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(33, 22);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	goto_xy(35, 11);
	printf(" 날짜    시간	   지역");
	goto_xy(41, 10);
	printf("┳");
	for (int i = 0; i < 13; i++)
	{
		goto_xy(41, 11 + i);
		printf("┃");
		goto_xy(49, 11 + i);
		printf("┃");
	}
	goto_xy(41, 24);
	printf("┻");
	goto_xy(49, 10);
	printf("┳");
	goto_xy(49, 24);
	printf("┻");

	goto_xy(35, 13);
	printf("%s/%s", ticket[ticket_count - 2].month, ticket[ticket_count - 2].day);
	goto_xy(43, 13);
	printf("%s:%s", ticket[ticket_count - 2].hour, ticket[ticket_count - 2].min);
	goto_xy(56, 13);
	printf("%s→%s", ticket[ticket_count - 2].start_region, ticket[ticket_count - 2].end_region);

	MouseClick(34, 72, 12, 14);

	square(85, 29, 12, 1);
	square_char(30, 2, 38, 12, "취소하시겠습니까?");
	square_char(7, 2, 42, 16, "예");
	square_char(11, 2, 52, 16, "아니오");
	MouseClick(43, 48, 16, 18);
	square(85, 29, 12, 1);
	square_char(30, 2, 38, 12, "취소완료되었습니다...");
	countTime(1);

	ticket_count--;
	Ticket_write();

}