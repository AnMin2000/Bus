#pragma once
#include"header.h"
void manager_time()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	int count = 0;
	while (1)
	{
		square(85, 29, 12, 1);
		square_char(60, 2, 25, 2, "������ ���� ���� ����");
		square(36, 4, 37, 7);
		goto_xy(40, 8);
		printf("���� �� ��¥ �Է�(����:0 0)");
		goto_xy(40, 10);
		printf("��");
		scanf("%d %d", &head->data.month, &head->data.day);
		if (head->data.month == 0 && head->data.day == 0) break;

		square(36, 4, 37, 12);
		goto_xy(40, 13);
		printf("���� ������ �ð� �Է�");
		goto_xy(40, 15);
		printf("��");
		scanf("%d %d", &head->data.start_hour, &head->data.start_min);

		square(36, 4, 37, 17);
		goto_xy(40, 18);
		printf("���� ���� ��� �Է�");
		goto_xy(40, 20);
		printf("��");
		scanf("%s", &head->data.grade);

		
		
		square(36, 4, 37, 22);
		goto_xy(40, 23);
		printf("���� ���� ��� �Է�");
		goto_xy(40, 25);
		printf("��");
		scanf("%d", &head->data.money);

		addFirst(head, head->data);
		if (count > 0) json_write(head);
		else  json_append(head);
		count++;
	}

	//clearconsole();
	//Node* curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	//while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	//{
	//	printf("%s\n", curr->data.grade);    // ���� ����� ������ ���
	//	curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
	//}
}
