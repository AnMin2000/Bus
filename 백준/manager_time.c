#pragma once
#include"header.h"
void manager_time()
{
	NODE* head = malloc(sizeof(NODE));    // �Ӹ� ��� ����
														// �Ӹ� ���� �����͸� �������� ����
	head->next = NULL;

	NODE* p = malloc(sizeof(NODE));
	//element e = { 0 };
	/*square(85, 29, 12, 1);
	square_char(60, 2, 25, 2, "������ ���� ���� ����");
	square(36, 4, 37, 7);
	goto_xy(40, 8);
	printf("���� �� ��¥ �Է�(����:0 0)");
	goto_xy(40, 10);
	printf("��");*/
	scanf("%d %d", &p->data->month, &p->data->day);
	printf("%d %d", p->data->month, p->data->day);
	data++;



	square(36, 4, 37, 12);
	goto_xy(40, 13);
	printf("���� ������ �ð� �Է�");
	goto_xy(40, 15);
	printf("��");
	//scanf("%d %d%*c", &e.start_hour, &e.start_min);
	square(36, 4, 37, 17);
	goto_xy(40, 18);
	printf("���� ���� ���� �Է�");
	goto_xy(40, 20);
	printf("��");
	//scanf("%s%*c", &e.grade[0]);
	square(36, 4, 37, 22);
	goto_xy(40, 23);
	printf("���� ���� ��� �Է�");
	goto_xy(40, 25);
	printf("��");
	goto_xy(0, 30);
	//scanf("%d%*c", &e.money);
	//addFirst(head, e);

	//ExClick();
	//addFirst(head, 10);    // �Ӹ� ��� �ڿ� �� ��� �߰�
	//addFirst(head, 20);    // �Ӹ� ��� �ڿ� �� ��� �߰�
	//addFirst(head, 30);    // �Ӹ� ��� �ڿ� �� ��� �߰�

	//NODE* curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	//while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	//{
	//	printf("%d\n", curr->data);    // ���� ����� ������ ���
	//	curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
	//}

	//curr = head->next;      // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	//while (curr != NULL)    // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	//{
	//	struct NODE* next = curr->next;    // ���� ����� ���� ��� �ּҸ� �ӽ÷� ����
	//	free(curr);                        // ���� ��� �޸� ����
	//	curr = next;                       // �����Ϳ� ���� ����� �ּ� ����
	//}

	//free(head);    // �Ӹ� ��� �޸� ����

	//return 0;




}