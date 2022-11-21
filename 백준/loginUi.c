#pragma once
#include"header.h"

void LoginUi()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	Mouse();
	char loginPw[20];

	int tmp = 0, i;
	int tmp1;

	square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
	square(81, 18, 14, 6);

	//square_char(11, 2, 42, 14, "사용자");
	//square_char(11, 2, 54, 14, "관리자");

	//tmp = loginUiClick();
	tmp = 1;
	
	if (tmp == 1) {
		//square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
		//square(81, 18, 14, 6);
		//square_char(70, 2, 18, 8, "사용자 로그인");
		//goto_xy(19, 12);
		//printf("이메일 주소를 입력해 주세요");
		//goto_xy(19, 13);
		//printf("☞");
		//scanf("%s%*c", &loginEmail);
		//goto_xy(19, 15);
		//printf("비밀번호를 입력해 주세요");
		//goto_xy(19, 16);
		//printf("☞");
		//scanf("%s%*c", &loginPw);
		strcpy(loginEmail, "iededg@naver.com");
		strcpy(loginPw, "123");
		clearconsole();

		ticket_id_count = 0;
		for (int j = 0; j < count; j++) {
			if (strcmp(loginEmail, member[j].email) == 0 && strcmp(loginPw, member[j].pw) == 0)
			{
				/*square_char(13, 2, 19, 18, "로그인");
				MouseClick(20, 32, 18, 20);*/
				check = 1;
				num++;
				strcpy(ticket[ticket_count - 1].email, loginEmail);
				goto ONE;
			}
			ticket_id_count++;
		}
		clearconsole();
		LoginUi();
		return 0;

	ONE:
		MainUi();
	}
	else if (tmp == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
		square(81, 18, 14, 6);
		square_char(70, 2, 18, 8, "관리자 로그인");
		goto_xy(19, 12);
		printf("이메일 주소를 입력해 주세요");
		goto_xy(19, 13);
		printf("☞");
		scanf("%s%*c", &loginEmail);
		goto_xy(19, 15);
		printf("비밀번호를 입력해 주세요");
		goto_xy(19, 16);
		printf("☞");
		scanf("%s%*c", &loginPw);

		for (i = 0; i < MAX; i++) {
			for (int j = 0; j < managerCount; j++) {
				if (strcmp(loginEmail, manager[j].email) == 0 && strcmp(loginPw, manager[j].pw) == 0)
				{
					square_char(13, 2, 19, 18, "로그인");
					MouseClick(20, 32, 18, 20);
					goto TWO;
				}
			}
			clearconsole();
			LoginUi();
			return 0;

		}
	TWO:
		square(85, 29, 12, 1);
		square_char(35, 2, 36, 4, "관리자 UI");
		square(61, 16, 24, 9);
		square_char(13, 2, 47, 14, "배차조정");
		square_char(13, 2, 47, 18, "매출확인");

		tmp1 = bustime_click();

		if (tmp1 == 1)
		{
			//배차 조정
			manager_time();
		}
		else if (tmp1 == 2)
		{
				//매출 확인
		}
		//ExClick();
		
		
	}
}