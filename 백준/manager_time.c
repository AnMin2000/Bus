#pragma once
#include"header.h"
void manager_time()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;

	
		/*square(85, 29, 12, 1);
		square_char(60, 2, 25, 2, "������ ���� ���� ����");
		square(36, 4, 37, 7);
		goto_xy(40, 8);
		printf("���� �� ��¥ �Է�(����:0 0)");
		goto_xy(40, 10);
		printf("��");*/
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &head->data.month);
		//printf("%d", p->data.month);
		addFirst(head, head->data);
	}

		Node* curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
		while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
		{
			printf("%d\n", curr->data.month);    // ���� ����� ������ ���
			curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
		}
		/*square(36, 4, 37, 12);
		goto_xy(40, 13);
		printf("���� ������ �ð� �Է�");
		goto_xy(40, 15);
		printf("��");

		square(36, 4, 37, 17);
		goto_xy(40, 18);
		printf("���� ���� ���� �Է�");
		goto_xy(40, 20);
		printf("��");

		square(36, 4, 37, 22);
		goto_xy(40, 23);
		printf("���� ���� ��� �Է�");
		goto_xy(40, 25);
		printf("��");
		goto_xy(0, 30);*/
	
}