#pragma once
#include"header.h"
void MouseClick(int x1, int x2, int y1, int y2)
{
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		if (xx >= x1 && xx <= x2 && yy >= y1 && yy <= y2) {
			clearconsole();
			break;
		}
	}
}
int mainUiClick()
{
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		//printf("%2d %2d\n", xx, yy);
		if (xx >= 41 && xx <= 64 && yy >= 9 && yy <= 11) {
			clearconsole();
			return 1;
		}
		else if (xx >= 41 && xx <= 64 && yy >= 12 && yy <= 14) {
			clearconsole();
			return 2;
		}
		else if (xx >= 41 && xx <= 64 && yy >= 15 && yy <= 17) {
			clearconsole();
			return 3;
		}
		else if (xx >= 41 && xx <= 64 && yy >= 18 && yy <= 20) {
			clearconsole();
			return 4;
		}
		else if (xx >= 41 && xx <= 64 && yy >= 21 && yy <= 23) {
			clearconsole();
			return 5;
		}
		else if (xx >= 24 && xx <= 35 && yy >= 26 && yy <= 28) {
			clearconsole();
			return 6;
		}
		else if (xx >= 47 && xx <= 58 && yy >= 26 && yy <= 28) {
			clearconsole();
			return 7;
		}
		else if (xx >= 70 && xx <= 81 && yy >= 26 && yy <= 28) {
			clearconsole();
			return 8;
		}
	}
}
int calenderUiClick()
{
	time_t seconds = time(NULL);
	struct tm* now = localtime(&seconds);

	int xx, yy;
	while (1) {
		click(&xx, &yy);
		int calender_count = 0;
		int continue_count = 0;
		//printf("%2d %2d\n", xx, yy);
		for (int j = 0; j < 6; j++)
		{
			for (int i = 0; i < 7; i++)
			{
				if (i < p && continue_count < p) {
					continue_count++;
					continue;
				}
				if (xx >= 41 + 4 * i && xx <= 44 + 4 * i && yy >= 10 + j * 2 && yy <= 12 + j * 2 && calender_count < day_count && calender_count >= today - 1) {
					clearconsole();
					//printf("%d", calender_count + 1);
					return calender_count + 1;
				}
				else if (xx >= 67 && xx <= 68 && yy == 6) {
					clearconsole();
					return 0;
				}
				else if (xx >= 41 && xx <= 42 && yy == 6) {
					clearconsole();
					return -1;
				}
				calender_count++;
			}
		}
	}
	//calenderUiClick();
	//return;
}
int loginUiClick() {
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		//printf("%2d %2d\n", xx, yy);
		if (xx >= 43 && xx <= 52 && yy >= 14 && yy <= 16) {
			clearconsole();
			return 1;
		}
		else if (xx >= 55 && xx <= 64 && yy >= 14 && yy <= 16) {
			clearconsole();
			return 2;
		}

	}
}
int reserve_start_click() {
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		//printf("%2d %2d\n", xx, yy);
		if (xx >= 41 && xx <= 69 && yy >= 16 && yy <= 18) {
			clearconsole();
			return 1;
		}
		else if (xx >= 41 && xx <= 69 && yy >= 19 && yy <= 21) {
			clearconsole();
			return 2;
		}
		else if (xx >= 41 && xx <= 69 && yy >= 22 && yy <= 24) {
			clearconsole();
			return 3;
		}
		else if (xx >= 41 && xx <= 69 && yy >= 25 && yy <= 27) {
			clearconsole();
			return 4;
		}
		else if (xx >= 41 && xx <= 69 && yy >= 28 && yy <= 30) {
			clearconsole();
			return 5;
		}
	}
}
int reserve_end_click() {
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		for (int i = 0; i < 5; i++) {
			if (start == i + 1) continue;
			if (xx >= 41  && xx <= 69 && yy >= 16 + 3 * i && yy <= 18 + 3 * i)
			{
				clearconsole();
				return i;
			}
		}
	}
}
int bustime_click()
{
	int xx, yy;
	while (1) {
		click(&xx, &yy);
		//printf("%2d %2d\n", xx, yy);
		if (xx >= 47 && xx <= 59 && yy >= 14 && yy <= 16) {
			clearconsole();
			return 1;
		}
		else if (xx >= 47 && xx <= 59 && yy >= 18 && yy <= 20) {
			clearconsole();
			return 2;
		}
	}
}