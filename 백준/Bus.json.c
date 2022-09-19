#pragma once
#include"header.h"
char* Bus_read()    // ������ �о ������ ��ȯ�ϴ� �Լ�
{
    FILE* fp = fopen("Bus.json", "rb");
    if (fp == NULL)
        return NULL;

    int size;
    char* buffer;

    // ���� ũ�� ���ϱ�
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // ���� ũ�� + NULL ������ŭ �޸𸮸� �Ҵ��ϰ� 0���� �ʱ�ȭ
    buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);

    // ���� ���� �б�
    if (fread(buffer, size, 1, fp) < 1)
    {
        free(buffer);
        fclose(fp);
        return NULL;
    }

    fclose(fp);    // ���� ������ �ݱ�

    return buffer;
}
void Bus_append(Node* head)
{
    FILE* fp = fopen("Bus.json", "ab");

    // JSON ������ ���缭 fprintf �Լ��� �� ���
    fprintf(fp, "{\n");
    fprintf(fp, "  \"Month\": %d,\n", head->data.month);
    fprintf(fp, "  \"Day\": %d,\n", head->data.day);
    fprintf(fp, "  \"StartHour\": %d,\n", head->data.start_hour);
    fprintf(fp, "  \"StartMinute\": %d,\n", head->data.start_min);
    fprintf(fp, "  \"Grade\": \"%s\",\n", head->data.grade);
    fprintf(fp, "  \"Money\": %d\n", head->data.money);
    fprintf(fp, "}\n");

    fclose(fp);    // ���� �ݱ�
}
void Bus_write(Node* head)
{
    FILE* fp = fopen("Bus.json", "wb");
    Node* curr = head->next;
    while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
    {
        fprintf(fp, "{\n");
        fprintf(fp, "  \"Month\": %d,\n", curr->data.month);
        fprintf(fp, "  \"Day\": %d,\n", curr->data.day);
        fprintf(fp, "  \"StartHour\": %d,\n", curr->data.start_hour);
        fprintf(fp, "  \"StartMinute\": %d,\n", curr->data.start_min);
        fprintf(fp, "  \"Grade\": \"%s\",\n", curr->data.grade);
        fprintf(fp, "  \"Money\": %d\n", curr->data.money);
        fprintf(fp, "}\n");
        curr = curr->next;
    }

    fclose(fp);    // ���� �ݱ�
}