#pragma once
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#define MAX 1000
#define TOKEN_COUNT 1000    // ��ū�� �ִ� ����
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>

typedef enum TOKEN_TYPE {
    TOKEN_STRING,    // ���ڿ� ��ū
    TOKEN_NUMBER,    // ���� ��ū
} TOKEN_TYPE;

// ��ū ����ü
typedef struct _TOKEN {
    TOKEN_TYPE type;    // ��ū ����
    union {             // �� ���� �� �� ������ ������ ���̹Ƿ� ����ü�� ����
        char* string;       // ���ڿ� ������
        double number;      // �Ǽ��� ����
    };
    bool isArray;       // ���� ��ū�� �迭���� ǥ��
} TOKEN;

// JSON ����ü
typedef struct _JSON {
    TOKEN tokens[TOKEN_COUNT];    // ��ū �迭
} JSON;
struct {

    int tm_sec;   //��
    int tm_min;   //��
    int tm_hour;  //��
    int tm_mday;  //��
    int tm_mon;   //�� [0~11]
    int tm_year;  //�� [����ð� ǥ�ý� +1900 �ʿ�]
    int tm_wday;  //���� [0-�Ͽ���, 1-������, ... ,6-�����] 
    int tm_yday;  //�̹����� ���° ������
    int tm_isdst;

}tm;

typedef struct {
	char email[50];
	char pw[20];
	char number[15];
    char start_region[10]; //�������
    char end_region[10];   //��������
    char grade[10];        //�������
    int month;             //����  ��
    int day;               //����  ��
    int hour;              //��߽ð�
    int min;               //���  ��
    int seat;              //�ܿ��¼�
    int money;             //�������
}Book;

typedef struct {
    char email[50];
    char pw[20];
}Manager;

typedef struct {
    char grade[5];        // ���
    int month;
    int day;
    int start_hour;       // ���۽ð�
    int start_min;        // ���� ��
    int money;
    int seat;             // �¼�
}Element;

typedef struct{    // ���� ����Ʈ�� ��� ����ü
    struct Node* next;    // ���� ����� �ּҸ� ������ ������
    Element data;
}Node;

Book member[MAX];
Book ticket[MAX];

Manager manager[MAX];
void MainUi();
void reserveUi();
void changeUi();
void cancleUi();
void modifyUi();
void inquiryUi();
void LoginUi();
void SignUpUi();
void searchUi();
int calender();             //         calenderUi       calender_ui
void reserve_start_areaUi();
void reserve_end_areaUi();
// UI�Լ�
void table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100]);// ���� ����, ���� ����, ���� ũ��, ���� ũ��, x ��ǥ, y ��ǥ, (����?)
void original_table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100]);// ���� ����, ���� ����, ���� ũ��, ���� ũ��, x ��ǥ, y ��ǥ, (����?)
void square(int width, int height, int x, int y);
void square3(int width, int height, int x, int y);
void square_char(int width, int height, int x, int y, char* msg);
void square_char_red(int width, int height, int x, int y, char* msg);
void square_char_blue(int width, int height, int x, int y, char* msg);
void square_char1(int width, int height, int x, int y, char* msg);
void square_char2(int width, int height, int x, int y, char* msg);
void square_char3(int width, int height, int x, int y, char* msg);
void square_char3_gray(int width, int height, int x, int y, char* msg);
void square_char3_blue(int width, int height, int x, int y, char* msg);
void square_char3_red(int width, int height, int x, int y, char* msg);
void square_char4(int width, int height, int x, int y, char* msg);
// ���̺� �Լ�
void goto_xy(int x, int y);
void click(int *xx, int *yy);
void clearconsole();
void Mouse();
void ExClick();
int mainUiClick(); // ���� ui ���� Ŭ�� ��ũ��
void MouseClick(int x1, int x2, int y1, int y2); // ��� ���콺 Ŭ�� ��ũ��
int loginUiClick();
int calenderUiClick();
int reserve_start_click();
int reserve_end_click();
int bustime_click();
// ���콺 ��ǥ �Լ�
//void reset();
void countTime(int a);
int Time(); // ���� �ð� �ҷ�����
int isyoon(int a); // �޷� ���� ���ϱ�
void manager_time();
void addFirst(Node* head, Element data); // ù��° �Լ�
//��� �Լ�
void Member_read();
void Member_append(Book member);
void Member_write();
void Manager_read();
void Manager_append(Manager manager);
void Manager_write();
void Ticket_read();
void Ticket_append(Book T);
void Ticket_write();
char* Bus_read(char* filename);    // ������ �о ������ ��ȯ�ϴ� �Լ�
void Bus_append(Node* head);
void Bus_write(Node* head);
void parseJSON(char* doc, int size, JSON* json);
void freeJSON(JSON* json);    // JSON ���� �Լ�
void json_print(); // ���̼� ����� �ִ� �Լ�
// �ؽ�Ʈ �Լ�
int table_count;
int count; // ��� ���� ����
int managerCount; // �Ŵ��� ���� ����
int start; // ���� ��� ���� ����                                     ���� 1�� ��õ 2�� �뱸 3�� ��� 4�� �λ� 5��
int  end; // ���� ���� ���� ����                                      ���� 1�� ��õ 2�� �뱸 3�� ��� 4�� �λ� 5��
int num; // ����� id ������ֱ� ���� ����                              
char loginEmail[50]; // ���� ui���� ����� id�� �Է��� �ֱ� ���� �Լ�
int p; // Ķ���� ���� ��¥ ������ ���� ����
int day_count; // Ķ���� �� ���ڸ� �ޱ����� ����
int year; // ���� �⵵�� �������� �޴� ����(�߿�)
int reserve_day; // ���� ��¥�� �������� �޴� ����(�߿�)
int month; // ��������� �Է� �޾Ƽ� ����� �����ϱ� ���� ���� (�߿�)
int today; // �ٸ� ���� 1�Ϸ� �־������ ���� ��
int check; // �α��� �ߴ��� ���ߴ��� üũ  1�̸� �α���
int ticket_id_count; // Ƽ�� ���° id���� ���� ����
int blank_count; // ���� �޷� ������ ������ ����ؼ� ȸ������ �ٲ��ֱ� ���� �ڵ�
int ticket_count; // Ƽ�� ���Ͽ� �� ī��Ʈ ����

// ù��° ���Ḯ��Ʈ �Է� �ޱ� ���� ����
