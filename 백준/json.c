#pragma once
#include"header.h"
void parseJSON(char* doc, int size, JSON* json)    // JSON �Ľ� �Լ�
{
    int tokenIndex = 0;    // ��ū �ε���
    int pos = 0;           // ���� �˻� ��ġ�� �����ϴ� ����

    if (doc[pos] != '{')   // ������ ������ {���� �˻�
        return;

    pos++;    // ���� ���ڷ�

    while (pos < size)       // ���� ũ�⸸ŭ �ݺ�
    {
        switch (doc[pos])    // ������ ������ ���� �б�
        {
        case '"':            // ���ڰ� "�̸� ���ڿ�
        {
            // ���ڿ��� ���� ��ġ�� ����. �� ���� "�� �����ϱ� ���� + 1
            char* begin = doc + pos + 1;

            // ���ڿ��� �� ��ġ�� ����. ���� "�� ��ġ
            char* end = strchr(begin, '"');
            if (end == NULL)    // "�� ������ �߸��� �����̹Ƿ� 
                break;          // �ݺ��� ����

            int stringLength = end - begin;    // ���ڿ��� ���� ���̴� �� ��ġ - ���� ��ġ

            // ��ū �迭�� ���ڿ� ����
            // ��ū ������ ���ڿ�
            json->tokens[tokenIndex].type = TOKEN_STRING;
            // ���ڿ� ���� + NULL ������ŭ �޸� �Ҵ�
            json->tokens[tokenIndex].string = malloc(stringLength + 1);
            // �Ҵ��� �޸𸮸� 0���� �ʱ�ȭ
            memset(json->tokens[tokenIndex].string, 0, stringLength + 1);

            // �������� ���ڿ��� ��ū�� ����
            // ���ڿ� ���� ��ġ���� ���ڿ� ���̸�ŭ�� ����
            memcpy(json->tokens[tokenIndex].string, begin, stringLength);

            tokenIndex++; // ��ū �ε��� ����

            pos = pos + stringLength + 1;    // ���� ��ġ + ���ڿ� ���� + "(+ 1)
        }
        break;
        }

        pos++; // ���� ���ڷ�
    }
}
void freeJSON(JSON* json)    // JSON ���� �Լ�
{
    for (int i = 0; i < TOKEN_COUNT; i++)            // ��ū ������ŭ �ݺ�
    {
        if (json->tokens[i].type == TOKEN_STRING)    // ��ū ������ ���ڿ��̸�
            free(json->tokens[i].string);            // ���� �޸� ����
    }
}
void json_print()
{
    int size; // ���� ũ��
    char* doc = Bus_read("Bus.json", &size);    // ���Ͽ��� JSON ������ ����, ���� ũ�⸦ ����
    if (doc == NULL)
        return -1;

    JSON json = { 0, };             // JSON ����ü ���� ���� �� �ʱ�ȭ

    parseJSON(doc, size, &json);    // JSON ���� �Ľ�

    printf("Month: %s\n", json.tokens[1].string);
    printf("Day: %s\n", json.tokens[3].string);
    printf("StartHour: %s\n", json.tokens[5].string);

    freeJSON(&json);    // json�� �Ҵ�� ���� �޸� ����

    free(doc);    // ���� ���� �޸� ����

    return 0;
}