#pragma once
#include"header.h"
void MainUi()
{
	while (1)
	{
		int tmp = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // ���� ��
		goto_xy(43, 13);
		printf("�⺻ ���� ��ȸ��...");
		countTime(1);

		square(17, 4, 78, 2);
		Mouse(); // ���콺 Ŭ�� �����ϰ� �ϴ� �Լ�
		square(85, 29, 12, 1); //������ ���κ��� ©�� (���� ��������)
		square_char(45, 2, 30, 2, "���� ���� ���α׷�"); // [û�֡꼭��] ������ ���� ��(���� ��������)
		if (num > 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // ���
			square_char(45, 2, 30, 5, loginEmail);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		}
		square_char(25, 2, 40, 9, "����");
		square_char(25, 2, 40, 12, "����");
		square_char(25, 2, 40, 15, "���");
		square_char(25, 2, 40, 18, "���� ���� ��ȸ");
		square_char(25, 2, 40, 21, "����� ���� ����");
		square_char(13, 2, 23, 26, "�α���");
		square_char(13, 2, 46, 26, "ȸ������");
		square_char(13, 2, 69, 26, "pwã��");

		//ExClick();

		tmp = mainUiClick();
		if (tmp >= 1 && tmp <= 5 && check == 0)
		{
			square(85, 29, 12, 1);
			goto_xy(40, 15);
			printf("�α����� ���� ���ּ���");
			countTime(0.5);
			continue;
		}
		if (tmp == 1) {
			reserveUi();// ���� ui
		}
		else if (tmp == 2) {
			changeUi();//����
		}
		else if (tmp == 3) {
			cancleUi();//���
		}
		else if (tmp == 4) {
			inquiryUi();//���� ���� ��ȸ
		}
		else if (tmp == 5) {
			modifyUi();// ����� ���� ����
		}
		else if (tmp == 6) {
			LoginUi();//�α���
		}
		else if (tmp == 7) {
			SignUpUi();//ȸ������
		}
		else if (tmp == 8) {
			searchUi();//pwã��
		}
		/*mainUiClick1(64, 75, 7, 9);
				calender(); // �޷� ui*/
	}
}