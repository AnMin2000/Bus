#pragma once
#include"header.h"
char* Bus_read(char* filename)    // 파일을 읽어서 내용을 반환하는 함수
{
    FILE* fp = fopen(filename, "rb");
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
    // 파일 크기를 넘겨줌
    fclose(fp);    // 파일 포인터 닫기
    return buffer;
}
void Bus_append(Node* head)
{
    FILE* fp = fopen("Bus.txt", "a");
  
    fprintf(fp, "%d %d %s %s %d %d %s %d %d ", head->data.month, head->data.day, head->data.start_region, head->data.end_region,
        head->data.start_hour, head->data.start_min, head->data.grade,
        head->data.seat, head->data.money);

    fclose(fp);    // 파일 닫기
}
void Bus_write(Node* head)
{
    FILE* fp = fopen("Bus.txt", "wb");
    Node* curr = head->next;
    while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
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

    fclose(fp);    // 파일 닫기
}