#pragma once
#include"header.h"

void reserveUi() {
	Mouse();
	time_t seconds = time(NULL);
	struct tm* now = localtime(&seconds);
	Node* p = malloc(sizeof(Node));

	char* doc = Bus_read("Bus.txt");
	char* tmp[1000] = { 0 };

	char* char_month[12] = { "1","2","3","4","5","6","7","8","9","10","11","12" };
	char* char_day[31] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31" };
	char* char_month_tmp[1] = { 0 };
	char* char_day_tmp[1] = { 0 };
	char* char_region[5] = { "����","��õ","�뱸","���","�λ�" };
		//���� 1�� ��õ 2�� �뱸 3�� ��� 4�� �λ� 5��
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
	
	tmp[0] = strtok(doc, " ");
	int i = 0;
	while (tmp[i] != NULL)
	{
		//printf("%s\n", tmp[i++]);
		i++;
		tmp[i] = strtok(NULL, " ");
	}
	square(85, 29, 12, 1);
	square_char(70, 2, 19, 2, "�ؿ����");
	square(35, 2, 29, 7);
	goto_xy(41, 8);
	printf("%d. %d. %d", year, month, reserve_day);

	int j = 0;
	
	square_char3(35, 2, 29, 9, "���        ���         �ܿ���");

//	clearconsole();
////	printf("%s %s %s %s", ticket[ticket_count - 2].month, tmp[j * 9], ticket[ticket_count - 2].day, tmp[(j * 9) + 1]);
//	printf("%s %s", tmp[j * 9], tmp[(j * 9) + 1]);
//	ExClick();
	//printf("%d", ticket_tmp1);
	//printf("%d",ticket_count-2); // �Ѵ� ���簪

	while (1)
	{
		if ((strcmp(ticket[ticket_count - 2].month, tmp[j * 9]) == 0) && (strcmp(ticket[ticket_count - 2].day, tmp[(j * 9) + 1]) == 0) &&
			(strcmp(ticket[ticket_count - 2].start_region, tmp[(j * 9) + 2]) == 0) &&( strcmp(ticket[ticket_count - 2].end_region, tmp[(j * 9) + 3]) == 0))
		{
			for (int i = 0; i < 7; i++)
			{
				square3(35, 2, 29, 11 + i * 2);
				goto_xy(31, 12 + i * 2);
				printf("%s:%s        %s           %s", tmp[(j * 9 + 4) + (i * 9)], tmp[(j * 9 + 5) + (i * 9)], tmp[(j * 9 + 6) + (i*9)], tmp[(j * 9 + 7) + (i * 9)]);
			}
			break;
		}
		j++;
	}
	// ��� �ð�
	// ���
	// �ܿ���

	square_char4(13, 2, 63, 7, "��");
	square_char3(13, 2, 63, 9, "���");
	//���
	for (int i = 0; i < 7; i++) {
		square3(13, 2, 63, 11 + i * 2);
		goto_xy(68, 12 + i * 2);
		printf("%s", tmp[(j * 9 + 8) + (i * 9)]);
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
	//����� �� ���� ���� �κ� �����ؾ���.
	//goto_xy(0, 30);
	//ExClick();
}