#pragma once
#include"header.h"
void changeUi()
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

	char* int_day[31] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31" };

	int tmp;
	tmp = calender();
	strcpy(ticket[ticket_count - 2].day, int_day[tmp - 1]);

	//****************************************************************************************************************
	char* doc = Bus_read("Bus.txt");
	int* change_tmp[1000] = { 0 }; // 체인지 파일에 버스 시간표 넣기 위한 값

	change_tmp[0] = strtok(doc, " ");
	int i = 0;
	while (change_tmp[i] != NULL)
	{
		//printf("%s\n", tmp[i++]);
		i++;
		change_tmp[i] = strtok(NULL, " ");
	}
	int j = 0;

	square(85, 29, 12, 1);
	square_char(70, 2, 19, 2, "※예약※");
	square(35, 2, 29, 7);
	goto_xy(41, 8);
	printf("%d. %d. %d", year, month, reserve_day);



	square_char3(35, 2, 29, 9, "출발        등급         잔여석");

	while (1)
	{
		if ((strcmp(ticket[ticket_count - 2].month, change_tmp[j * 9]) == 0) && (strcmp(ticket[ticket_count - 2].day, change_tmp[(j * 9) + 1]) == 0) &&
			(strcmp(ticket[ticket_count - 2].start_region, change_tmp[(j * 9) + 2]) == 0) && (strcmp(ticket[ticket_count - 2].end_region, change_tmp[(j * 9) + 3]) == 0))
		{
			for (int i = 0; i < 7; i++)
			{
				square3(35, 2, 29, 11 + i * 2);
				goto_xy(31, 12 + i * 2);
				printf("%s:%s        %s           %s", change_tmp[(j * 9 + 4) + (i * 9)], change_tmp[(j * 9 + 5) + (i * 9)], change_tmp[(j * 9 + 6) + (i * 9)], change_tmp[(j * 9 + 7) + (i * 9)]);
				//시간						//분						//등급					//금액
			}
			break;
		}
		j++;
	}
	// 출발 시간
	// 등급
	// 잔여석

	square_char4(13, 2, 63, 7, "▦");
	square_char3(13, 2, 63, 9, "요금");
	//요금
	for (int i = 0; i < 7; i++) {
		square3(13, 2, 63, 11 + i * 2);
		goto_xy(68, 12 + i * 2);
		printf("%s", change_tmp[(j * 9 + 8) + (i * 9)]);
	}
	int xx, yy;

	i = 0;
	while (1) {
		click(&xx, &yy);
		if (xx >= 30 && xx <= 63 && yy == 12 + (i * 2) && i <= 6) {
			clearconsole();
			break;
		}
		i++;
	}


	strcpy(ticket[ticket_count - 2].hour, change_tmp[(j * 9 + 4) + (i * 9)]);
	strcpy(ticket[ticket_count - 2].min, change_tmp[(j * 9 + 5) + (i * 9)]);
	strcpy(ticket[ticket_count - 2].grade, change_tmp[(j * 9 + 6) + (i * 9)]);
	strcpy(ticket[ticket_count - 2].money, change_tmp[(j * 9 + 8) + (i * 9)]);

	//****************************************************************************************************************
	char* msg[14] = { "1","2","5","6","9","10","13","14","17","18","21","22","25","26" };
	char* msg2[14] = { "3","4","7","8","11","12","15","16","19","20","23","24","27","28" };
	square(85, 29, 12, 1);
	square_char(40, 2, 32, 5, "변경 할 좌석을 먼저 선택해 주세요");
	square_char(23, 2, 40, 8, "운전석       출입문");
	original_table(5, 2, 2, 7, 40, 10, msg);
	original_table(5, 2, 2, 7, 54, 10, msg2);
	goto_xy(40, 10); printf("┣"); goto_xy(62, 10); printf("┫"); goto_xy(49, 24); printf("━━━━━┛");

	int seat_click_tmp; //몇번좌석을 클릭햇는지 나오는 거
	seat_click_tmp = seat_click();
	ticket[ticket_count - 2].seat = seat_click_tmp;

	Ticket_write();

	square(85, 29, 12, 1);
	square_char(30, 2, 38, 12, "변경하시겠습니까?");
	square_char(7, 2, 42, 16, "예");
	square_char(11, 2, 52, 16, "아니오");
	MouseClick(43, 48, 16, 18);
	square(85, 29, 12, 1);
	square_char(30, 2, 38, 12, "변경완료되었습니다...");
	countTime(1);

	goto_xy(0, 30);
	//ExClick();
}