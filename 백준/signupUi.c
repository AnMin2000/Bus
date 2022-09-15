#pragma once
#include"header.h"
void SignUpUi()
{
	square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
	square(81, 18, 14, 6);
	square_char(70, 2, 18, 8, "회원가입");
	goto_xy(19, 12);
	printf("사용하실 이메일 주소를 입력해 주세요");
	goto_xy(19, 13);
	printf("☞");
	scanf("%s%*c", &member[count-1].email);
	goto_xy(19, 15);
	printf("사용하실 비밀번호를 입력해 주세요");
	goto_xy(19, 16);
	printf("☞");
	scanf("%s%*c", &member[count-1].pw);

	goto_xy(19, 18);
	printf("사용하실 전화번호를 입력해 주세요");
	goto_xy(19, 19);
	printf("☞");
	scanf("%s%*c", &member[count-1].number);

	strcpy(member[count - 1].start_region, "0");
	strcpy(member[count - 1].end_region, "0");
	member[count - 1].month = 0;
	member[count - 1].day = 0;

	Member_append(member[count-1]);
	count++;
	Mouse();

	square_char(14, 2, 19, 21, "회원가입");
	MouseClick(20, 32, 21, 23);


	square(85, 29, 12, 1);
	square(60, 7, 25, 11);
	square_char(19, 2, 46, 13, "환영합니다");

	countTime(2);
	MainUi();
}