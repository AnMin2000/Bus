#pragma once
#include"header.h"
void salesUi()
{
	int cnt = 0;
	int* arrScore = 0;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf_s("%d", &cnt);

	arrScore = (int*)malloc(sizeof(int) * cnt);  //�޸� �����Ҵ� �ޱ�

	for (int i = 0; i < cnt; i++) {
		printf("%d�� �л� ���� �Է� : ", i + 1);
		scanf_s("%d", arrScore + i);
	}

	system("cls");

	for (int i = 0; i < cnt; i++) {
		printf("%d�� �л� ���� : %d��\n", i + 1, arrScore[i]);
	}

	for (int i = 10; i > 0; i--) {
		printf("%3d ��", i * 10);  //3d �ڸ��� ���߱� �ִ� 100�� ���ڸ��̹Ƿ� 3d
		//i�� 10���� ����, i�� 10�� ���Ͽ� ������ ǥ�� 
		for (int j = 0; j < cnt; j++) {
			int  num = arrScore[j] / 10;  //i�� ���� ���ϱ� ���� ������ 10���� ������
			if (num >= i) {  //������ 10���� ���� ���� i���� ũ�ų� ���� ��
				if (num == i) { printf("  ���� "); }  //������ ������ ǥ���ϴ� ���� ��ȣ ���
				else { printf("  ���� "); }  //0���� ������ ������ ���� ��ȣ ���
			}
			else {
				printf("     ");
			}
		}
		printf("\n");
	}

	printf("%3d ����", 0);  //0�� ǥ��
	for (int i = 0; i < cnt; i++) {
		if (arrScore[i] != 0) {  //0���� �ƴ� ������ �Էµ� �κп��� �������� ��ȣ�� ���
			printf("�������� ");
		}
		else {
			printf("����������");  //0���� �Էµ� �κп��� ���������� ��ȣ�� ���
		}
	}

	printf("\n");
	printf("      ");
	for (int i = 0; i < cnt; i++) {
		printf(" %d�� ", i + 1);
	}
	printf("\n");

	printf("==>   ");
	for (int i = 0; i < cnt; i++) {
		printf(" %d��", arrScore[i]);
	}
	printf("\n");
	free(arrScore);  //�޸� ���� 

	return 0;
}