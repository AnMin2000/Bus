#pragma once
#include"header.h"
void manager_time()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	
	while (1)
	{
		square(85, 29, 12, 1);
		square_char(60, 2, 25, 2, "������ ���� ���� ����");
		square(36, 4, 37, 5);
		goto_xy(40, 6);
		printf("���� �� ��¥ �Է�(����:0 0)");
		goto_xy(40, 8);
		printf("��");
		scanf("%d %d", &head->data.month, &head->data.day);
		if (head->data.month == 0 && head->data.day == 0) break;

		square(36, 4, 37, 10);
		goto_xy(40, 11);
		printf("���� ������ �ð� �Է�");
		goto_xy(40, 13);
		printf("��");
		scanf("%d %d", &head->data.start_hour, &head->data.start_min);

		square(36, 4, 37, 15);
		goto_xy(40, 16);
		printf("���� ���� ��� �Է�");
		goto_xy(40, 18);
		printf("��");
		scanf("%s", &head->data.grade);

		square(36, 4, 37, 20);
		goto_xy(40, 21);
		printf("���� �ܿ� �¼� �Է�");
		goto_xy(40, 23);
		printf("��");
		scanf("%d", &head->data.seat);
		
		square(36, 4, 37, 25);
		goto_xy(40, 26);
		printf("���� ���� ��� �Է�");
		goto_xy(40, 28);
		printf("��");
		scanf("%d", &head->data.money);

		addFirst(head, head->data);
		Bus_append(head);
	}

	//clearconsole();
	//Node* curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	//while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	//{
	//	printf("%s\n", curr->data.grade);    // ���� ����� ������ ���
	//	curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
	//}
}