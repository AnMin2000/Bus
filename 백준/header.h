#pragma once
#pragma warning(disable : 4996)
#define MAX 1000
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<time.h>

struct {

    int tm_sec;   //초
    int tm_min;   //분
    int tm_hour;  //시
    int tm_mday;  //일
    int tm_mon;   //월 [0~11]
    int tm_year;  //년 [현재시간 표시시 +1900 필요]
    int tm_wday;  //요일 [0-일요일, 1-월요일, ... ,6-토요일] 
    int tm_yday;  //이번해의 몇번째 일인지
    int tm_isdst;

}tm;

typedef struct {
	char email[50];
	char pw[20];
	char number[15];
    char start_region[10];
    char end_region[10];
    int month;
    int day;
}Book;

typedef struct {
    char email[50];
    char pw[20];
}Manager;

typedef struct {
    char* grade[1];        // 등급
    int month;
    int day;
    int start_hour;       // 시작시간
    int start_min;        // 시작 분
    int seat;             // 잔여석
    int money;
}Element;

typedef struct{    // 연결 리스트의 노드 구조체
    struct Node* next;    // 다음 노드의 주소를 저장할 포인터
    Element data;
}Node;

Book member[MAX];
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
// UI함수
void table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100]);// 가로 개수, 세로 개수, 가로 크기, 세로 크기, x 좌표, y 좌표, (문자?)
void original_table(int width, int height, int width_len, int height_len, int x, int y, char* msg[100]);// 가로 개수, 세로 개수, 가로 크기, 세로 크기, x 좌표, y 좌표, (문자?)
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
// 테이블 함수
void goto_xy(int x, int y);
void click(int *xx, int *yy);
void clearconsole();
void Mouse();
void ExClick();
int mainUiClick(); // 메인 ui 한정 클릭 매크로
void MouseClick(int x1, int x2, int y1, int y2); // 모든 마우스 클릭 매크로
int loginUiClick();
int calenderUiClick();
int reserve_start_click();
int reserve_end_click();
int bustime_click();
// 마우스 좌표 함수
//void reset();
void countTime(int a);
int Time(); // 현재 시간 불러오기
int isyoon(int a); // 달력 윤달 구하기
void manager_time();
void addFirst(Node* head, Element data); // 첫번째 함수
//기능 함수
void Member_read();
void Member_append(Book member);
void Member_write();
void Manager_read();
void Manager_append(Manager manager);
void Manager_write();
// 텍스트 함수
int table_count;
int count; // 멤버 관리 변수
int managerCount; // 매니저 관리 변수
int start; // 예약 출발 지역 변수                                     서울 1번 인천 2번 대구 3번 울산 4번 부산 5번
int  end; // 예약 도착 지역 변수                                      서울 1번 인천 2번 대구 3번 울산 4번 부산 5번
int num; // 사용자 id 출력해주기 위한 변수                              
char loginEmail[50]; // 메인 ui에서 사용자 id를 입력해 주기 위한 함수
int p; // 캘린더 시작 날짜 관리를 위한 변수
int day_count; // 캘린더 총 일자를 받기위한 변수
int year; // 예약 년도가 언제인지 받는 변수(중요)
int reserve_day; // 예약 날짜가 언제인지 받는 변수(중요)
int month; // 몇월달인지 입력 받아서 예약권 조정하기 위한 변수 (중요)
int today; // 다른 달은 1일로 넣어버리기 위한 값
int check; // 로그인 했는지 안했는지 체크  1이면 로그인
int ticket_id_count; // 티켓 몇번째 id인지 관리 변수
int blank_count; // 시작 달력 공백이 몇인지 계산해서 회색으로 바꿔주기 위한 코드
// 첫번째 연결리스트 입력 받기 위한 변수
