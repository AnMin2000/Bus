#pragma once
#include"header.h"
void inquiryUi()
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
	square_char(40, 2, 34, 2, "결제 내역조회");

	square(30, 24, 39, 5);
	square(18, 2, 45, 6);
	goto_xy(49, 7);
	printf("%s→%s", ticket[ticket_count - 2].start_region, ticket[ticket_count - 2].end_region);

	goto_xy(50, 10);
	printf("출발일자");
	square(18, 2, 45, 11);
	goto_xy(49, 12);
	printf("%s/%s %s:%s", ticket[ticket_count - 2].month, ticket[ticket_count - 2].day, ticket[ticket_count - 2].hour, ticket[ticket_count - 2].min);

	goto_xy(50, 15);
	printf("좌석번호");
	square(18, 2, 45, 16);
	goto_xy(53, 17);
	printf("%d", ticket[ticket_count - 2].seat);

	goto_xy(50, 20);
	printf("  등급");
	square(18, 2, 45, 21);
	goto_xy(52, 22);
	printf("%s", ticket[ticket_count - 2].grade);

	goto_xy(50, 25);
	printf("결제금액");
	square(18, 2, 45, 26);
	goto_xy(52, 27);
	printf("%s", ticket[ticket_count - 2].money);

	square_char(5, 2, 13, 2, "←");
	MouseClick(14, 17, 2, 4);
}