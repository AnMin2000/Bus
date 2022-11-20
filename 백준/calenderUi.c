#pragma once
#include"header.h"
int isyoon(int a) {
    if ((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int calender() {
    time_t seconds = time(NULL);
    struct tm* now = localtime(&seconds);

    int original_month; // 원래 몇월달인지 변수
    int next = 333; // 다음달 클릭
    original_month = now->tm_mon + 1; // next_count 추가햇음
    year = 1900 + now->tm_year;
    int next_count = 0;
    month = original_month;
    while (1) {
        Mouse();
        int count = 0;
        int i; // for문용 변수
        int j; // for문용 변수
        int k; // 저장용 변수
        int sum = 0; // 현재의 모든 일 계산 변수
        int chk = 0; // 윤년 확인 변수
        int basicyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 기본 1~12월 일수
        char* week[7] = { "일","월","화","수","목","금","토" };
        char* day[31] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31" };
        char* msg[49] = { "0", };
        table_count = 0;
        blank_count = 0;
        day_count = 0;

        if (next == 0)  month += next_count;
        else if (next == -1) month -= next_count;

        today = now->tm_mday;
        if (month != original_month) {   // nextcount를 전체적으로 다 수정해야됨.
            today = 1;
            table_count = 0;
        }
        else if (month == original_month) {
            today = now->tm_mday;
            table_count = 0;
        }
        //알고리즘

            //윤달 확인
        if (isyoon(year)) {
            chk = 1;
            basicyear[1]++;
        }
        else
            chk = 0;

        //0년부터 작년까지 며칠인지 셈
        sum = 365;
        for (i = 1; i < year; i++) {
            if (isyoon(i))
                sum += 366;
            else
                sum += 365;
        }

        //입력한 달까지 며칠인지 
        for (i = 0; i < month - 1; i++) {
            sum += basicyear[i];
        }

        //1월1일 무슨 요일인지 계산
        k = sum % 7;

        //출력
        for (int m = 0; m < 7; m++) {
            msg[m] = week[m];
            count++;
        }
        //시작 요일에 맞춰 정렬
        for (j = 7; j < k + 7; j++) {
            msg[j] = "\t";
            blank_count++;
            count++;
        }
        for (i = 0; i < basicyear[month - 1]; i++) {
            msg[i + k + 7] = day[i];
            count++;
            day_count++;
        }
        for (int L = 0; L < 49 - count; L++) {
            msg[count + L] = "\t";
        }
        goto_xy(50, 6);
        if(original_month==month)
        printf("  %d.%d", 1900 + now->tm_year, month);
        else {
            goto_xy(51, 6);
            printf("%d.%d", 1900 + now->tm_year, month);
        }
        goto_xy(41, 7);
        printf("────────────────────────────");
        goto_xy(67, 6);
        printf("▶");
        goto_xy(41, 6);
        printf("◀");
        table(5, 2, 7, 7, 40, 8, msg);
        //ExClick();
        for (p = 0; p < 7; p++)
        {
            // printf("%s", *msg[p + 7]);
            if (strcmp(msg[p + 7], "1") == 0) {
                next = calenderUiClick();
                reserve_day = next;
            }
            // goto_xy(0, 80);
        }
        if (reserve_day > 0)
        {
            //clearconsole();
         //   printf("%d월 %d일",month, reserve_day);
            return reserve_day;  // 현재가 몇일 인지 관리해 주기 위한 변수
        }
        else if (next == 0) // 다음 달 클릭시
        {
            next_count = 1; // 처리 어케 할것인가
            day_count = 0;
           // calender_count = -1;
            continue;
        }
        else if (next == -1)
        {
            next_count = 1; // 처리 어케 할것인가
            day_count = 0;
           // calender_count = -1;
            continue;
        }
    }
}