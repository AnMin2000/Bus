#pragma once
#include"header.h"

void addFirst(NODE* head, element data)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
    NODE *newNode = malloc(sizeof(NODE));    // �� ��� ����
    newNode->next = head->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
    newNode->data = &data;            // ������ ����

    head->next = newNode;    // ���� ����� ���� ��忡 �� ��带 ����
	// �� -> �� -> null
}