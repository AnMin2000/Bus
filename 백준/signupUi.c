#pragma once
#include"header.h"
void SignUpUi()
{
	square(85, 29, 12, 1); //������ ���κ��� ©�� (���� ��������)
	square(81, 18, 14, 6);
	square_char(70, 2, 18, 8, "ȸ������");
	goto_xy(19, 12);
	printf("����Ͻ� �̸��� �ּҸ� �Է��� �ּ���");
	goto_xy(19, 13);
	printf("��");
	scanf("%s%*c", &member[count-1].email);
	goto_xy(19, 15);
	printf("����Ͻ� ��й�ȣ�� �Է��� �ּ���");
	goto_xy(19, 16);
	printf("��");
	scanf("%s%*c", &member[count-1].pw);

	goto_xy(19, 18);
	printf("����Ͻ� ��ȭ��ȣ�� �Է��� �ּ���");
	goto_xy(19, 19);
	printf("��");
	scanf("%s%*c", &member[count-1].number);

	strcpy(member[count - 1].start_region, "0");
	strcpy(member[count - 1].end_region, "0");
	member[count - 1].month = 0;
	member[count - 1].day = 0;

	Member_append(member[count-1]);
	count++;
	Mouse();

	square_char(14, 2, 19, 21, "ȸ������");
	MouseClick(20, 32, 21, 23);


	square(85, 29, 12, 1);
	square(60, 7, 25, 11);
	square_char(19, 2, 46, 13, "ȯ���մϴ�");

	countTime(2);
	MainUi();
}