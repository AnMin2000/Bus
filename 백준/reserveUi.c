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
	// if(i>=8 && i%8 == 0 )
	square(85, 29, 12, 1);
	square_char(70, 2, 19, 2, "�ؿ����");
	square(35, 2, 29, 7);
	goto_xy(41, 8);
	printf("%d. %d. %d", year, month, reserve_day);

	
	
	square_char3(35, 2, 29, 9, "���        ���         �ܿ���");


	int j = 0;
	while (1)
	{
		if ((strcmp(ticket[ticket_count - 1].month, tmp[j * 9]) == 0) && (strcmp(ticket[ticket_count - 1].day, tmp[(j * 9) + 1]) == 0) &&
			(strcmp(ticket[ticket_count - 1].start_region, tmp[(j * 9) + 2]) == 0) &&( strcmp(ticket[ticket_count - 1].end_region, tmp[(j * 9) + 3]) == 0))
		{
			for (int i = 0; i < 7; i++)
			{
				square3(35, 2, 29, 11 + i * 2);
				goto_xy(31, 12 + i * 2);
				printf("%s:%s        %s           %s", tmp[(j * 9 + 4) + (i * 9)], tmp[(j * 9 + 5) + (i * 9)], tmp[(j * 9 + 6) + (i*9)], tmp[(j * 9 + 7) + (i * 9)]);
																//�ð�						//��						//���					//�ݾ�
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


	strcpy(ticket[ticket_count - 1].hour, tmp[(j * 9 + 4) + (i * 9)]);
	strcpy(ticket[ticket_count - 1].min, tmp[(j * 9 + 5) + (i * 9)]);
	strcpy(ticket[ticket_count - 1].grade, tmp[(j * 9 + 6) + (i * 9)]);
	strcpy(ticket[ticket_count - 1].money, tmp[(j * 9 + 8) + (i * 9)]);

	char* msg[14] = { "1","2","5","6","9","10","13","14","17","18","21","22","25","26" };
	char* msg2[14] = { "3","4","7","8","11","12","15","16","19","20","23","24","27","28" };
	square(85, 29, 12, 1);
	square_char(40, 2, 32, 5, "ž�� �� �¼��� ���� ������ �ּ���");
	square_char(23, 2, 40, 8, "������       ���Թ�");
	original_table(5, 2, 2, 7, 40, 10, msg);
	original_table(5, 2, 2, 7, 54, 10, msg2);
	goto_xy(40, 10); printf("��"); goto_xy(62, 10); printf("��"); goto_xy(49, 24); printf("������������");
	
	int seat_click_tmp; //����¼��� Ŭ���޴��� ������ ��
	seat_click_tmp = seat_click();
	ticket[ticket_count - 1].seat = seat_click_tmp;
	
	Ticket_append(ticket[ticket_count - 1]); // << �̰� ��� ������ �Ѱ������ ***************�߿�***********************
	ticket_count++;

	square(85, 29, 12, 1);
	square(40, 2, 33, 8);
	goto_xy(46, 9);
	printf("�����ݾ� %s��", ticket[ticket_count - 2].money);
	square_char(30, 2, 38, 12, "�����Ͻðڽ��ϱ�?");
	square_char(7, 2, 42, 16, "��");
	square_char(11, 2, 52, 16, "�ƴϿ�");
	MouseClick(43, 48, 16, 18);
	square(85, 29, 12, 1);
	square_char(30, 2, 38, 12, "�����Ϸ�Ǿ����ϴ�...");
	countTime(1);
	//����� �� ���� ���� �κ� �����ؾ���.
	//goto_xy(0, 30);
	//ExClick();
	
}