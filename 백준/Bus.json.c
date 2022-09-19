#pragma once
#include"header.h"
char* Bus_read()    // 파일을 읽어서 내용을 반환하는 함수
{
    FILE* fp = fopen("Bus.json", "rb");
    if (fp == NULL)
        return NULL;

    int size;
    char* buffer;

    // 파일 크기 구하기
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // 파일 크기 + NULL 공간만큼 메모리를 할당하고 0으로 초기화
    buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);

    // 파일 내용 읽기
    if (fread(buffer, size, 1, fp) < 1)
    {
        free(buffer);
        fclose(fp);
        return NULL;
    }

    fclose(fp);    // 파일 포인터 닫기

    return buffer;
}
void Bus_append(Node* head)
{
    FILE* fp = fopen("Bus.json", "ab");

    // JSON 문법에 맞춰서 fprintf 함수로 값 출력
    fprintf(fp, "{\n");
    fprintf(fp, "  \"Month\": %d,\n", head->data.month);
    fprintf(fp, "  \"Day\": %d,\n", head->data.day);
    fprintf(fp, "  \"StartHour\": %d,\n", head->data.start_hour);
    fprintf(fp, "  \"StartMinute\": %d,\n", head->data.start_min);
    fprintf(fp, "  \"Grade\": \"%s\",\n", head->data.grade);
    fprintf(fp, "  \"Money\": %d\n", head->data.money);
    fprintf(fp, "}\n");

    fclose(fp);    // 파일 닫기
}
void Bus_write(Node* head)
{
    FILE* fp = fopen("Bus.json", "wb");
    Node* curr = head->next;
    while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
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

    fclose(fp);    // 파일 닫기
}