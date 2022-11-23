#pragma once
#include"header.h"
void searchUi()
{
	char search_id[50];
	char search_num[50];
	int i;

	while (1) {
		square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
		square(81, 18, 14, 6);
		square_char(70, 2, 18, 8, "PW 찾기");
		goto_xy(19, 12);
		printf("이메일 주소를 입력해 주세요");
		goto_xy(19, 13);
		printf("☞");
		scanf("%s%*c", &search_id);
		goto_xy(19, 15);
		printf("전화번호를 입력해주세요");
		goto_xy(19, 16);
		printf("☞");
		scanf("%s%*c", &search_num);

		for (i = 0; i < count; i++) {
			if (strcmp(search_id, member[i].email) == 0 && strcmp(search_num, member[i].number) == 0)
				goto A;
			
		}
	}
	A:
	square_char(13, 2, 19, 18, "PW찾기");
	MouseClick(20, 32, 18, 20);

	square(85, 29, 12, 1);
	square(60, 7, 25, 11);
	square(48, 2, 32, 13);
	goto_xy(40, 14);
	printf("귀하의 비밀번호는 : %s입니다.", member[i].pw);
	goto_xy(0, 30);

	countTime(1);

	
}