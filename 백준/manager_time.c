#pragma once
#include"header.h"
void manager_time()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	
	while (1)
	{
		square(85, 29, 12, 1);
		square_char(60, 2, 25, 2, "관리자 버스 배차 조정");
		square(36, 4, 37, 5);
		goto_xy(40, 6);
		printf("수정 할 날짜 입력(종료:0 0)");
		goto_xy(40, 8);
		printf("☞");
		scanf("%d %d", &head->data.month, &head->data.day);
		if (head->data.month == 0 && head->data.day == 0) break;

		square(36, 4, 37, 10);
		goto_xy(40, 11);
		printf("버스 들어오는 시간 입력");
		goto_xy(40, 13);
		printf("☞");
		scanf("%d %d", &head->data.start_hour, &head->data.start_min);

		square(36, 4, 37, 15);
		goto_xy(40, 16);
		printf("운행 버스 등급 입력");
		goto_xy(40, 18);
		printf("☞");
		scanf("%s", &head->data.grade);

		square(36, 4, 37, 20);
		goto_xy(40, 21);
		printf("운행 잔여 좌석 입력");
		goto_xy(40, 23);
		printf("☞");
		scanf("%d", &head->data.seat);
		
		square(36, 4, 37, 25);
		goto_xy(40, 26);
		printf("운행 버스 요금 입력");
		goto_xy(40, 28);
		printf("☞");
		scanf("%d", &head->data.money);

		addFirst(head, head->data);
		Bus_append(head);
	}

	//clearconsole();
	//Node* curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	//while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
	//{
	//	printf("%s\n", curr->data.grade);    // 현재 노드의 데이터 출력
	//	curr = curr->next;             // 포인터에 다음 노드의 주소 저장
	//}
}