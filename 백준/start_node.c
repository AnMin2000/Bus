#pragma once
#include"header.h"

void addFirst(Node* head, Element data)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
    Node *newNode = malloc(sizeof(Node));    // �� ��� ����
    newNode->next = head->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
    newNode->data = data;            // ������ ����

    head->next = newNode;    // ���� ����� ���� ��忡 �� ��带 ����
	// �� -> �� -> null
}