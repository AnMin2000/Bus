#pragma once
#include"header.h"
char* Bus_read(char* filename)    // ������ �о ������ ��ȯ�ϴ� �Լ�
{
    FILE* fp = fopen(filename, "rb");
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
    // ���� ũ�⸦ �Ѱ���
    fclose(fp);    // ���� ������ �ݱ�
    return buffer;
}
void Bus_append(Node* head)
{
    FILE* fp = fopen("Bus.txt", "a");
  
    fprintf(fp, "%d %d %s %s %d %d %s %d %d ", head->data.month, head->data.day, head->data.start_region, head->data.end_region,
        head->data.start_hour, head->data.start_min, head->data.grade,
        head->data.seat, head->data.money);

    fclose(fp);    // ���� �ݱ�
}
void Bus_write(Node* head)
{
    FILE* fp = fopen("Bus.txt", "wb");
    Node* curr = head->next;
    while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
    {
        fprintf(fp, "{\n");
        fprintf(fp, "  \"Month\": %d,\n", curr->data.month);
        fprintf(fp, "  \"Day\": %d,\n", curr->data.day);
        fprintf(fp, "  \"StartRegion\": %s,\n", curr->data.start_region);
        fprintf(fp, "  \"EndRegion\": %s,\n", curr->data.end_region);
        fprintf(fp, "  \"StartHour\": %d,\n", curr->data.start_hour);
        fprintf(fp, "  \"EndHour\": %d,\n", curr->data.start_min);
        fprintf(fp, "  \"Grade\": \"%s\",\n", curr->data.grade);
        fprintf(fp, "  \"Money\": %d\n", curr->data.money);
        fprintf(fp, "}\n");
        curr = curr->next;
    }

    fclose(fp);    // ���� �ݱ�
}