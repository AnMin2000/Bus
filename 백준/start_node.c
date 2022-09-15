#pragma once
#include"header.h"

void addFirst(Node* head, Element data)    // 기준 노드 뒤에 노드를 추가하는 함수
{
    Node *newNode = malloc(sizeof(Node));    // 새 노드 생성
    newNode->next = head->next;    // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
    newNode->data = data;            // 데이터 저장

    head->next = newNode;    // 기준 노드의 다음 노드에 새 노드를 지정
	// ㅁ -> ㅁ -> null
}