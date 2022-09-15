#pragma once
#include"header.h"
void manager_time()
{
	NODE* head = malloc(sizeof(NODE));    // 머리 노드 생성
														// 머리 노드는 데이터를 저장하지 않음
	head->next = NULL;

	NODE* p = malloc(sizeof(NODE));
	//element e = { 0 };
	/*square(85, 29, 12, 1);
	square_char(60, 2, 25, 2, "관리자 버스 배차 조정");
	square(36, 4, 37, 7);
	goto_xy(40, 8);
	printf("수정 할 날짜 입력(종료:0 0)");
	goto_xy(40, 10);
	printf("☞");*/
	scanf("%d %d", &p->data->month, &p->data->day);
	printf("%d %d", p->data->month, p->data->day);
	data++;



	square(36, 4, 37, 12);
	goto_xy(40, 13);
	printf("버스 들어오는 시간 입력");
	goto_xy(40, 15);
	printf("☞");
	//scanf("%d %d%*c", &e.start_hour, &e.start_min);
	square(36, 4, 37, 17);
	goto_xy(40, 18);
	printf("운행 버스 종류 입력");
	goto_xy(40, 20);
	printf("☞");
	//scanf("%s%*c", &e.grade[0]);
	square(36, 4, 37, 22);
	goto_xy(40, 23);
	printf("운행 버스 요금 입력");
	goto_xy(40, 25);
	printf("☞");
	goto_xy(0, 30);
	//scanf("%d%*c", &e.money);
	//addFirst(head, e);

	//ExClick();
	//addFirst(head, 10);    // 머리 노드 뒤에 새 노드 추가
	//addFirst(head, 20);    // 머리 노드 뒤에 새 노드 추가
	//addFirst(head, 30);    // 머리 노드 뒤에 새 노드 추가

	//NODE* curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	//while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
	//{
	//	printf("%d\n", curr->data);    // 현재 노드의 데이터 출력
	//	curr = curr->next;             // 포인터에 다음 노드의 주소 저장
	//}

	//curr = head->next;      // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	//while (curr != NULL)    // 포인터가 NULL이 아닐 때 계속 반복
	//{
	//	struct NODE* next = curr->next;    // 현재 노드의 다음 노드 주소를 임시로 저장
	//	free(curr);                        // 현재 노드 메모리 해제
	//	curr = next;                       // 포인터에 다음 노드의 주소 저장
	//}

	//free(head);    // 머리 노드 메모리 해제

	//return 0;




}