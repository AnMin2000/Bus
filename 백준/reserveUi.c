#pragma once
#include"header.h"

void reserveUi() {
	time_t seconds = time(NULL);
	struct tm* now = localtime(&seconds);
	Node* p = malloc(sizeof(Node));

	Mouse();
	square(85, 29, 12, 1);
	square_char(31, 6, 20, 5, "����");
	square_char(31, 6, 57, 5, "����");
	goto_xy(51, 8);
	printf("����������");

	goto_xy(22, 6);
	printf("�����");
	goto_xy(59, 6);
	printf("������");

	goto_xy(21, 12);
	for (int i = 0; i < 66; i++)	printf("��");

	square(68, 3, 20, 13);
	goto_xy(22, 14);
	printf("���³�");
	goto_xy(22, 15);
	printf("%d.%d.%d", 1900 + now->tm_year, now->tm_mon + 1, now->tm_mday);

	goto_xy(83, 14);
	printf("�ˢ�");
	goto_xy(83, 15);
	printf("�ˢ�");

	goto_xy(21, 17);
	for (int i = 0; i < 66; i++)	printf("��");

	square(68, 4, 20, 18);
	goto_xy(21, 20);
	for (int i = 0; i < 66; i++)	printf("��");

	goto_xy(54, 20);
	printf("��");
	goto_xy(54, 21);
	printf("��");
	goto_xy(54, 22);
	printf("��");

	goto_xy(51, 19);
	printf("����ޡ�");

	goto_xy(35, 21);
	printf("���Ϲݡ�");

	goto_xy(69, 21);
	printf("����");

	goto_xy(21, 23);
	for (int i = 0; i < 66; i++)	printf("��");

	square_char(11, 2, 49, 25, "��ȸ�ϱ�");

	MouseClick(21, 50, 5, 11);  //���
	reserve_start_areaUi();
	
	clearconsole();
	
	square_char(70, 2, 19, 2, "�ؿ����");
	square(35, 2, 29, 7);
	goto_xy(41, 8);
	printf("%d. %d. %d", year, month, reserve_day);
	square_char3(35, 2, 29, 9, "���        ���         �ܿ���");
	square3(35, 2, 29, 11);
	// ��� �ð�
	// ���
	// �ܿ���
	if(month == p->data.month && month == p->data.day)
	
	square3(35, 2, 29, 13);
	square3(35, 2, 29, 15);
	square3(35, 2, 29, 17);
	square3(35, 2, 29, 19);
	square3(35, 2, 29, 21);
	square3(35, 2, 29, 23);
	square3(35, 2, 29, 25);
	square_char4(13, 2, 63, 7, "��");
	square_char3(13, 2, 63, 9, "���");
	square3(13, 2, 63, 11);
	//���
	square3(13, 2, 63, 13);
	square3(13, 2, 63, 15);
	square3(13, 2, 63, 17);
	square3(13, 2, 63, 19);
	square3(13, 2, 63, 21);
	square3(13, 2, 63, 23);
	square3(13, 2, 63, 25);
}