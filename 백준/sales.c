#pragma once
#include"header.h"
void salesUi()
{
	Mouse();
	square(85, 29, 12, 1);
	int cnt = 0;
	int num;
	
	int arrScore[12] = { 91,68,74,76,54,52,57,70,64,60,79,84 };
					//   1  7  5  4  11 12 10 6  8  9  3  2 								

	cnt = 12;

	//system("cls");
	int k = 0;
	//27,5
	goto_xy(21, 5);
	for (int i = 10; i > 0; i--) {
		printf("    ��");  //3d �ڸ��� ���߱� �ִ� 100�� ���ڸ��̹Ƿ� 3d
		//i�� 10���� ����, i�� 10�� ���Ͽ� ������ ǥ�� 
		for (int j = 0; j < cnt; j++) {
			num = arrScore[j] / 10;  //i�� ���� ���ϱ� ���� ������ 10���� ������
			if (num >= i) {  //������ 10���� ���� ���� i���� ũ�ų� ���� ��
				if (num == i) { printf("  ���� "); }  //������ ������ ǥ���ϴ� ���� ��ȣ ���
				else { printf("  ���� "); }  //0���� ������ ������ ���� ��ȣ ���
			}
			else {
				printf("     ");
			}
		}
		printf("\n");
		k++;
		goto_xy(21, 5 + k);
	}

	int m = 2;
	int n = 0;
	printf("    ����");  //0�� ǥ��
	for (int i = 0; i < cnt; i++) {
		if (arrScore[i] != 0) {  //0���� �ƴ� ������ �Էµ� �κп��� �������� ��ȣ�� ���
			goto_xy(21+3*m + 2*n, 5 + k);
			printf("�������� ");
			m++;
			n++;
		}
		else {
			printf("����������");  //0���� �Էµ� �κп��� ���������� ��ȣ�� ���
		}
	}
	for (int i = 0; i < 12; i++) {
		goto_xy(28 + 5 * i, 16);
		printf("%d��", i + 1);
	}
	//24,20
	char* arr[24] = {"1��","2��","3��","4��","5��","6��","3540����","2600����","2700����","2800����","2200����","2100����","7��","8��","9��","10��","11��","12��","2320����","2610����","2460����","2360����","2840����","3450����" };
	original_table(14, 2, 6, 4, 15, 19, arr);
	square_char(15, 2, 46, 3, "����");
	goto_xy(17, 14);
	printf("1000����");
	goto_xy(17, 11);
	printf("2000����");
	goto_xy(17, 8);
	printf("3000����");
	//printf("%d", m);
	ExClick();
	//printf("\n");
	//printf("      ");
	//for (int i = 0; i < cnt; i++) {
	//	printf(" %d�� ", i + 1);
	//}
	//printf("\n");

	//printf("==>   ");
	//for (int i = 0; i < cnt; i++) {
	////	printf(" %d��", arrScore[i]);
	//}
	//printf("\n");
	//free(arrScore);  //�޸� ���� 

	//return 0;
}