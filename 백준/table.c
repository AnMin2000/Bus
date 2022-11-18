#pragma once
#include"header.h"
void table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100])
{
	time_t seconds = time(NULL);
	struct tm* now = localtime(&seconds);

	int Tcount = 0;

	for (int j = 0; j < height_len; j++) {
		for (int i = 0; i < width_len; i++) {
			if (j == 0) {
				if (table_count == 0)
				{
					square_char_red(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
				}
				else if (table_count == 6) {
					square_char_blue(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
				}
				else
					square_char(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
			}
			else {
				if (table_count > 6 && table_count < today + 6 + blank_count) {
					if(table_count == 7) square_char3_red(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
					else square_char3_gray(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
				}
				else if(table_count >= today)
				{
					if(table_count % 7 == 0)
						square_char3_red(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
					else if(table_count % 7 == 6)
						square_char3_blue(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
					else
						square_char3(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
				}
			}
			table_count++;
		}
	}
}
void original_table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100])
{
	int table_count = 0;
	for (int j = 0; j < height_len; j++) {
		for (int i = 0; i < width_len; i++) {
			if (j == 0) square_char(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
			else square_char3(width, height, x + (width * i) - i, y + (height * j), msg[table_count]);
			table_count++;
		}
	}
}
void square(int width, int height, int x, int y)
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			printf(" ");
		}
		printf("��\n");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 30);
}
void square3(int width, int height, int x, int y)
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			printf(" ");
		}
		printf("��\n");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 30);
}
void square_char(int width, int height, int x, int y, char* msg)
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				printf("%s", msg);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char_red(int width, int height, int x, int y, char* msg)
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("%s", msg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char_blue(int width, int height, int x, int y, char* msg)
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("%s", msg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char1(int width, int height, int x, int y, char* msg) //��
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + j, y + height / 2);
				printf("%s", msg);
				goto_xy(x + width - 1, y + 1);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char2(int width, int height, int x, int y, char* msg) // ��
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + j, y + height / 2);
				printf("%s", msg);
				goto_xy(x + width - 1, y + 1);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char3(int width, int height, int x, int y, char* msg) //��, �� �»�� ���� ��  ��
{
	{
		goto_xy(x, y);
		for (int i = 0; i < width; i++) {
			if (i == 0) printf("��");
			else if (i == width - 1) printf("��\n");
			else  printf("��");
		}
		goto_xy(x, y + 1);
		for (int j = 0; j < height; j++) {
			printf("��");
			for (int k = 0; k < width - 2; k++) {
				if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
					goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
					printf("%s", msg);
					goto_xy(x + width - 1, y + j);
				}
				else if (j != height / 2) printf(" ");
			}

			printf("��");
			goto_xy(x, y + (j + 1));
		}
		for (int m = 0; m < width; m++) {
			if (m == 0) printf("��");
			else if (m == width - 1) printf("��\n");
			else printf("��");
		}
		goto_xy(0, 40);
	}
}
void square_char3_gray(int width, int height, int x, int y, char* msg) //��, �� �»�� ����   ��  ��
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				printf("%s", msg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char3_blue(int width, int height, int x, int y, char* msg) //��, �� �»�� ����  ��  ��
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("%s", msg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char3_red(int width, int height, int x, int y, char* msg) //��, �� �»�� ����
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("%s", msg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}
void square_char4(int width, int height, int x, int y, char* msg) // ���ϴܦ� ��          ��   ��
{
	goto_xy(x, y);
	for (int i = 0; i < width; i++) {
		if (i == 0) printf("��");
		else if (i == width - 1) printf("��\n");
		else  printf("��");
	}
	goto_xy(x, y + 1);
	for (int j = 0; j < height; j++) {
		printf("��");
		for (int k = 0; k < width - 2; k++) {
			if (j == height / 2 && k == ((width)-strlen(msg)) / 2) {
				goto_xy(x + ((width)-strlen(msg)) / 2 + 1, y + height / 2);
				printf("%s", msg);
				goto_xy(x + width - 1, y + j);
			}
			else if (j != height / 2) printf(" ");
		}

		printf("��");
		goto_xy(x, y + (j + 1));
	}
	for (int m = 0; m < width; m++) {
		if (m == 0) printf("��");
		else if (m == width - 1) printf("��\n");
		else printf("��");
	}
	goto_xy(0, 40);
}