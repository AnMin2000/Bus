#pragma once
#include"header.h"
void searchUi()
{
	char search_id[50];
	char search_num[50];
	int i;

	while (1) {
		square(85, 29, 12, 1); //������ ���κ��� ©�� (���� ��������)
		square(81, 18, 14, 6);
		square_char(70, 2, 18, 8, "PW ã��");
		goto_xy(19, 12);
		printf("�̸��� �ּҸ� �Է��� �ּ���");
		goto_xy(19, 13);
		printf("��");
		scanf("%s%*c", &search_id);
		goto_xy(19, 15);
		printf("��ȭ��ȣ�� �Է����ּ���");
		goto_xy(19, 16);
		printf("��");
		scanf("%s%*c", &search_num);

		for (i = 0; i < count; i++) {
			if (strcmp(search_id, member[i].email) == 0 && strcmp(search_num, member[i].number) == 0)
				goto A;
			
		}
	}
	A:
	square_char(13, 2, 19, 18, "PWã��");
	MouseClick(20, 32, 18, 20);

	square(85, 29, 12, 1);
	square(60, 7, 25, 11);
	square(48, 2, 32, 13);
	goto_xy(40, 14);
	printf("������ ��й�ȣ�� : %s�Դϴ�.", member[i].pw);
	goto_xy(0, 30);

	countTime(1);

	
}