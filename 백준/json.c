#pragma once
#include"header.h"
void parseJSON(char* doc, int size, JSON* json)    // JSON 파싱 함수
{
    int tokenIndex = 0;    // 토큰 인덱스
    int pos = 0;           // 문자 검색 위치를 저장하는 변수

    //if (doc[pos] != '{')   // 문서의 시작이 {인지 검사
    //    return;

    pos++;    // 다음 문자로

    while (pos < size)       // 문서 크기만큼 반복
    {
        switch (doc[pos])    // 문자의 종류에 따라 분기
        {
        case '"':            // 문자가 "이면 문자열
        {
            // 문자열의 시작 위치를 구함. 맨 앞의 "를 제외하기 위해 + 1
            char* begin = doc + pos + 1;

            // 문자열의 끝 위치를 구함. 다음 "의 위치
            char* end = strchr(begin, '"');
            if (end == NULL)    // "가 없으면 잘못된 문법이므로 
                break;          // 반복을 종료

            int stringLength = end - begin;    // 문자열의 실제 길이는 끝 위치 - 시작 위치

            // 토큰 배열에 문자열 저장
            // 토큰 종류는 문자열
            json->tokens[tokenIndex].type = TOKEN_STRING;
            // 문자열 길이 + NULL 공간만큼 메모리 할당
            json->tokens[tokenIndex].string = malloc(stringLength + 1);
            // 할당한 메모리를 0으로 초기화
            memset(json->tokens[tokenIndex].string, 0, stringLength + 1);

            // 문서에서 문자열을 토큰에 저장
            // 문자열 시작 위치에서 문자열 길이만큼만 복사
            memcpy(json->tokens[tokenIndex].string, begin, stringLength);

            tokenIndex++; // 토큰 인덱스 증가

            pos = pos + stringLength + 1;    // 현재 위치 + 문자열 길이 + "(+ 1)
        }
        break;
        }

        pos++; // 다음 문자로
    }
}
void freeJSON(JSON* json)    // JSON 해제 함수
{
    for (int i = 0; i < TOKEN_COUNT; i++)            // 토큰 개수만큼 반복
    {
        if (json->tokens[i].type == TOKEN_STRING)    // 토큰 종류가 문자열이면
            free(json->tokens[i].string);            // 동적 메모리 해제
    }
}
//void json_print()
//{
//    int size; // 문서 크기
//    char* doc = Bus_read("Bus.txt", &size);    // 파일에서 JSON 문서를 읽음, 문서 크기를 구함
//    if (doc == NULL)
//        return -1;
//
//    JSON json = { 0, };             // JSON 구조체 변수 선언 및 초기화
//
//    parseJSON(doc, size, &json);    // JSON 문서 파싱
//
//    printf("Month: %s\n", json.tokens[0].string);
//    printf("Day: %s\n", json.tokens[3].string);
//    printf("StartHour: %s\n", json.tokens[5].string);
//
//    freeJSON(&json);    // json에 할당된 동적 메모리 해제
//
//    free(doc);    // 문서 동적 메모리 해제
//
//    return 0;
//}