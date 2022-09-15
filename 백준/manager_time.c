#pragma once
#include"header.h"
void manager_time()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;

	
		/*square(85, 29, 12, 1);
		square_char(60, 2, 25, 2, "관리자 버스 배차 조정");
		square(36, 4, 37, 7);
		goto_xy(40, 8);
		printf("수정 할 날짜 입력(종료:0 0)");
		goto_xy(40, 10);
		printf("☞");*/
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &head->data.month);
		//printf("%d", p->data.month);
		addFirst(head, head->data);
	}

		Node* curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
		while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
		{
			printf("%d\n", curr->data.month);    // 현재 노드의 데이터 출력
			curr = curr->next;             // 포인터에 다음 노드의 주소 저장
		}
		/*square(36, 4, 37, 12);
		goto_xy(40, 13);
		printf("버스 들어오는 시간 입력");
		goto_xy(40, 15);
		printf("☞");

		square(36, 4, 37, 17);
		goto_xy(40, 18);
		printf("운행 버스 종류 입력");
		goto_xy(40, 20);
		printf("☞");

		square(36, 4, 37, 22);
		goto_xy(40, 23);
		printf("운행 버스 요금 입력");
		goto_xy(40, 25);
		printf("☞");
		goto_xy(0, 30);*/
	
}